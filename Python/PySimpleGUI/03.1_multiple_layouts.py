import PySimpleGUI as sg

# ----------- Create the 3 layouts this Window will display -----------
layout1 = [[sg.Text('This is layout 1 - It is all Checkboxes')],
           *[[sg.CB(f'Checkbox {i}')] for i in range(5)]]

layout2 = [[sg.Text('This is layout 2')],
           [sg.Input(key='-IN-')],
           [sg.Input(key='-IN2-')]]

layout3 = [[sg.Text('This is layout 3 - It is all Radio Buttons')],
           *[[sg.R(f'Radio {i}', 1)] for i in range(8)]]

# ----------- Create actual layout using Columns and a row of Buttons
layout = [[sg.Column(layout1, key='-COL1-'), sg.Column(layout2, visible=False, key='-COL2-'), sg.Column(layout3, visible=False, key='-COL3-')],
          [sg.Button('EtherNet'), sg.Button('Sensors'), sg.Button('DigitalOutput'), sg.Button('Exit')]]

window = sg.Window('Swapping the contents of a window', layout)

current_layout = 1  # The currently visible layout

while True:
    event, values = window.read()
    print(event, values)
    if event in (None, 'Exit'):
        break

    # Hide the current layout
    window[f'-COL{current_layout}-'].update(visible=False)

    # Show the new layout based on the button clicked
    if event == 'EtherNet':
        current_layout = 1
    elif event == 'Sensors':
        current_layout = 2
    elif event == 'DigitalOutput':
        current_layout = 3

    window[f'-COL{current_layout}-'].update(visible=True)

window.close()
