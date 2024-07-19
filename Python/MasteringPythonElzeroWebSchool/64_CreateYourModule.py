# -----------------------------------
# -- Modules => Create Your Module --
# -----------------------------------

import sys

sys.path.append(
    r"D:\Games"
)  # if you want to add a new path for your modules in case the vs code did't find in
print(sys.path)

import elzero

print(dir(elzero))

elzero.sayHello("Ahmed")
elzero.sayHello("Osama")
elzero.sayHello("Mohamed")

elzero.sayHowAreYou("Ahmed")
elzero.sayHowAreYou("Osama")
elzero.sayHowAreYou("Mohamed")

# Alias

import elzero as ee

ee.sayHello("Ahmed")
ee.sayHello("Osama")
ee.sayHello("Mohamed")

ee.sayHowAreYou("Ahmed")
ee.sayHowAreYou("Osama")
ee.sayHowAreYou("Mohamed")

from elzero import sayHello

sayHello("Osama")

from elzero import sayHello as ss

ss("Osama")
