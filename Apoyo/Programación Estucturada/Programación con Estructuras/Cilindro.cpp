/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 10/09/18
PROBLEMA: Calcular el volumen de un cilindro "n" veces.
TIPO: Programaci�n Estructurada con estructuras.
*/

#include<iostream> /*Librer�a, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librer�a, se utiliza para las operaciones matem�ticas avanzadas.*/
#define PI 3.14159265358979323846 /*As� definimos a la constante PI */

using namespace std;
//Declaraci�n de la estrcutura Cilindro.
	struct cilindro
    {
    	//Variables que usamos dentro de la estructura.
        double radio;
        double altura;
        double resulA;
        double resulV;
    };
//Declaraci�n de funci�n pedirValores.
void pedirValores(cilindro *puntero);
//Declaraci�n de la funci�n �rea.
double area(double);
//Declaraci�n de funci�n volumen.
double volumen(double, double);

int main()
{
	//Declara las variables para los ciclo for
    int i=0, n=0;
    //Declaramos un puntero para la estructura.
    cilindro *punteroCilindro;
    punteroCilindro = new cilindro;
    //Inicio con un t�tulo.
    cout<<"\n\t\tPROGRAMA: AREA Y VOLUMEN DE CILINDRO."<<endl<<endl;
    /*Se pide cuantos registros de cilindro se guardaran*/
    cout<<"Ingrese cuantos datos desea introducir: ";
    cin>>n;
    //Ciclo for que va a recorrer seg�n la cantidad escrita anteriormente
    for (i = 0; i < n; i++)
	{
		cout<<"\n\nCalculando Cilindro No."<<i + 1<<".";
		//Llamamos a la funci�n pedir valores con par�metro de la estructura.
		pedirValores(punteroCilindro);
		//Mostramos los resultados.
		cout<<"El �rea de la base del cilindro es: "<<punteroCilindro -> resulA<<endl,
		cout<<"El volumen del cilindro es: "<<punteroCilindro -> resulV<<endl;
    }
	//Pausamos la consola para que no se cierre.
	system("PAUSE");	
}

//Definimos la funci�n pedirValores.
void pedirValores(cilindro *punteroC)
{
	cout<<"\n\nIngrese el radio: "; 
	cin>>punteroC -> radio;
	cout<<"Ingrese la altura: "; 
	cin>>punteroC -> altura;
	//Llamada a la funci�n area.
	punteroC -> resulA = area(punteroC -> radio);
	//Lammada a la funci�n volumen.
	punteroC -> resulV = volumen(punteroC -> radio, punteroC -> altura);
}
//Definimos la funci�n de �rea
double area(double radio)
{
	//Hacemos el c�lculo.
	double area;
	area = (PI*pow(radio,2));
	return area;
}
//Definimos la funci�n volumen.
double volumen(double radio, double altura)
{
	//Hacemos el calculo.
	double volumen;
	volumen = (PI*pow(radio,2)*altura);
	return volumen;
}
	
