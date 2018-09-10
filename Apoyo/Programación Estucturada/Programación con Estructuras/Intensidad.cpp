/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 10/09/18
PROBLEMA: Calcular la intensidad para "n" funciones.
TIPO: Programaci�n Estructurada con Estructuras.
*/

#include<iostream> /*Librer�a, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librer�a, se utiliza para las operaciones matem�ticas avanzadas.*/

#define PI 3.14159265358979323846 /*As� definimos a la constante PI */

using namespace std;
//Declaraci�n de la estrcutura intensidad.
	struct intensidad
    {
    	//Variables que usamos dentro de la estructura.
        double e, r, f, l, c;
        double resultado;
    };
//Declaraci�n de funci�n pedirParametros.
void pedirValores(struct intensidad I);
//Declaraci�n de funci�n calcular.
double calculo(double, double, double, double, double);

int main()
{
	//Declara las variables para los ciclo for
    int i=0, n=0;
    //Declaramos una variable para la estructura.
    struct intensidad valores;
    //Inicio con un t�tulo.
    cout<<"\n\t\tPROGRAMA: INTENSIDAD"<<endl<<endl;
    /*Se pide cuantos registros de intensidad se guardaran*/
    cout<<"Ingrese cuantos datos desea introducir: ";
    cin>>n;
    //Ciclo for que va a recorrer seg�n la cantidad escrita anteriormente
    for (i = 0; i < n; i++)
	{
		cout<<"\n\nCalculando Intensidad No."<<i + 1<<".";
		pedirValores(valores);
    }
	//Pausamos la consola para que no se cierre.
	system("PAUSE");	
}

//Definimos la funci�n pedirValores.
void pedirValores(struct intensidad I)
{
	cout<<"\n\nIngrese el valor del voltaje: "; 
	cin>>I.e;
	cout<<"Ingrese el valor de la resistencia: "; 
	cin>>I.r;
	cout<<"Ingrese el valor de la frecuencia: "; 
	cin>>I.f;
	cout<<"Ingrese el valor de la impedancia: "; 
	cin>>I.l;
	cout<<"Ingrese el valor de la capacitancia: "; 
	cin>>I.c;
	//Llamada a la funci�n calculo.
	I.resultado = calculo(I.e, I.r, I.f, I.l, I.c);
	//Mostramos el resultado.
	cout<<"La intensidad de corriente es: "<<I.resultado<<endl;
	//Regresamos al main.
	return;
}

//Definimos la funci�n calculo.
double calculo(double e, double r, double f, double l, double c)
{
	//Hacemos el calculo.
	double intensidad;
	intensidad = e/(sqrt(pow(r,2)+(pow(((2*PI*f*l)-(1/(2*PI*f*c))),2))));
	//Regresamos a la funci�n pedirValores.
	return intensidad;
}

