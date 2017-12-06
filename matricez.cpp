#include <iostream>
using namespace std;
void llenar(int mat[][5],int rt);
void mostrar(int mat[][5],int rt);
void mostrardp(int mat[][5],int rt);
void mostrards(int mat[][5],int rt);
void girardp(int mat[][5],int rt);
void girards(int mat[][5],int rt);



int main ()
{
	int mat[5][5],rt=5;
	llenar(mat,rt);
	 mostrar(mat,rt);
	 mostrardp(mat,rt);
	 mostrards(mat,rt);
	 girardp(mat,rt);
	 mostrards(mat,rt);
	 
	return 0;
	
}

void llenar(int mat[][5],int rt)
{
	int a=1;
	for(int i=0;i<rt;i++)
	for(int j=0;j<5;j++)
	{
		mat[i][j]=a;
		a++;	
	}
}
void mostrar(int mat[][5],int rt)
{
	for(int i=0;i<rt;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<mat[i][j]<<"\t";
			
		}	
		cout<<endl;
	}	
	cout<<endl;
}
void mostrardp(int mat[][5],int rt)
{
	for (int i=0;i<rt;i++)
	{
		cout<<mat[i][i]<<"\t";
		cout<<endl;	
	} 
	cout<<endl;
}
void mostrards(int mat[][5],int rt)
{
	for (int i=0,j=rt-1;i<rt,j>=0;i++,j--)
	{
		cout<<mat[i][j]<<"\t";
		cout<<endl;	
	} 
	cout<<endl;
}
void girardp(int mat[][5],int rt)
{
	int AM;
	for(int i=0;i<rt;i++)
	{
		for(int j=0;j<i;j++)
		{
			AM=mat[j][i];
			mat[j][i]=mat[i][j];
			mat[i][j]=AM;
		}
	}
}
void girards(int mat[][5])
{
	
}
