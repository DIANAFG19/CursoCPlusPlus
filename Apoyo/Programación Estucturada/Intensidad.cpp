/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programaci�n Estructurada.
*/

#include<iostream>
#include<math.h>

#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaraci�n de funci�n pedirParametros.
void pedirValores();
//Declaraci�n de funci�n calcular.
double calculo(double, double, double, double, double);

int main()
{
	//Declaraci�n de variables.
	char opcion;
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: INTENSIDAD"<<endl<<endl;
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
	double e, r, f, l, c, resultado;
	cout<<"Ingrese el valor del voltaje: "; 
	cin>>e;
	cout<<"Ingrese el valor de la resistencia: "; 
	cin>>r;
	cout<<"Ingrese el valor de la frecuencia: "; 
	cin>>f;
	cout<<"Ingrese el valor de la impedancia: "; 
	cin>>l;
	cout<<"Ingrese el valor de la capacitancia: "; 
	cin>>c;
	//Llamada a la funci�n calculo.
	resultado = calculo(e, r, f, l, c);
	//Mostramos el resultado.
	cout<<"La intensidad de corriente es: "<<resultado<<endl;
}

//Definimos la funci�n calculo.
double calculo(double e, double r, double f, double l, double c)
{
	//Hacemos el calculo.
	double intensidad;
	intensidad = e/(sqrt(pow(r,2)+(pow(((2*M_PI*f*l)-(1/(2*M_PI*f*c))),2))));
	return intensidad;
}

