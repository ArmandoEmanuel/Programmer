#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int Inicio(char Pal[]);

int main()
{
	char Pal[300];
	cout<<"Coloca Una Oracion o Palabra: ";
	cin.getline(Pal,300,'\n');
	 cout<<"Titulos de la Oracion: ";
    Inicio(Pal);
}

int Inicio(char Pal[])
{
	int Ora=32;
	for(int i=0;Pal[i];i++)
	{
		if(Pal[i]>='a' && Pal[i]<='z')
		{
			if(i==0)
				Pal[i]-=Ora;
	    }
		else
		{
			if(Pal[i]==Ora && Pal[i+1]!=32)
				Pal[i+1]-=Ora;
		}
	}
	cout<<Pal;
}

