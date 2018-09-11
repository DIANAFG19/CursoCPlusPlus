/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programaci�n Estructurada.
*/

#include<iostream> /*Librer�a, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librer�a, se utiliza para las operaciones matem�ticas avanzadas.*/
#define PI 3.14159265358979323846 /*As� definimos a la constante PI */

using namespace std;
//Declaraci�n de funci�n pedirParametros.
void pedirValores();
//Declaraci�n de funci�n calcular.
double calculo(double, double, double, double, double);

int main()
{
	/*Declara la variable para la opci�n del usuario*/
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
	intensidad = e/(sqrt(pow(r,2)+(pow(((2*PI*f*l)-(1/(2*PI*f*c))),2))));
	return intensidad;
}

