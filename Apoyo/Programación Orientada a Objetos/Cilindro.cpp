/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18.
PROBLEMA: Calcular el volumen de in cilindro las veces que el usuario desee.
TIPO: Programación Orientada a Objetos.
Modificado: 10/09/18.
*/

#include<iostream> /*Librería, in out stream que se usa para las lineas cout y cin.*/
#include<math.h> /*Librería, se utiliza para las operaciones matemáticas avanzadas.*/
#define PI 3.14159265358979323846 /*Así definimos a la constante PI */

using namespace std;
//Declaración de la Clase Área.
class Area
{
	//Declaramos sus atributos.
	private:
		double radio;
	//Declaramos los métodos.
	public:
		//Definimos el método pedirValores que está dentro de la clase Área.
		void pedirValoresA()
		{
			//Pedimos el valor del radio de la base.
			cout<<"Ingrese el radio de la base: "; 
			cin>>radio;
		}
		//Definimos el método calcularArea que está dentro de la clase Área.
		double calcularA()
		{
			//Hacemos el calculo.
			double area;
			area = (PI*pow(radio,2));
			return area;
		}
		//Definimos el método mostrarResulA que está dentro de la clase Área.
		void mostrarResulA()
		{
			//Mostramos el resultado.
			cout<<"El area de la base del cilindro es: "<<calcularA()<<"."<<endl;
		}
};
//Declaración de la clase Volumen con herencia de área.
class Volumen:public Area
{
	//Declaramos sus atributos.
	private:
		double altura;
	//Declaramos los métodos.
	public:
		//Definimos el método pedirValores que está dentro de la clase Volumen.
		void pedirValoresV()
		{
			//Leemos el valor del radio llamando a la función pedirValores de la clase Area.
			Area::pedirValoresA();
			//Pedimos el valor de la altura del cilindro.
			cout<<"Ingrese la altura: "; 
			cin>>altura;
		}
		//Definimos el método calcularV que está dentro de la clase Volumen.
		double calcularV()
		{
			//Hacemos el calculo.
			double volumen;
			volumen = (Area::calcularA()*altura);
			return volumen;
		}
		//Definimos el método mostrarResulV que está dentro de la clase Volumen.
		void mostrarResulV()
		{
			//Mnadamos a llamar la operación de área.
			Area::mostrarResulA();
			//Mostramos el resultado de volumen.
			cout<<" El volumen del cilindro es: "<<calcularV()<<"."<<endl;
		}
};
//Inicio del método principal del programa.
int main()
{
	//Variables que usaremos en los for.
	int i, n;
	//Se crea un apuntador hacia la clase Volumen.
	Volumen *apuntadorV;
	//Empieza un ciclo do-while.
	do
	{
		//Inicio con un título.
    	cout<<"\n\t\tPROGRAMA: AREA Y VOLUMEN DE CILINDRO."<<endl<<endl;
    	/*Se pide cuantos registros de cilindro se guardaran*/
    	cout<<"Ingrese cuantos datos desea introducir: ";
    	cin>>n;
	}while(n <= 0); //Condición para salir del bucle do.
	//El apuntador apartará memoria con los atributos de la clase.
	apuntadorV = new Volumen[n];
	//Usamos un for para hacer el recorrido del número de cilindros que se usarán.
	for(i = 0;i < n; i++)
	{
		//Muestra en pantalla el número de cilindro.
		cout<<"\nCilindro No. " <<i + 1<<endl;
		//El apuntador hace referencia al indice i llamando al método pedirValores de la clase Volumen.
		apuntadorV[i].pedirValoresV();
	}
	//Limpiamos pantalla.
	system("CLS");
	//Este for mostrará los resultados del área y volumen de los cilindros.
	for(i = 0;i < n;i++)
	{
		//Muestra en pantalla el número de cilindro.
    	cout<<"\nCilindro No. " <<i + 1<<endl;
    	//El apuntador hace referencia al indice i llamando al método mostrarResulV de la clase Volumen.
		apuntadorV[i].mostrarResulV();
	}
	//Borra lo que esta en la memoria y libera espacio usando el apuntador.
	delete [] apuntadorV;
	//Pausa la consola para evitar que se cierre automáticamente.
	system("PAUSE");
}

