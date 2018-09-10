/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programaci�n Estructurada.
*/

#include<iostream>
#include<math.h>
//As� definimos a la constante PI.
#define PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaraci�n de funci�n pedirParametros.
void pedirValores();
//Declaraci�n de la funci�n �rea.
double area(double);
//Declaraci�n de funci�n volumen.
double volumen(double, double);

int main()
{
	//Declaraci�n de variable opci�n.
	char opcion;
	
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: VOLUMEN DE UN CILINDRO"<<endl<<endl;
		pedirValores();
		cout<<"�Desea realizar otro calculo (si=s/no=n): ";
		cin>>opcion;
		system("CLS");
	}while(opcion!='n');
	//Pausamos la consola para que no se cierre.
	system("PAUSE");	
}

//Definimos la funci�n pedirValores.
void pedirValores()
{
	double radio, altura, resulA, resulV;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Llamada a la funci�n area.
	resulA = area(radio);
	//Lammada a la funci�n volumen.
	resulV = volumen(radio, altura);
	//Mostramos los resultados.
	cout<<"El �rea de la base del cilindro es: "<<resulA<<endl,
	cout<<"El volumen del cilindro es: "<<resulV<<endl;
}

//Definimos la funci�n de �rea
double area(double radio)
{
	//Hacemos el c�lculo.
	double area;
	area = (PI*pow(radio,2));
	return area;
}

//Definimos la funci�n volumen.
double volumen(double area, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (PI*pow(radio,2)*altura);
	return volumen;
}


