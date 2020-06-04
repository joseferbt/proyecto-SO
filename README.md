#Proyecto de OS 2019-2
El presente proyecto es una modificacion al sistema [xv6](https://github.com/mit-pdos/xv6-public).

El sistema operativo XV6 fue desarrollado en el MIT en el verano del 2006. El software se desarrolló con fines netamente académicos y provee el esqueleto básico de un sistema operativo funcional con la posibilidad de ser extendido. El software puede ser descargado a través de git y requiere de algunas herramientas de desarrollo adicionales que se describirán a continuación.

##Preparacion del ambiente
Debe estar en un ambiente unix que con el emulador qemu instalado, preferiblemente ubuntu o un linux con kernel LTS

Para ubuntu sería
`sudo apt-get install build-essential gdb git-core gcc-multilib qemu-system-x86
`
Depues clone el repositorio 
`git clone https://github.com/joseferbt/proyecto-SO.git`
Para compilar y/o ejecutar use dentro de la carpeta
`make && make qemu-nox`


###Comandos agregados

| Comando  | Descripcion | Parametros|
| :------------ |:---------------:| -----:|
|`date`     | muestra la fecha actual. | N/A |
|     ` syscallc`   | muesta todas las llamadas a sistema disponibles y la cantidad de veces que fue ejecutada cada una        |   Como parametro recibe el nombre de cualquier llamada para ver cuantas veces fue ejecutada |
| uptime | Muestra la hora y el tiempo que lleva encendido el sistema        |  N/A |


###Integrantes
- José Fernando Botina
- Julian Alvarez
- Camilo José Mezú Mina 1824313