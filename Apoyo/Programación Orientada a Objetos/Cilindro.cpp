/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programación Orientada a Objetos.
*/

#include<iostream>
#include<math.h>
//Así definimos a la constante PI.
#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaración de la clase Volumen.
class Volumen
{
	//Declaramos sus atributos.
	private:
		double radio, altura;
	//Declaramos los métodos.
	public:
		void pedirValores();
		double calculo(double, double);
};
//Definimos el método pedirValores que está dentro de la clase Volumen.
void Volumen::pedirValores()
{
	double radio, altura, resultado;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Creacción de un nuevo objeto de Volumen.
	Volumen V;
	//Llamada a la función calculo.
	resultado = V.calculo(radio, altura);
	//Mostramos el resultado.
	cout<<"El volumen del cilindro es: "<<resultado<<endl;
}
//Definimos el método calculo que está dentro de la clase Volumen.
double Volumen::calculo(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (M_PI*pow(radio,2)*altura);
	return volumen;
}
int main()
{
	//Declaración de variables.
	char opcion;
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: VOLMEN DE UN CILINDRO"<<endl<<endl;
		Volumen V;
		//Mandamos a llamar a ,os métodos.
		V.pedirValores();
		cout<<"¿Desea realizar otro calculo (si=s/no=n): ";
		cin>>opcion;
		system("CLS");
	}while(opcion!='n');
	//Pausamos la consola para que no se cierre.
	system("PAUSE");
}

