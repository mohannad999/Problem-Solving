
import socket
import sys


def create_socket():
    try:
        global host, port, s
        host = ""
        port = 8888
        s = socket.socket()

    except socket.error as msg:
        print(f"Socket creation error: {str(msg)}")


# Binding the socket and listening for connections

def bind_socket():
    try:
        global host, port, s
        print(f"Binding the Port {str(port)}")

        s.bind((host, port))
        s.listen(5)

    except socket.error as msg:
        print(f"Socket creation error: {str(msg)} \n Retrying .....")
        bind_socket()


# Establish connection with a clilent (socket must be listeting)

def socket_accept():
    connection, address = s.accept()
    print(
        f"connetion has been established  IP : {address[0]}  , Port : {str(address[1])}")
    send_comamnd(connection)
    connection.close()


# send command to client
def send_comamnd(conn):
    while True:
        cmd = input()
        if cmd == 'quit':
            conn.close()
            s.close()
            sys.exit()
        if len(str.encode(cmd)) > 0:
            conn.send(str.encode(cmd))
            client_response = str(conn.recv(1024, "utf-8"))
            print(client_response, end="")


def main():
    create_socket()
    bind_socket()
    socket_accept()


main()
