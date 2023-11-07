#!/c/msys64/mingw64/bin/python3

# print("Hello World ");print ("Python")
print("Hello World ")
print("Python")

# ------Data type---------
# type()
# All Data in Python is Object
# -----------------------
print(10.5)
print(type(10.5))
print(type([1, 2, 3, 4, 5]))  # List
print(type((1, 2, 3, 4, 5)))  # tuple
print(type({"One": 1, "Two": 2, "Three": 3}))  # Dictionary
print(2 == 2)
print(type(2 == 3))  # Boolean


# --------Variables---------
MyVariable = "My Variable"
print(MyVariable)

# Reserved words
##help("keywords")

a, b, c = 1, 2, 3
print(a)
print(b)
print(c)


# ----------------------------
# Escape Sequences Characters
# \b => Back Space
# \newline => Escape New Line + \
# \\ => Escape Back Slash
# \' => Escape Single Quotes
# \" => Escape Double Quotes
# \n => Line Feed
# \r => Carriage Return
# \t => Horizontal Tab
# \xhh => Character Hex Value
# ----------------------------

# Back Space
print("Hello\bWorld")  # Will Remove o

# Escape New Line + Back Slash
print(
    "Hello \
I Love \
Python"
)

# Escape Back Slash
print("I Love Back Slash \\")

# Escape Single Quote
print("I Love Single Quote 'Test' ")

# Escape Double Quotes
print('I Love Double Quotes "Test" ')

# Line Feed
print("Hello World\nSecond Line")

# Carriage Return
print("123456\rAbcde")

# Horizontal Tab
print("Hello\tPython")

# Character Hex Value
print("\x4F\x73")
