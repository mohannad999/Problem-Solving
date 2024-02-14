class Animal():
    def __init__(self) -> None:
        print("Animal Created")

    def eat(self):
        print("Animal eating")


# myAnimal = Animal()


class Dog(Animal):

    def __init__(self) -> None:
        Animal.__init__(self)
        print("Dog Created")

    def bark(self):
        print("WOOF!")

    def eat(self):
        print("Dog eating")


Mydog = Dog()

Mydog.bark()
Mydog.eat()
