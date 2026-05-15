import csv
import os


def djb2(password):
    """
    Standard djb2 hashing algorithm.
    Uses bitwise operations to simulate 32-bit unsigned integer behavior.
    """
    hash_val = 5381
    for char in password:
        # hash * 33 + char
        hash_val = ((hash_val << 5) + hash_val) + ord(char)
        # Keep it to a 32-bit unsigned integer
        hash_val &= 0xFFFFFFFF
    return str(hash_val)


def process_passwords(filename):
    temp_filename = "database_temp.csv"
    fieldnames = ["Surname", "Name", "E-mail", "Password", "Date Of Birth", "Role", "Child"]

    # Check if the file exists before trying to read it
    if not os.path.exists(filename):
        print(f"Error: {filename} not found. Please recreate the file first.")
        return

    try:
        # Open input for reading and a NEW temp file for writing
        with open(filename, mode='r', newline='', encoding='utf-8') as infile, \
                open(temp_filename, mode='w', newline='', encoding='utf-8') as outfile:

            # Using DictReader without 'fieldnames' lets it auto-detect the header from the first row
            reader = csv.DictReader(infile)
            writer = csv.DictWriter(outfile, fieldnames=fieldnames)

            # Write the header to the new file
            writer.writeheader()

            counter = 0
            for row in reader:
                # Hash the password field
                row["Password"] = djb2(row["Password"])
                writer.writerow(row)
                counter += 1

        # Replace the original file with the successfully created temp file
        os.replace(temp_filename, filename)
        print(f"Success! Processed {counter} rows. '{filename}' has been updated.")

    except Exception as e:
        print(f"An error occurred: {e}")
        # Clean up temp file if something went wrong
        if os.path.exists(temp_filename):
            os.remove(temp_filename)


if __name__ == "__main__":
    process_passwords("database.csv")