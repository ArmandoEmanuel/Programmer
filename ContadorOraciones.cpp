#include<iostream>
using namespace std;

int main()
{
	char C1[50];
	int Ora=32;
	int Cont=1;
	int Pal=1;
		
	cout<<"[coloca una frase ]:";
	cin.getline(C1,50,'\n');
	
	for(int i=0;C1[i];i++)
	{
		if(C1[i]==Ora && C1[i+1]!=32)
			Pal++;
	}
	cout<<Pal;
	
	return 0;
}
