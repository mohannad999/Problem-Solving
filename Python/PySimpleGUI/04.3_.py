import PySimpleGUI as sg
import random


class BtnInfo:
    def __init__(self, state=True):
        self.state = state


def main():
    layout = [
        [sg.Text('Toggle Button')],
        [sg.T('Disabled with PySimpleGUI Ignore:', text_color='yellow')],
        [sg.Button('Enable/Disable Button', k='-DISABLE1-'),
         sg.Button('Button to Disable/Enable', k='-TOGGLE1-')],
        [sg.Button('Exit')]
    ]

    window = sg.Window('Window Title', layout, font='_ 14', finalize=True)

    while True:
        event, values = window.read()
        if event in (sg.WIN_CLOSED, 'Exit'):
            break

        if event == '-DISABLE1-':
            target_button = '-TOGGLE1-'  # Button to disable/enable
            # Toggle the state of the target button
            window[target_button].update(disabled=not window[target_button].Disabled)
            # window['-DISABLE1-'].update(
            #     'Disable' if window[target_button].Disabled else 'Enablexx')

    window.close()


if __name__ == '__main__':
    main()
