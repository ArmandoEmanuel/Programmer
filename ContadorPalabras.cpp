#include<iostream>
using namespace std;
int leer(char C1[]);

int main()
{
	char C1[50];
	leer(C1);
	int C=0;
	for(;C1[C];C++);
		cout<<C;
	
	
	return 0;
}

int leer(char C1[])
{
	cout<<"Coloca una Palabra :";
	cin.getline(C1,50,'\n');
}
