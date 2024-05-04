import socket 
import threading


port = 5050
#open cmd -> ipconfig
# copy your lacal ip Adress ->  192.168.0.1
#server =" 192.168.0.1"
server = socket.gethostbyname(socket.gethostname())
print(server)