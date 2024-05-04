import PySimpleGUI as sg

# Initial values
ip = "192.168.0.1"
mask = "999.255.255.0"
gateway = "192.168.1.1"
mode = 'TCP Server'
boadRate = '9600'
port = '2000'


layout = [
    [sg.Text('mode :'), sg.Text(mode, k='-MODE_IP-'),
     sg.Text('Boad Rate'), sg.Text(boadRate, k='-BOAD_IP-')],
    [sg.Text('IP :', size=(11, 1), justification='center'),
     sg.Text(ip, size=(16, 1), k='-OUT_IP-'),
     sg.Button('SET', key='SET_IP', size=(8, 1)),
     sg.Input(size=(3, 1), k='-IP1-'), sg.Text('.'), sg.Input(size=(3,
                                                                    1), k='-IP2-'), sg.Text('.'),
     sg.Input(size=(3, 1), k='-IP3-'), sg.Text('.'), sg.Input(size=(3, 1), k='-IP4-'),
     ],

    [sg.Text('MASK :', size=(11, 1), justification='center'),
     sg.Text(mask, size=(16, 1), k='-OUT_MASK-'),
     sg.Button('SET', key='SET_MASK', size=(8, 1)),
     sg.Input(size=(3, 1), k='-MASK1-'), sg.Text('.'), sg.Input(size=(3,
                                                                      1), k='-MASK2-'), sg.Text('.'),
     sg.Input(
         size=(3, 1), k='-MASK3-'), sg.Text('.'), sg.Input(size=(3, 1), k='-MASK4-'),
     ],

    [sg.Text('GATEWAY :', size=(11, 1), justification='center'),
     sg.Text(gateway, size=(16, 1), k='-OUT_GATEWAY-'),
     sg.Button('SET', key='SET_GATEWAY', size=(8, 1)),
     sg.Input(size=(3, 1), k='-GATEWAY1-'), sg.Text('.'), sg.Input(size=(3,
                                                                         1), k='-GATEWAY2-'), sg.Text('.'),
     sg.Input(size=(
         3, 1), k='-GATEWAY3-'), sg.Text('.'), sg.Input(size=(3, 1), k='-GATEWAY4-'),
     ],

    [sg.Text('PORT :', size=(11, 1), justification='center'), sg.Text(port, size=(16, 1), k='-OUT_PORT-'),
     sg.Button('SET', key='SET_PORT', size=(8, 1)), sg.Input(k='-PORT_IN-', size=(16, 1))],

    [sg.Button('OK'), sg.Button('Update'), sg.Button('Exit')]
]


window = sg.Window('Ethernet data', layout)

# Update the initial values of mode and boad_rate

while True:

    event, values = window.read()
    window['-MODE_IP-'].update(mode)
    window['-BOAD_IP-'].update(boadRate)

    if event == 'SET_MASK':
        # Validate and Update the MASK value
        mask1, mask2, mask3, mask4 = values['-MASK1-'], values['-MASK2-'], values['-MASK3-'], values['-MASK4-']
        if all(part.isdigit() and 0 <= int(part) <= 255 for part in [mask1, mask2, mask3, mask4]):
            mask = f"{mask1}.{mask2}.{mask3}.{mask4}"
            # Send the command for updating the mask

    if event == 'SET_IP':
        # Validate and Update the IP value
        ip1, ip2, ip3, ip4 = values['-IP1-'], values['-IP2-'], values['-IP3-'], values['-IP4-']
        if all(part.isdigit() and 0 <= int(part) <= 255 for part in [ip1, ip2, ip3, ip4]):
            ip = f"{ip1}.{ip2}.{ip3}.{ip4}"
            # Send the command for updating the IP

    if event == 'SET_GATEWAY':
        # Validate and Update the GATEWAY value
        gateway1, gateway2, gateway3, gateway4 = values[
            '-GATEWAY1-'], values['-GATEWAY2-'], values['-GATEWAY3-'], values['-GATEWAY4-']
        if all(part.isdigit() and 0 <= int(part) <= 255 for part in [gateway1, gateway2, gateway3, gateway4]):
            gateway = f"{gateway1}.{gateway2}.{gateway3}.{gateway4}"
            # Send the command for updating the gateway

    if event == 'SET_PORT':
        # Update the GATEWAY value and send the command
        port = values['-PORT_IN-']
        # Send the command for updating the gateway

    if event == 'Update':

        # Update the corresponding output fields
        window['-OUT_IP-'].update(ip)
        window['-OUT_MASK-'].update(mask)
        window['-OUT_GATEWAY-'].update(gateway)
        window['-OUT_PORT-'].update(port)

    if event == 'Exit' or event == sg.WIN_CLOSED:
        break

window.close()
