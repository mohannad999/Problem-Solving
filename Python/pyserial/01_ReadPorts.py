import serial
import serial.tools.list_ports
#Print the version on pyserial 

print("pyserial version:",serial.__version__)

#List all available serial ports
ports= serial.tools.list_ports.comports()
for port in ports:
    print(f"Port: {port.device}")