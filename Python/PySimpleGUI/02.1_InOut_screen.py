import PySimpleGUI as sg

# Initial values
ip = "192.168.0.1"
mask = "255.255.255.0"
gateway = "192.168.1.1"

layout = [
    [sg.Button('IP', key='BTN_IP', size=(8, 1)), sg.Text(ip, size=(20, 1), k='-OUT_IP-')],
    [sg.Button('MASK', key='BTN_MASK', size=(8, 1)), sg.Text(mask, size=(20, 1), k='-OUT_MASK-')],
    [sg.Button('GATEWAY', key='BTN_GATEWAY', size=(8, 1)), sg.Text(gateway, size=(20, 1), k='-OUT_GATEWAY-')],
    [sg.Button('OK'), sg.Button('Exit')]
]

window = sg.Window('Ethernet data', layout)

while True:
    event, values = window.read()

    if event == 'BTN_IP':
        # Update the IP value and the window
        ip = "111.11.0.1"
        window['-OUT_IP-'].update(ip)

    elif event == 'BTN_MASK':
        # Update the MASK value and the window
        mask = "222.222.222.0"
        window['-OUT_MASK-'].update(mask)

    elif event == 'BTN_GATEWAY':
        # Update the GATEWAY value and the window
        gateway = "333.333.33.1"
        window['-OUT_GATEWAY-'].update(gateway)

    elif event == 'Exit' or event == sg.WIN_CLOSED:
        break

window.close()
