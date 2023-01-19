######################################################################################
# Sistema de Despacho de Vehículos para Usuarios                                     #
######################################################################################
#                                                                                    #
# Autor del programa: Facundo Gabriel Rodriguez                                      #
# Año de comienzo de desarrollo:2021                                                 #
# Año de finalización: Pendiente                                                     # 
#                                                                                    #
######################################################################################
El programa consta de tres archivos:
* rudualop.cpp = recepción de usuario y operación dual
* base de datos.h
* leer_en_bd.h

 Es un programa de consola para Linux (Simulación de carga de un servicio que solicite un cliente a una empresa encargada de prestar el servicio. Es a modo de EJEMPLO DE PROGRAMACIÓN APRENDIDO DE FORMA AUTODIDACTA. ).
 El archivo rudualop.cpp se encarga de dar la bienvenida a un nuevo usuario, consulta
si ya se encuentra cargado en el sistema. De encontrarse cargado se procede a la 
utilización de header 'leer_en_bd.h' que busca los datos previamente ingresados por 
una persona, para ello se consulta sú número de teléfono (con el cual previamente se 
cargaron los datos). En pantalla se van a mostrar las direcciones ingresadas y se le
permitira escoger entre alguna de ellas y a su vez se le solicitara que indique el 
número de móviles que va a requerir en esa dirección.
 De ser un nuevo usuario, se dará paso al header 'base de datos.h' que guiará en la 
carga de datos para su posterior utilización.
######################################################################################
