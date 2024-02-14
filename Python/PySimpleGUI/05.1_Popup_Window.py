import PySimpleGUI as psg


def set_ip(title):
    layout = [
        [psg.Text(f"Enter {title} Address:")],
        [
            psg.InputText(size=(3, 1), key="-OCTET1-"), psg.Text("."),
            psg.InputText(size=(3, 1), key="-OCTET2-"), psg.Text("."),
            psg.InputText(size=(3, 1), key="-OCTET3-"), psg.Text("."),
            psg.InputText(size=(3, 1), key="-OCTET4-")
        ],
        [psg.Button("OK"), psg.Button("Cancel")]
    ]

    window = psg.Window(f"Set {title} Address", layout)

    while True:
        event, values = window.read()

        if event in (psg.WIN_CLOSED, "Cancel"):
            window.close()
            return None
        elif event == "OK":
            address_octets = [
                values["-OCTET1-"], values["-OCTET2-"], values["-OCTET3-"], values["-OCTET4-"]]
            if all(octet.isdigit() and 0 <= int(octet) <= 255 for octet in address_octets):
                address = ".".join(address_octets)
                window.close()
                return address
            else:
                psg.popup_error(
                    f"Invalid {title} address. Please enter valid digits (0-255) for each octet.")


def set_port():
    layout = [
        [psg.Text("Enter Port (0-65535):")],
        [psg.InputText(size=(6, 1), key="-PORT-")],
        [psg.Button("OK"), psg.Button("Cancel")]
    ]

    window = psg.Window("Set Port", layout)

    while True:
        event, values = window.read()

        if event in (psg.WIN_CLOSED, "Cancel"):
            window.close()
            return None
        elif event == "OK":
            port = values["-PORT-"]
            if port.isdigit() and 0 <= int(port) <= 65535:
                window.close()
                return port
            else:
                psg.popup_error(
                    "Invalid port. Please enter a value between 0 and 65535.")


if __name__ == "__main__":
    layout_main = [
        [psg.Button("SETIP"), psg.Button("SETMASK"), psg.Button(
            "SETGATEWAY"), psg.Button("SETPORT")]
    ]

    window_main = psg.Window("Main Window", layout_main)

    while True:
        event, values = window_main.read()

        if event == psg.WIN_CLOSED:
            break
        elif event == "SETIP":
            ip_address = set_ip("IP")
            if ip_address:
                print("You entered IP:", ip_address)
        elif event == "SETMASK":
            mask_address = set_ip("Mask")
            if mask_address:
                print("You entered Mask:", mask_address)
        elif event == "SETGATEWAY":
            gateway_address = set_ip("Gateway")
            if gateway_address:
                print("You entered Gateway:", gateway_address)
        elif event == "SETPORT":
            port = set_port()
            if port:
                print("You entered Port:", port)

    window_main.close()
