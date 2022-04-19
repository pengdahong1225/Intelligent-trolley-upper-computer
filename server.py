import numpy as np
import cv2
from socket import *
import threading

def run():
    s = socket(AF_INET, SOCK_DGRAM)  # 创建UDP套接字
    addr = ('192.168.96.176', 8888)  # 0.0.0.0表示本机

    s.bind(addr)
    s.setblocking(0)  # 设置为非阻塞模式
    while True:
        data = b''
        z_data = b''
        while True:
            try:
                data, _ = s.recvfrom(921600)
                # print("data",data)
                # print(r"ff\xd9" in str(data))
                if (r"ff\xd9" in str(data)):
                    z_data += data
                    # print("zong data:",z_data)
                    break
                z_data += data
                # print("test_data",z_data)
                print(z_data)
            except Exception as e:
                pass

        img = cv2.imdecode(np.frombuffer(z_data, np.uint8), cv2.IMREAD_COLOR)
        img = cv2.resize(img, (640, 480))
        # cv2.putText(img, "server", (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 0), 2)
        cv2.imshow('server', img)
        cv2.waitKey(1)
if __name__ == '__main__':
    run()