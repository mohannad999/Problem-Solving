# --------------------------------
# -- File Handling => Read File --
# --------------------------------

myFile = open(
    r"C:\Users\USER\Desktop\Learn Programing\Problem-Solving\Python\mohanad.txt"
)

# print(myFile)  # File Data Object
# print(myFile.name)
# print(myFile.mode)
# print(myFile.encoding)

# print(myFile.read()) #print of data in the File
# print(myFile.read(12)) # Number of characters

# print(myFile.readline(10)) #print 10 char in the curent line
# print(myFile.readline())
# print(myFile.readline())

#print(myFile.readlines())  # read all lines and put them in them in a list
#print(myFile.readlines(50)) #read First 50 chartaer in File
# print(type(myFile.readlines()))

for line in myFile:

  print(line)

  if line.startswith("7-"):

    break

# Close The File

myFile.close()
