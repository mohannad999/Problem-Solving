# ------------------------
# -- Built In Functions --
# ------------------------
# sum()
# round()
# range()
# print()
# ------------------------

# sum(iterable, add anoter number)
a = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(sum(a))
print(sum(a, 5))
print(sum(a, 10))

# round(number, numofdigits)
print(round(119.34))
print(round(119.501))
print(round(150.554, 2))

# range(start, end, step)

mylist=list(range(90,100))
print(mylist)
print(list(range(0)))
print(list(range(10)))
print(list(range(0, 20, 2)))

# print()
print("Hello @ Osama @ How @ Are @ You")
print("Hello", "Osama", "How", "Are", "You", sep=" | ")

print("First Line", end=" ")
print("Second Line")
print("Third Line")
