#pip install pyserial
import serial
#pip install matplotlib
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib.lines import Line2D

import time

Serialdata = serial.Serial("COM4",115200)
lista_d=[]
xdatos1,ydatos1,xdatos2,ydatos2= [], [], [], []
fig = plt.figure('Temperatura & Humedad')
ax1 = fig.add_subplot(1,2,1)
ax2 = fig.add_subplot(1,2,2)
time.sleep(1)

while True:
    hora=time.strftime('%H:%M:%S')
    if (Serialdata.inWaiting()>0):
            def animate(i,xdatos1,ydatos1,xdatos2,ydatos2):
                datos = Serialdata.readline().decode('ascii')
                lista_d = datos.split('x')
                temp=float(lista_d[0])
                hume=float(lista_d[1]) 
                xdatos1.append(i)
                ydatos1.append(temp)
                xdatos2.append(i)
                ydatos2.append(hume)
                #ax1.clear()
                ax2.plot(xdatos2,ydatos2)
                #ax2.clear()
                ax1.plot(xdatos1,ydatos1)

            ani = animation.FuncAnimation(fig,animate, fargs=(xdatos1,ydatos1,xdatos2,ydatos2))

            plt.show()

