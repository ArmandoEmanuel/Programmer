#include <iostream>
using namespace std;

int main (){
	
	int m1,m2,s1,s2,h1,h2,m,s,h;
	cout<<"Ingrese las horas del dia trabajado: ";
		cin>>h1;		
	cout<<"Ingrese los minutos del dia trabajado: ";
		cin>>m1;
	cout<<"Ingrese los segundos del dia trabajado: ";
		cin>>s1;
	cout<<"Ingrese las horas del dia de Trabajo que finalizo: ";
		cin>>h2;
	cout<<"Ingrese los minutos del dia trabajado que finalizo: ";
			cin>>m2;
	cout<<"Ingrese los segundos del dia de trabajo que finalizo: ";
			cin>>s2;
			m=m1+m2*;
			s=s1-s2;
			h=h1-h2;
	
	if(m>=60)
	{ 
		h=+1;
		m=m-60;
	}		
	if(s>=60)
	{
		h=h+1;
		m=m+1;
		s=s+60;
		
	if(m>=60)
	{
		m=m-60;
		
	}
	}				
	cout<<"La hora trascurida es de: "<<h<<" horas con "<<m<<" minutos y "<<s<<" segundos";
	system("PAUSE");
	return 0;
}
