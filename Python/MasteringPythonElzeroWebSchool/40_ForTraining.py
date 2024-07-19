# -----------------
# -- Loop => For --
# --  Trainings  --
# -----------------

# Range

myRange = range(1, 101)

for number in myRange:
    print(number)

# Dictionary

mySkills = {
    "Html": "90%",
    "Css": "60%",
    "PHP": "70%",
    "JS": "80%",
    "Python": "90%",
    "MySQL": "60%",
    "Embedded System": {
        "Electronics": {"Design": "79%", "PCB": "90%", "Simulation": "70%"},
        "Microcontrollers": ["Stm32", "ESP32", "Arduino"],
        "IDE":["STMCubeIde","ESP-idf","Arduino"]
    },
}


# print(mySkills["JS"])
# print(mySkills.get("Python"))

# # print(f'{mySkills.keys()}')
# print(f'{mySkills}')

# print(f' My progress in {mySkills["Embedded System"]["Electronics"]["PCB"]}')

for skill in mySkills:
    # print(skill)
    print(f"My Progress in Lang {skill} Is: {mySkills.get(skill)}")


# myDict={"Name" : "Mohannad"}

# print(myDict)

myDict={"Name" : "Mohannad"}
for name in myDict: 
   print(name)