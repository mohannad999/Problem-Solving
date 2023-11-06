# -------------------------------------------------
# -- Practical => Image Manipulation With Pillow --
# -------------------------------------------------

# https://pillow.readthedocs.io/en/stable/handbook/tutorial.html

from PIL import Image

# Open The Image
myImage = Image.open(r"C:\Users\USER\Desktop\Learn Programing\Drone.JPG")

# Show The Image
myImage.show()

# My Cropped Image
myBox = (0, 300, 1000, 1000)
myNewImage = myImage.crop(myBox)

# Show The New Image
myNewImage.show()

# My Converted Mode Image
myConverted = myImage.convert("L")
myConverted.show()