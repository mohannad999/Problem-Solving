# ----------------------------------
# -- Ternary Conditional Operator --
# ----------------------------------

country = "A"

if country == "Jordan":
    print(f"The Weather in {country} Is 20")
elif country == "Qater":
    print(f"The Weather in {country} Is 40")
else:
    print("Country is Not in The List")

# Short If

movieRate = 18
age = 17

if age < movieRate:
    print("Movie S Not Good 4U")  # Condition If True

else:
    print("Movie S Good 4U And Happy Watching")  # Condition If False

print(
    "Movie S Not Good 4U" if age < movieRate else "Movie S Good 4U And Happy Watching"
)

# Condition If True | If Condition | Else | Condition If False

print(f'you don\'t have access' if age<18 else 'Welcome' )