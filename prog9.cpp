/*Autor: Oscar eduarod fletes Ixta, Realizado: 17/02/22
	programa qu pida e lvalor de x, el cual debe estar compromendido en el rango de 0<x>10
		El programa debe decir, si x tiene un valor valido, en caso contrario indicarle
		el error al usuario 
	Programa en lenguaje c que muestra el uso de scanf, operaciones aritméticas y uso de condiciones
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate
		-scanf
		-Operacones aritmeticas 
		-Uso de condiciones 
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables flotantes, como declararlas, pedirlas por teclado, usar condiciones,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo float (valor de x),
	El programa pide el valor de x, que debe de estar en el rango de 1 a 9, en caso contrario, 
	se marcará que el valor introducido no es valido 
	*/
	
#include<stdio.h>

int main(){
	//Variables 
	float x; //variable con decimal
	//Entrada
	printf("Inreoduce el valor de x (0<x>10): ");  //imrpime mensaje
	scanf("%f",&x); //lee el numero insertado por el teclado
	//Proceso 
	if(0<x && x<10){ //condicon que si x es mayor que 0 y si x es menor que 10
		//Salida
		printf("Se encuentra dentro del rango\n"); //imrpime mensaje
	}
	else{ //y si no se cumple la condicon
		//Salida 
		printf("Valor invalido, x denbe estar entre el 1 y el 9\n");  //imrpime mensaje
	}
	
	
	return 0;
}
