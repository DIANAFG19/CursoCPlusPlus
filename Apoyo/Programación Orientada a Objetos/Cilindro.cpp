/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programaci�n Orientada a Objetos.
*/

#include<iostream>
#include<math.h>
//As� definimos a la constante PI.
#define M_PI 3.14159265358979323846 /* pi */

using namespace std;
//Declaraci�n de la clase Volumen.
class Volumen
{
	//Declaramos sus atributos.
	private:
		double radio, altura;
	//Declaramos los m�todos.
	public:
		void pedirValores();
		double calculo(double, double);
};
//Definimos el m�todo pedirValores que est� dentro de la clase Volumen.
void Volumen::pedirValores()
{
	double radio, altura, resultado;
	cout<<"Ingrese el radio: "; 
	cin>>radio;
	cout<<"Ingrese la altura: "; 
	cin>>altura;
	//Creacci�n de un nuevo objeto de Volumen.
	Volumen V;
	//Llamada a la funci�n calculo.
	resultado = V.calculo(radio, altura);
	//Mostramos el resultado.
	cout<<"El volumen del cilindro es: "<<resultado<<endl;
}
//Definimos el m�todo calculo que est� dentro de la clase Volumen.
double Volumen::calculo(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (M_PI*pow(radio,2)*altura);
	return volumen;
}
int main()
{
	//Declaraci�n de variables.
	char opcion;
	//Inicio.
	do
	{
		cout<<"\n\t\tPROGRAMA: VOLMEN DE UN CILINDRO"<<endl<<endl;
		Volumen V;
		//Mandamos a llamar a ,os m�todos.
		V.pedirValores();
		cout<<"�Desea realizar otro calculo (si=s/no=n): ";
		cin>>opcion;
		system("CLS");
	}while(opcion!='n');
	//Pausamos la consola para que no se cierre.
	system("PAUSE");
}

