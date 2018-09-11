/*
AUTOR: ING. FLORES GARC�A DIANA LAURA.
FECHA: 10/09/18
PROBLEMA: Guardar "n" alumnos con su nombre y obtenerlos.
TIPO: Programaci�n Estructurada con estructuras.
*/

#include<iostream> /*Librer�a, in out stream que se usa para las lineas cout y cin.*/


using namespace std;
//Creamos una estructura tipo alumno.
struct Alumno
{
	//Declaramos las variables que usaremos dentro de la estructura.
	long int boleta;
	char nombre[100];
	float calificacion[3];
	Alumno *apSig;
}alumno[1000];
//Creamos una funci�n del tipo clase referenciando que es un nodo.
Alumno *CreaNodo()
{
	//Creamos un nuevo nodo con refrencia a la Estructura Alumno.
	Alumno *apAlumno = new Alumno;
	//Convertimos a NULL (vac�o) a lo que est� dentro del apuntador apSig.
	apAlumno -> apSig = NULL;
	//Inicio con un t�tulo.
    cout<<"\n\t\tPROGRAMA: BOLETA."<<endl<<endl;
	//Pedimos al usuario que capture la boleta.
	cout<<"Ingrese el n�mero de la Boleta: ";
	//Lo guardamos en la variable boleta que esta dentro de la estructura con un apuntador.
	cin>>apAlumno -> boleta;
	//Pedimos al usuario que capture el nombre.
	cout<<"Ingrese el Nombre: ";
	//Permite los espacios.
	fflush(stdin);
	//Lee toda la l�nea y pide que sean 99 car�cteres incluyendo espacios.
	cin.getline(apAlumno -> nombre,99);
	//Usamos un for para que ingrese las 3 calificaciones.
	for(int i = 0;i < 3; i++)
	{
		//Pedimos al usuario que capture la calificaci�n en cada iteraci�n.
		cout<<"Calificaci�n No. "<<i + 1<<": ";
		//Lo guardamos en la variable calificacion que esta dentro de la estructura con un apuntador.
		cin>>apAlumno -> calificacion[i];
	}
	//Regresamos todo lo que contiene el apuntador.
	return apAlumno;
}
//M�todo principal del programa.
int main ()
{
	//Creamos dos punteros, uno de referencia y otro de auxiliar para movernos dentro de la memoria y no perdernos.
	Alumno *apRef = NULL;
	Alumno *apAux = NULL;
	//La variable opci�n nos permitir� leere si queremos crear un nodo.
	int opcion;
	//Comienza el bucle do-while.
	do{
		//Creamos un puntero tipo SAlumno referenciado a la funci�n CreaNodo.
		Alumno *Nuevo = CreaNodo();
		//Condicionamos si el puntero apRef est� vac�o...
		if(apRef = NULL)
		{
			//... los punteros apRef y apAux van al puntero Nuevo que est� apuntando a la funci�n CreaNodo.
			apRef = Nuevo;
			apAux = Nuevo;
		}
		//Si no se cumple la condici�n, entonces...
		else
		{
			//... El puntero apAux se pasar� al puntero apSig y se�alar� al puneto nuevo refrenciado a la funci�n CreaNodo.
			apAux -> apSig = Nuevo;
			apAux = Nuevo;
		}
		//Preguntamos al usuario si creamos el nodo.
		cout<<"Crear Nodo 1=Si o 0=No: ";
		cin>>opcion;
	}while(opcion == 1); //Usamos la condici�n para romper el do. Mientras el usuario diga que si, se repetir� el bucle do.
	//Limpiamos pantalla.
	system("CLS");
	//Pausamos la consola para evitar que se cierre autom�ticamente.
	system("PAUSE");
	//Salimos del programa.
	return 0;
}

