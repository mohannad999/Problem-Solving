import serial
import time

def read_from_serial(port,baudrate):
    try:
        #open the serial port
        ser=serial.Serial(port,baudrate,timeout=0.1)
        
        print(f"Opened port {ser.name}")
        #read data from the serial port
        while True: 
            if ser.in_waiting >0 :
                data=ser.readline().decode('utf-8').rstrip() 
                if data: 
                #print(f"Received: {data}")
                    print(f"Received: {data}")
                           

    except serial.SerialException as e:
        print(f"Error:{e}")

    finally:
        if ser.is_open:
            ser.close()    
            print(f"Closed port{ser.name}")



if __name__ =="__main__":

    read_from_serial('/dev/ttyACM0', 115200)
 

    
