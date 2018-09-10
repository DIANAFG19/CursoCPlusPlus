/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programación Orientada a Objetos.
*/

#include<iostream> /*Librería, in out stream que se usa para las lineas cout y cin*/
#include<math.h> /*Librería, utilizada para las operaciones matemáticas.*/

#define PI 3.14159265358979323846 //Así definimos a la constante PI.

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
	//Declara las variables para los ciclo for
    int i=0, n=0;
    //Inicio con un título.
    cout<<"\n\t\tPROGRAMA: INTENSIDAD"<<endl<<endl;
    /*Se pide cuantos registros de alumnos se guardaran*/
    cout<<"Ingrese cuantos datos desea introducir: ";
    cin>>n;
    //Ciclo for que va a recorrer según la cantidad escrita anteriormente
    for (i = 0; i < n; i++)
	{
		cout<<"\n\nCalculando Intensidad No."<<i + 1<<".";
		Intensidad I;
		I.pedirValores();
    }
	//Pausamos la consola para que no se cierre.
	system("PAUSE");
}




