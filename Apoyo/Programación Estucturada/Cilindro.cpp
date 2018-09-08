/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programaci�n Estructurada.
*/

#include<iostream>
#include<math.h>
//As� definimos a la constante PI.
#define M_PI 3.14159265358979323846 /* pi */

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
	double radio, altura, resulV, resulA;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Llamada a la funci�n volumen.
	resultado = volumen(radio, altura);
	//Mostramos el resultado.
	cout<<"El volumen del cilindro es: "<<resultado<<endl;
}

//Definimos la funci�n volumen.
double volumen(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (M_PI*pow(radio,2)*altura);
	return volumen;
}


