/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 10/09/18
PROBLEMA: Calcular el volumen de un cilindro "n" veces.
TIPO: Programación Estructurada con estructuras.
*/

#include<iostream> /*Librería, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librería, se utiliza para las operaciones matemáticas avanzadas.*/
#define PI 3.14159265358979323846 /*Así definimos a la constante PI */

using namespace std;
//Declaración de la estrcutura Cilindro.
	struct cilindro
    {
    	//Variables que usamos dentro de la estructura.
        double radio;
        double altura;
        double resulA;
        double resulV;
    };
//Declaración de función pedirValores.
void pedirValores(cilindro *puntero);
//Declaración de la función área.
double area(double);
//Declaración de función volumen.
double volumen(double, double);

int main()
{
	//Declara las variables para los ciclo for
    int i=0, n=0;
    //Declaramos un puntero para la estructura.
    cilindro *punteroCilindro;
    punteroCilindro = new cilindro;
    //Inicio con un título.
    cout<<"\n\t\tPROGRAMA: AREA Y VOLUMEN DE CILINDRO."<<endl<<endl;
    /*Se pide cuantos registros de cilindro se guardaran*/
    cout<<"Ingrese cuantos datos desea introducir: ";
    cin>>n;
    //Ciclo for que va a recorrer según la cantidad escrita anteriormente
    for (i = 0; i < n; i++)
	{
		cout<<"\n\nCalculando Cilindro No."<<i + 1<<".";
		//Llamamos a la función pedir valores con parámetro de la estructura.
		pedirValores(punteroCilindro);
		//Mostramos los resultados.
		cout<<"El área de la base del cilindro es: "<<punteroCilindro -> resulA<<endl,
		cout<<"El volumen del cilindro es: "<<punteroCilindro -> resulV<<endl;
    }
	//Pausamos la consola para que no se cierre.
	system("PAUSE");	
}

//Definimos la función pedirValores.
void pedirValores(cilindro *punteroC)
{
	cout<<"\n\nIngrese el radio: "; 
	cin>>punteroC -> radio;
	cout<<"Ingrese la altura: "; 
	cin>>punteroC -> altura;
	//Llamada a la función area.
	punteroC -> resulA = area(punteroC -> radio);
	//Lammada a la función volumen.
	punteroC -> resulV = volumen(punteroC -> radio, punteroC -> altura);
}
//Definimos la función de área
double area(double radio)
{
	//Hacemos el cálculo.
	double area;
	area = (PI*pow(radio,2));
	return area;
}
//Definimos la función volumen.
double volumen(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (PI*pow(radio,2)*altura);
	return volumen;
}
	
