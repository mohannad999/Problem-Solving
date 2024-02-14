
import PySimpleGUI as sg

layout = [[sg.Text('Enter something:'), sg.Input(k='-IN-')],
          [sg.Text('Our output will go here', size=(30,1), k='-OUT-')],
          [sg.Button('OK'), sg.Button('Exit')]]

window = sg.Window('Title', layout)

while True:
    event, values = window.read()

    if event == 'Exit' or event == sg.WIN_CLOSED:
        break

    window['-OUT-'].update(values['-IN-'])

window.close()