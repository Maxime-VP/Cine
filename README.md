# Cine
Funcionamiento de la taquilla de un cine

Me parece interesante crear un programa que permita llevar el registro de las actividades que se desempeñan en un cine pues es un lugar en el que suele haber mucho flujo de personas y por consecuencia puede ser difícil llevar la cuenta de todos los procesos que ocurran en un día sin ayuda de un programa dedicado a ello. El objetivo de este programa es el de llevar el registro del costo de los productos que se venden en el snackbar.
Para ello se emplearán tres clases (combo, bebida, snack) y dos subclases (palomitas, nachos). Snack le heredará la propiedad costo a palomitas y nachos. El combo recibirá por medio de agregación objetos de las clases nachos, palomitas y bebida.

Revisa el diagrama de clases para ver cómo interactúan los distintos objetos a implementar.



Funcionamiento:
	
El programa solicitara al usuario si quiere pedir un combo:

Al decir que si:

  	-Llama a una función para las clases palomitas, nachos y bebida que le piden al usuario los valores deseados.
  
	-Tras concluir con estas funciones agregará el costo del combo al costo final y le preguntará al usuario si desea pedir algo más. 

		-Si escribe que si, el programa solicitará si se quiere pedir un combo.

		-Si escribe que no, el programa desplegará el costo acumulado de todo lo que haya pedido

Al decir que no:

  	-Solicita al usuario si quiere palomitas:
  
		-Pide al usuario los valores deseados y suma el costo del artículo al costo final

  	-Solicita al usuario si quiere nachos:
  
		-Pide al usuario los valores deseados y suma el costo del artículo al costo final
	
 	 -Solicita al usuario si quiere refresco:
  
		-Pide al usuario los valores deseados y suma el costo del artículo al costo final

  	-Solicita al usuario si quiere algo más:
  
		-Si escribe que si, el programa solicitará si se quiere pedir un combo.

		-Si escribe que no, el programa desplegará el costo acumulado de todo lo que haya pedido
