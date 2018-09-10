/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programación Estructurada.
*/

#include<iostream>
#include<math.h>
//Así definimos a la constante PI.
#define PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaración de función pedirParametros.
void pedirValores();
//Declaración de la función área.
double area(double);
//Declaración de función volumen.
double volumen(double, double);

int main()
{
	//Declaración de variable opción.
	char opcion;
	
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: VOLUMEN DE UN CILINDRO"<<endl<<endl;
		pedirValores();
		cout<<"¿Desea realizar otro calculo (si=s/no=n): ";
		cin>>opcion;
		system("CLS");
	}while(opcion!='n');
	//Pausamos la consola para que no se cierre.
	system("PAUSE");	
}

//Definimos la función pedirValores.
void pedirValores()
{
	double radio, altura, resulA, resulV;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Llamada a la función area.
	resulA = area(radio);
	//Lammada a la función volumen.
	resulV = volumen(radio, altura);
	//Mostramos los resultados.
	cout<<"El área de la base del cilindro es: "<<resulA<<endl,
	cout<<"El volumen del cilindro es: "<<resulV<<endl;
}

//Definimos la función de área
double area(double radio)
{
	//Hacemos el cálculo.
	double area;
	area = (PI*pow(radio,2));
	return area;
}

//Definimos la función volumen.
double volumen(double area, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (PI*pow(radio,2)*altura);
	return volumen;
}


