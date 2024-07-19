import serial



def calculate_average(values):
    if not values:
        return None
    total=sum(values)
    average=total/len(values)
    return average
        
def read_from_serial(port, baudrate):
    try:
        # Open the serial port
        ser = serial.Serial(port, baudrate, timeout=1)
        
        print(f"Opened port {ser.name}")
        
        # Initialize an empty buffer for incomplete lines
        line_buffer = b""
        
        # Initialize variables for average calculation
        readings =[]
        numberOfReadings=0
        print(type(readings))
        
        # Read data from the serial port
        while True: 
            if ser.in_waiting > 0:
                # Read bytes until a newline character is encountered
                byte = ser.read(1)
                
                if byte == b'\n':
                    # If newline, process the line
                    line = line_buffer.strip()  # Remove leading/trailing whitespace
                    if line:
                        try: 
                            data =line#.decode('utf-8', 'ignore')
                            distance_m= float(data[10:15])
                            readings.append(distance_m)
                            numberOfReadings +=1
                            #print(f"Received: {distance_m}")
                            
                            #Calculate average of every 100 readings
                            if numberOfReadings ==100: 
                                average_distance=calculate_average(readings)
                                if average_distance is not None: 
                                    print(f"Average Distance of {numberOfReadings} readings: {average_distance:.3f}m")
                                readings = []  # Clear readings for next batch
                                numberOfReadings=0
                            #print(f"Received: {line.decode('utf-8', 'ignore')}")
                    
                           
                        except ValueError:
                            print(f"Invalid distance format: {line}")
                  # Reset buffer for next line
                    line_buffer = b""
                else:
                    # Append byte to buffer if not newline
                    line_buffer += byte
               
    except serial.SerialException as e:
        print(f"Error: {e}")

    finally:
        if ser.is_open:
            ser.close()    
            print(f"Closed port {ser.name}")

if __name__ == "__main__":
    read_from_serial('/dev/ttyACM0', 115200)
