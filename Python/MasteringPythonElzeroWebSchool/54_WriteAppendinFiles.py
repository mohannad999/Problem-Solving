# -----------------------------------------------
# -- File Handling => Write and Append In File --
# -----------------------------------------------

# myFile = open(r"C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Python\testFile.txt", "w")
# myFile.write("Hello\n")
# myFile.write("Third Line")

# myFile = open(r"C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Python\testFile.txt", "w")
# myFile.write("Embedded System Engineer\n" * 1000)

myList = ["\nMohannad\n", "Ahmed\n", "Alzaatreh\n"]

myFile = open(r"C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Python\testFile.txt", "a")
myFile.writelines(myList)

