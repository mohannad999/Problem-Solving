# --------------------------------------------
# -- Doc String & Commenting vs Documenting --
# --------------------------------------------
# [1] Documentation String For Class, Module or Function
# [2] Can Be Accessed From The Help and Doc Attributes
# [3] Made For Understanding The Functionality of The Complex Code
# [4] Theres One Line and Multiple Line Doc Strings
# -------------------------------------------------

def Mohannad_function(name):
  """
  Mohannad Function
    It Say Hello From Mohannad
  Parameter:
    name => Person Name That Use Function
  Return:
    Return Hello Message To The Person
  """
  print(f"Hello {name} From Mohannad")

Mohannad_function("Ahmed")

print(dir(Mohannad_function))

print(Mohannad_function.__doc__)

help(Mohannad_function)