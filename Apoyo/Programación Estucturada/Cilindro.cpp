/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programaci�n Estructurada.
*/

#include<iostream>
#include<math.h>

#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaraci�n de funci�n pedirParametros.
void pedirValores();
//Declaraci�n de funci�n calcular.
double calculo(double, double);

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
	double radio, altura, resultado;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Llamada a la funci�n calculo.
	resultado = calculo(radio, altura);
	//Mostramos el resultado.
	cout<<"El volumen del cilindro es: "<<resultado<<endl;
}

//Definimos la funci�n calculo.
double calculo(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (M_PI*pow(radio,2)*altura);
	return volumen;
}


