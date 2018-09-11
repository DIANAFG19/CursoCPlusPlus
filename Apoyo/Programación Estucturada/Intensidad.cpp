/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programación Estructurada.
*/

#include<iostream> /*Librería, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librería, se utiliza para las operaciones matemáticas avanzadas.*/
#define PI 3.14159265358979323846 /*Así definimos a la constante PI */

using namespace std;
//Declaración de función pedirParametros.
void pedirValores();
//Declaración de función calcular.
double calculo(double, double, double, double, double);

int main()
{
	/*Declara la variable para la opción del usuario*/
    char opcion;
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: INTENSIDAD"<<endl<<endl;
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
	//Llamada a la función calculo.
	resultado = calculo(e, r, f, l, c);
	//Mostramos el resultado.
	cout<<"La intensidad de corriente es: "<<resultado<<endl;
}

//Definimos la función calculo.
double calculo(double e, double r, double f, double l, double c)
{
	//Hacemos el calculo.
	double intensidad;
	intensidad = e/(sqrt(pow(r,2)+(pow(((2*PI*f*l)-(1/(2*PI*f*c))),2))));
	return intensidad;
}

