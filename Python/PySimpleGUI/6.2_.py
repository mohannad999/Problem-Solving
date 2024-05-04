import PySimpleGUI as sg
from PIL import Image

# Path to your original image
image_path = "/home/mohannad/Documents/Problem-Solving/Python/PySimpleGUI/settings.png"

# Open the image using Pillow
image = Image.open(image_path)

# Resize the image to your desired size, for example, (50, 50) pixels
image = image.resize((30, 30), Image.ANTIALIAS)

# Save the resized image to a new file
resized_image_path = "/home/mohannad/Documents/Problem-Solving/Python/PySimpleGUI/resizedsettings.png"
image.save(resized_image_path)

# Use the resized image in your PySimpleGUI layout
layout = [[sg.Button(
    button_text='', image_filename=resized_image_path, key='Settings', border_width=0)]]

# Create the Window
window = sg.Window('Window Title', layout)

# Event Loop to process "events" and get the "values" of the inputs
while True:
    event, values = window.read()
    if event == sg.WIN_CLOSED:  # if user closes window or clicks cancel
        break
    if event == 'Settings':
        print('Settings button clicked')

window.close()
