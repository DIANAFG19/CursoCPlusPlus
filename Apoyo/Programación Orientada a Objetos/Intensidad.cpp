/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programación Orientada a Objetos.
*/

#include<iostream>
#include<math.h>
//Así definimos a la constante PI.
#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaración de la clase Intensidad.
class Intensidad
{
	//Declaramos sus atributos.
	private:
		double e, r, f, l, c;
	//Declaramos los métodos.
	public:
		void pedirValores();
		double calculo(double, double, double, double, double);
};
//Definimos el método pedirValores que está dentro de la clase Intensidad.
void Intensidad::pedirValores()
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
	//Creacción de un nuebo objeto de Intensidad.
	Intensidad I;
	//Llamada a la función calculo.
	resultado = I.calculo(e, r, f, l, c);
	//Mostramos el resultado.
	cout<<"La intensidad de corriente es: "<<resultado<<endl;
}
//Definimos el método calculo que está dentro de la clase Intensidad.
double Intensidad::calculo(double e, double r, double f, double l, double c)
{
	//Hacemos el calculo.
	double intensidad;
	intensidad = e/(sqrt(pow(r,2)+(pow(((2*M_PI*f*l)-(1/(2*M_PI*f*c))),2))));
	return intensidad;
}
int main()
{
	//Declaración de variables.
	char opcion;
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: INTENSIDAD"<<endl<<endl;
		Intensidad I;
		I.pedirValores();
		cout<<"¿Desea realizar otro calculo (si=s/no=n): ";
		cin>>opcion;
		system("CLS");
	}while(opcion=='s');
	//Pausamos la consola para que no se cierre.
	system("PAUSE");
}




