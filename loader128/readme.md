loader128k y 128sna2rom

Cargador de "ROMs" para ZXUno a partir snapshots de 128K, para utilizar desde el menú del firmware.

Por un lado tenemos el cargador loader128k, que se autocopia en la VRAM para despues pasar el control al mismo.

Desde la VRAM se mueven todos los bloques de 16Kb al lugar que les corresponde, se restauran los registros y por último se

pasa el control al PC del Snapshot.

128sna2rom por su parte se utiliza para crear la "ROM" parcheando datos de loader128k.

Demo: https://www.youtube.com/watch?v=0cj8WUizf4k

Idea desarrollada a partir del siguiente hilo con ayuda de Antonio Villena y el emulador ZEsarUX de Cesar Hernández:

http://www.zxuno.com/forum/viewtopic.php?f=12&t=530
