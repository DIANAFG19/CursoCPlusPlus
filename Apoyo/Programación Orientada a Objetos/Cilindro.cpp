/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 06/09/18.
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programaci�n Orientada a Objetos.
Modificado: 10/09/18.
*/

#include<iostream> /*Librer�a, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librer�a, se utiliza para las operaciones matem�ticas avanzadas.*/
#define PI 3.14159265358979323846 /*As� definimos a la constante PI */

using namespace std;
//Declaraci�n de la Clase �rea.
class Area
{
	//Declaramos sus atributos.
	private:
		double radio;
	//Declaramos los m�todos.
	public:
		//Definimos el m�todo pedirValores que est� dentro de la clase �rea.
		void pedirValoresA()
		{
			//Pedimos el valor del radio de la base.
			cout<<"Ingrese el radio de la base: "; 
			cin>>radio;
		}
		//Definimos el m�todo calcularArea que est� dentro de la clase �rea.
		double calcularA()
		{
			//Hacemos el calculo.
			double area;
			area = (PI*pow(radio,2));
			return area;
		}
		//Definimos el m�todo mostrarResulA que est� dentro de la clase �rea.
		void mostrarResulA()
		{
			//Mostramos el resultado.
			cout<<"El area de la base del cilindro es: "<<calcularA()<<"."<<endl;
		}
};
//Declaraci�n de la clase Volumen con herencia de �rea.
class Volumen:public Area
{
	//Declaramos sus atributos.
	private:
		double altura;
	//Declaramos los m�todos.
	public:
		//Definimos el m�todo pedirValores que est� dentro de la clase Volumen.
		void pedirValoresV()
		{
			//Leemos el valor del radio llamando a la funci�n pedirValores de la clase Area.
			Area::pedirValoresA();
			//Pedimos el valor de la altura del cilindro.
			cout<<"Ingrese la altura: "; 
			cin>>altura;
		}
		//Definimos el m�todo calcularV que est� dentro de la clase Volumen.
		double calcularV()
		{
			//Hacemos el calculo.
			double volumen;
			volumen = (Area::calcularA()*altura);
			return volumen;
		}
		//Definimos el m�todo mostrarResulV que est� dentro de la clase Volumen.
		void mostrarResulV()
		{
			//Mnadamos a llamar la operaci�n de �rea.
			Area::mostrarResulA();
			//Mostramos el resultado de volumen.
			cout<<" El volumen del cilindro es: "<<calcularV()<<"."<<endl;
		}
};
//Inicio del m�todo principal del programa.
int main()
{
	//Variables que usaremos en los for.
	int i, n;
	//Se crea un apuntador hacia la clase Volumen.
	Volumen *apuntadorV;
	//Empieza un ciclo do-while.
	do
	{
		//Inicio con un t�tulo.
    	cout<<"\n\t\tPROGRAMA: AREA Y VOLUMEN DE CILINDRO."<<endl<<endl;
    	/*Se pide cuantos registros de cilindro se guardaran*/
    	cout<<"Ingrese cuantos datos desea introducir: ";
    	cin>>n;
	}while(n <= 0); //Condici�n para salir del bucle do.
	//El apuntador apartar� memoria con los atributos de la clase.
	apuntadorV = new Volumen[n];
	//Usamos un for para hacer el recorrido del n�mero de cilindros que se usar�n.
	for(i = 0;i < n; i++)
	{
		//Muestra en pantalla el n�mero de cilindro.
		cout<<"\nCilindro No. " <<i + 1<<endl;
		//El apuntador hace referencia al indice i llamando al m�todo pedirValores de la clase Volumen.
		apuntadorV[i].pedirValoresV();
	}
	//Limpiamos pantalla.
	system("CLS");
	//Este for mostrar� los resultados del �rea y volumen de los cilindros.
	for(i = 0;i < n;i++)
	{
		//Muestra en pantalla el n�mero de cilindro.
    	cout<<"\nCilindro No. " <<i + 1<<endl;
    	//El apuntador hace referencia al indice i llamando al m�todo mostrarResulV de la clase Volumen.
		apuntadorV[i].mostrarResulV();
	}
	//Borra lo que esta en la memoria y libera espacio usando el apuntador.
	delete [] apuntadorV;
	//Pausa la consola para evitar que se cierre autom�ticamente.
	system("PAUSE");
}

