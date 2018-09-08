/*
AUTOR: ING. FLORES GARCÍA DIANA LAURA.
FECHA: 06/09/18
PROBLEMA: Boletas con apuntadores y nodos.
TIPO: Programación Estructurada.
*/
#include<iostream>

using namespace std;

struct SAlumno
{
	long int Boleta;
	char Nombre[100];
	float Cals[3];
	SAlumno *apSig;
};

SAlumno *CreaNodo()
{
	SAlumno *apAlumno=new SAlumno;
	apAlumno->apSig=NULL;
	cout<<"Capture la Boleta: ";
	cin>>apAlumno->Boleta;
	cout<<"Captura el Nombre: ";
	fflush(stdin);
	cin.getline(apAlumno->Nombre,99);
	for(int i=0; i<3;i++)
	{
		cout<<"Captura calificacion "<<i+1<<":";
		cin>>apAlumno->Cals[i];
	}
	return apAlumno;
}

void InsertaNodo(SAlumno apPrimero, SAlumno apUltimo, SAlumno apNuevo)
{
	if(apPrimero == NULL)
	{
	apPrimero=apUltimo=apNuevo;
	}
	else
	{
		apUltimo->apSig=apNuevo;
		apUltimo=apNuevo;
	}
}

void Imprimir Nodo(SAlumno *apPrimero)
{
	SAlumno *apNuevo=apPrimero;
	if(apPrimero==NULL)
	{
		cout<<"La lista esta vacia";
	}
	else
	{
		apNuevo=apPrimero;
		while(apNuevo=NULL)
		{
			cout<<"Boleta: "<<apNuevo->Boleta;
			cout<<"Nombre: "<<apNuevo->Nombre;
			for(int a=0; a<3; a++)
			{
				cout<<"Cal. "<<a+1<<apNuevo->Cals[a];
			}
			cout<<"Promedio: "<<Promedio(apNuevo->Cals);
			apNuevo=apNuevo->apSig
		}
	}
}

float Promedio(float Cals[3])
{
	float ac;
	ac=0;
	for(int t=0; t<3; t++)
	{
		ac+=Cals[t];
		return ()as/3);
	}
}

int main ()
{
	SAlumno *apRef=NULL;
	SAlumno *apAUX=NULL;
	int opcion;
	do{
		SAlumno *Nuevo = CreaNodo();
		if(apRef=NULL)
		{
			apRef=Nuevo;
			apAUX=Nuevo;
		}
		else{
			apAUX->apSig=Nuevo;
			apAUX=Nuevo;
		}
		cout<<"Crear Nodo 1=Si o 0=No ?";
		cin>>opcion;
	}while(opcion==1);
	system("cls");
	cout<<"Lista"<<endl;
	Nodo *apImp=apRef;
	if(apImp==NULL)
	{
		cout<<"Lista vacia"<<endl;
	}
	else
	{
		while(apImp!=NULL)
		{
			cout<<"Boleta: "<<apImp->Boleta<<endl;
			cout<<"Nombre: "<<apImp->Nombre<<endl;
			apImp=apImp->apSig;
		}
	}
	system("pause");
	return 0;
}

