# Cine
Funcionamiento de la taquilla de un cine

Me parece interesante crear un programa que permita llevar el registro de las actividades que se desempeñan en un cine pues es un lugar en el que suele haber mucho flujo de personas y por consecuencia puede ser difícil llevar la cuenta de todos los procesos que ocurran en un día sin ayuda de un programa dedicado a ello. El objetivo de este programa es el de llevar el registro del costo de los productos que se venden en el snackbar.
Para ello se emplearán tres clases (combo, bebida, snack) y dos subclases (palomitas, nachos). Snack le heredará la propiedad costo a palomitas y nachos. El combo recibirá por medio de agregación objetos de las clases nachos, palomitas y bebida.

Revisa el diagrama de clases para ver cómo interactúan los distintos objetos a implementar.


Funcionamiento:
El programa inicia mostrando un menu y solicita al usuario elegir una opcion entre 1 y 5: Elegir opciones no válidas hará que solicite de nuevo el valor.
•	1 Palomitas

	o	Pide al usuario sabor y tamaño de las palomitas, suma el costo de las palomitas al costo total (depe del tamaño) y pide si quiere hacer algo más
	
			Si contesta 1 (sí) vuelve al inicio conservando el costo sumado
		
			Si contesta 2 (no) el programa termina e imprime el costo acumulado
		
•	2: Nachos

	o	Pide al usuario si quiere o no queso y si quiere o no chile con sus nachos, imprime la decisión y suma el costo de los nachos al costo total.

•	3: Bebida

	o	Pide al usuario tamaño de la bebida, suma el costo de la bebida al costo total dependiendo el tamaño y pide si quiere hacer algo más

			Si contesta 1 (sí) vuelve al inicio conservando el costo sumado

			Si contesta 2 (no) el programa termina e imprime el costo acumulado

•	4: Combo

	o	Pide el sabor de las palomitas, si quiere queso y/o chile en sus nachos y agrega el costo del combo al costo total,luego pregunta si quiere hacer algo más.

			Si contesta 1 (sí) vuelve al inicio conservando el costo sumado

			Si contesta 2 (no) el programa termina e imprime el costo acumulado

•	5: Terminar

	o	Muestra el total acumulado y termina el programa
