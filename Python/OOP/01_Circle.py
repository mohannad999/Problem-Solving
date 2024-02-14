
class Circle():

    # Class object atteribure
    pi = 3.14

    def __init__(self, radius=1):
        self.radius = radius
        self.area = radius*radius*self.pi

    def get_circumference(self):
        return self.radius * self.pi * 2


mycircle = Circle(20)

# print(mycircle.get_circumference())
print(mycircle.area)
