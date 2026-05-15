import csv
import random
import string
import os
from datetime import date

# --- Configuration ---
NUM_TEACHERS = 100000
NUM_STUDENTS = 400000
NUM_PARENTS = 0
OUTPUT_FILE = "database.csv"
GLOBAL_PASSWORD = "azerty123"  # All users will use this


# --- Hashing Function ---
def djb2(password):
    """Standard djb2 hashing algorithm."""
    hash_val = 5381
    for char in password:
        # bitwise: (hash << 5) + hash is equivalent to hash * 33
        hash_val = ((hash_val << 5) + hash_val) + ord(char)
        hash_val &= 0xFFFFFFFF  # Keep to 32-bit unsigned
    return str(hash_val)


# --- Data pools (First and Last Names remain the same as your list) ---
FIRST_NAMES = ["Alice", "Bob", "Charlie", "Diana", "Edward", "Fiona", "George", "Hannah", "Ivan", "Julia", "Kevin",
               "Laura", "Michael", "Nina", "Oliver", "Paula", "Quinn", "Rachel", "Samuel", "Tina", "Umar", "Victoria",
               "William", "Xena", "Yusuf", "Zara", "Liam", "Emma", "Noah", "Olivia", "Ethan", "Sophia", "Mason",
               "Isabella", "Lucas", "Mia", "Logan", "Charlotte", "James", "Amelia", "Aaron", "Bella", "Caleb", "Daisy",
               "Eli", "Faith", "Gabriel", "Holly", "Isaac", "Jade", "Kai", "Luna", "Marcus", "Nora", "Owen", "Phoebe",
               "Remy", "Stella", "Theo", "Uma", "Vincent", "Wendy", "Xander", "Yasmine", "Zion", "Aria", "Blake",
               "Chloe", "Dylan", "Elena", "Felix", "Grace", "Hugo", "Iris", "Julian", "Kira", "Leon", "Maya", "Nathan",
               "Rosa", "Adrian", "Bianca", "Connor", "Delia", "Ezra", "Freya", "Gideon", "Hazel", "Idris", "Joanna",
               "Kyle", "Lydia", "Miles", "Naomi", "Oscar", "Penelope", "Rowan", "Sienna", "Tobias", "Ursula", "Vance",
               "Whitney", "Xiomara", "Yara", "Zach", "Amelie", "Brendan", "Camille", "Darian", "Esme", "Finn",
               "Georgia", "Harley", "India", "Jesse", "Kaitlyn", "Lance", "Monica", "Neil", "Opal", "Percy", "Queenie",
               "Rex", "Sabrina", "Tristan", "Una", "Vivian", "Wade", "Ximena", "Yolanda", "Zeke", "Alana", "Bryce",
               "Celeste", "Dean", "Ember", "Fletcher", "Gemma", "Heath", "Ingrid", "Jasper", "Kelsey", "Leah", "Matteo",
               "Nia", "Orlando", "Petra", "Quinton", "Rhea", "Stefan", "Tamara", "Ulric", "Vera", "Winston", "Ximena",
               "Yvette", "Zander", "Abby", "Bennett", "Coral", "Damon", "Elise", "Ford", "Greta", "Hector", "Imani",
               "Jonah", "Katerina", "Leandro", "Miriam", "Nico", "Odette", "Pierce", "Quintessa", "Rafe", "Selene",
               "Tanner", "Unity", "Vito", "Willa", "Xerxes", "Yvonne", "Zola", "Alec", "Bria", "Cruz", "Della", "Enzo",
               "Fleur", "Gunnar", "Hana", "Ignacio", "Juno", "Knox", "Lena", "Marco", "Nell", "Otto", "Priya", "Reed",
               "Sage", "Tatum", "Uri", "Valencia", "West", "Xyla", "York", "Zuri", "Amos", "Blythe", "Cypress", "Drew",
               "Evan", "Fallon", "Glen", "Harper", "Inigo", "Joy", "Kaden", "Luz", "Maren", "Niles", "Oakley", "Penn",
               "Raina", "Soren", "Tess", "Ulysses", "Vale", "Wolf", "Xio", "Yael", "Zeb", "Alton", "Birdie", "Cash",
               "Dove", "Erie", "Frost", "Gwen", "Hadley", "Ike", "Joss", "Kit", "Lark", "Moss", "North", "Olive", "Paz",
               "Ren", "Sky", "True", "Uma", "Vex", "Wren", "Xen", "Yew", "Zev", "Aldous", "Bram", "Cressida", "Dorian",
               "Elowen", "Florian", "Galadriel", "Huxley", "Isolde", "Jarvis", "Kerensa", "Lysander", "Mireille",
               "Niobe", "Oberon", "Ptolemy", "Rosamund", "Silvio", "Thalia", "Umberto", "Violetta", "Walburga",
               "Xiulan", "Yannick", "Zelophehad", "Astrid", "Bastian", "Cato", "Dagmar", "Einar", "Frida", "Gunhild",
               "Halfdan", "Inga", "Jorvik", "Katla", "Leif", "Magnhild", "Njord", "Oskar", "Ragna", "Sigrid", "Torsten",
               "Ulf", "Vigdis", "Ylva", "Alaric", "Brunhilde", "Casimir", "Dagny", "Egil", "Fionn", "Grainne", "Hamish",
               "Imogen", "Jarlath", "Keiran", "Lachlan", "Maeve", "Niall", "Orlaith", "Padraig", "Roisin", "Seamus",
               "Tadhg", "Uilleam", "Vasilios", "Wenceslas", "Xenophon", "Yiannis", "Zenon", "Aleksei", "Bogdan",
               "Czeslaw", "Dmitri", "Efim", "Fyodor", "Gennady", "Hleb", "Igor", "Jakub", "Kazimir", "Lavrentiy",
               "Miroslav", "Nikita", "Oleg", "Pavel", "Radoslav", "Stanislav", "Timur", "Vadim", "Yaroslav", "Zinovy",
               "Anatoly", "Boris", "Cyril", "Daniil", "Evgeny", "Filipp", "Georgy", "Ilya", "Konstantin", "Leonid",
               "Matvei", "Nikolai", "Piotr", "Ruslan", "Semyon", "Taras", "Vasily", "Yuri", "Zakhar", "Aiko", "Daichi",
               "Emiko", "Fujiko", "Goro", "Hiroshi", "Ichiro", "Jin", "Keiko", "Makoto", "Naoki", "Reiko", "Sakura",
               "Takeshi", "Yuki", "Akira", "Haru", "Kaito", "Misaki", "Ren", "Satsuki", "Taro", "Yuna", "Zenko",
               "Amara", "Bayo", "Chidi", "Dami", "Emeka", "Fatou"]
LAST_NAMES = ["Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Martinez", "Hernandez",
              "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin", "Lee",
              "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Ramirez", "Lewis", "Robinson", "Walker",
              "Hall", "Allen", "Young", "King", "Wright", "Scott", "Torres", "Nguyen", "Hill", "Flores", "Green",
              "Adams", "Nelson", "Baker", "Carter", "Mitchell", "Roberts", "Turner", "Phillips", "Campbell", "Parker",
              "Evans", "Edwards", "Collins", "Stewart", "Morris", "Rogers", "Reed", "Cook", "Morgan", "Bell", "Murphy",
              "Bailey", "Rivera", "Cooper", "Richardson", "Cox", "Howard", "Ward", "Peterson", "Gray", "Ramirez",
              "James", "Watson", "Brooks", "Kelly", "Sanders", "Price", "Bennett", "Wood", "Barnes", "Ross",
              "Henderson", "Coleman", "Jenkins", "Perry", "Powell", "Long", "Patterson", "Hughes", "Flores",
              "Washington", "Butler", "Simmons", "Foster", "Gonzales", "Bryant", "Alexander", "Russell", "Griffin",
              "Diaz", "Hayes", "Myers", "Ford", "Hamilton", "Graham", "Sullivan", "Wallace", "Woods", "Cole", "West",
              "Jordan", "Owens", "Reynolds", "Fisher", "Ellis", "Harrison", "Gibson", "Mcdonald", "Cruz", "Marshall",
              "Ortiz", "Gomez", "Murray", "Freeman", "Wells", "Webb", "Simpson", "Stevens", "Tucker", "Porter",
              "Hunter", "Hicks", "Crawford", "Henry", "Boyd", "Mason", "Morales", "Kennedy", "Warren", "Dixon", "Ramos",
              "Reyes", "Burns", "Gordon", "Shaw", "Holmes", "Rice", "Robertson", "Hunt", "Black", "Daniels", "Palmer",
              "Mills", "Nichols", "Grant", "Knight", "Ferguson", "Rose", "Stone", "Hawkins", "Dunn", "Perkins",
              "Hudson", "Spencer", "Gardner", "Stephens", "Payne", "Pierce", "Berry", "Matthews", "Arnold", "Wagner",
              "Willis", "Ray", "Watkins", "Olson", "Carroll", "Duncan", "Snyder", "Hart", "Cunningham", "Bradley",
              "Lane", "Andrews", "Ruiz", "Harper", "Fox", "Riley", "Armstrong", "Carpenter", "Weaver", "Greene",
              "Lawrence", "Elliott", "Chavez", "Sims", "Austin", "Peters", "Kelley", "Franklin", "Lawson", "Fields",
              "Gutierrez", "Ryan", "Schmidt", "Carr", "Vasquez", "Castillo", "Wheeler", "Chapman", "Oliver",
              "Montgomery", "Harvey", "Little", "Fitzgerald", "Burton", "Lawrence", "Robbins", "Sutton", "Jacobs",
              "Bowman", "Cannon", "Mckinney", "Walton", "Lucas", "Fleming", "Bowen", "Sharp", "Cummings", "Ramsey",
              "Hardy", "Swanson", "Barker", "Mcguire", "Fowler", "Booth", "Holt", "Valencia", "Terrell", "Lindsey",
              "Haynes", "Byrd", "Mcclure", "Morrow", "Holman", "Finley", "Barton", "Schroeder", "Glover", "Patel",
              "Shah", "Kapoor", "Sharma", "Mehta", "Nair", "Iyer", "Reddy", "Krishnan", "Bose", "Chatterjee",
              "Mukherjee", "Banerjee", "Das", "Sen", "Gupta", "Joshi", "Mishra", "Pandey", "Tiwari", "Nakamura",
              "Tanaka", "Watanabe", "Ito", "Yamamoto", "Kobayashi", "Kato", "Suzuki", "Sato", "Inoue", "Kimura",
              "Hayashi", "Shimizu", "Yamaguchi", "Saito", "Matsumoto", "Ogawa", "Ikeda", "Nishimura", "Fujita",
              "Okamoto", "Goto", "Hasegawa", "Mori", "Ishikawa", "Maeda", "Fujii", "Ono", "Tamura", "Endo"]


def random_name(pool):
    return random.choice(pool)


def random_email(first, last):
    domain = random.choice(["gmail.com", "yahoo.com", "outlook.com", "school.edu", "example.com"])
    sep = random.choice([".", "_", ""])
    num = random.randint(1, 999) if random.random() > 0.5 else ""
    return f"{first.lower()}{sep}{last.lower()}{num}@{domain}"


def random_dob(min_age, max_age):
    today = date.today()
    age = random.randint(min_age, max_age)
    birth_year = today.year - age
    birth_month = random.randint(1, 12)
    max_day = 28
    birth_day = random.randint(1, max_day)
    return f"{birth_day}/{birth_month}/{birth_year}"


def generate_users():
    users = []
    student_surnames = []

    # Pre-hash the global password once to save performance
    hashed_password = djb2(GLOBAL_PASSWORD)

    # --- Teachers ---
    for _ in range(NUM_TEACHERS):
        first = random_name(FIRST_NAMES)
        last = random_name(LAST_NAMES)
        users.append({
            "Surname": last,
            "Name": first,
            "E-mail": random_email(first, last),
            "Password": hashed_password,
            "Date Of Birth": random_dob(28, 60),
            "Role": "Teacher",
            "Child": "None"
        })

    # --- Students ---
    for _ in range(NUM_STUDENTS):
        first = random_name(FIRST_NAMES)
        last = random_name(LAST_NAMES)
        student_surnames.append(last)
        users.append({
            "Surname": last,
            "Name": first,
            "E-mail": random_email(first, last),
            "Password": hashed_password,
            "Date Of Birth": random_dob(6, 18),
            "Role": "Student",
            "Child": "None"
        })

    # --- Parents ---
    for _ in range(NUM_PARENTS):
        first = random_name(FIRST_NAMES)
        last = random_name(LAST_NAMES)
        child = random.choice(student_surnames) if student_surnames else "None"
        users.append({
            "Surname": last,
            "Name": first,
            "E-mail": random_email(first, last),
            "Password": hashed_password,
            "Date Of Birth": random_dob(28, 55),
            "Role": "Parent",
            "Child": child
        })

    random.shuffle(users)
    return users


def write_csv(users, filename):
    fieldnames = ["Surname", "Name", "E-mail", "Password", "Date Of Birth", "Role", "Child"]
    with open(filename, "w", newline="", encoding="utf-8") as f:
        writer = csv.DictWriter(f, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(users)
    print(f"✅ Generated {len(users)} users with hashed passwords → '{filename}'")


if __name__ == "__main__":
    users = generate_users()
    write_csv(users, OUTPUT_FILE)