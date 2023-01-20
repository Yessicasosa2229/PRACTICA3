import serial

puerto_serial = serial.Serial(port ='COM7', baudrate = 4800) ##conf para puerto serial
##puerto com7, velocidad 4800


##ciclo infinito
while(1):
	dato_enviar = input("Escribe una letra: ")      
	puerto_serial.write(dato_enviar.encode())   ## funcion encode codifica la cadena
##readline retorna una linea
	dato_recibido = puerto_serial.readline().decode() ##decode decodifica la cadena
	dato_recibido = dato_recibido[:-1] ## le restamos el bit de fin de cadena
	if(len(dato_recibido)>0):
		print(dato_recibido) 
		for i in range(0,len(dato_recibido)): 
			print(dato_recibido[len(dato_recibido)-1-i], end = '')
			print(i+1, end = '')
		print("\n")
