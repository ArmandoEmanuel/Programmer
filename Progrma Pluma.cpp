#include<iostream>
using namespace std;
void menu();
void mostrar(int mat[][20],int a,int b );
void derecha(int &h);
void izquierda(int &h);
void mover(int mat[][20],int e,int &a, int &b,int pluma,int h);


int main()
{
	int mat[20][20]={{0}};
	
	int pluma;
	int a=0;
	int b=0;
	int h=1;
	int e=0;
	int opc;
	do
	{ system("cls");
		menu();
		cin>>opc;
		switch(opc)
		{
			case 1:
				pluma=0;
				mat[a][b]=pluma;			
			break;
			case 2:
				pluma=1;
				mat[a][b]=pluma;		
			break;
			case 3:
				derecha(h);
			break;
			case 4:
				izquierda(h);
			break;
			case 5: 
				cout<<"cuantos espacios quieres avanzar: ";
				cin>>e;
				mover(mat,e,a,b,pluma,h);
			break;
			case 6:
				mostrar(mat,a,b);
				system("pause");
			break;
				
		}
	}while(opc !=7);
	return 0;
			
}

void menu()
{
cout<<" \n------------------------------------OPERACIONES------------------------------  \n\n";
		cout<<"1==> Pluma hacia arriba \n";
		cout<<"2==> Pluma hacia abajo \n";
		cout<<"3==> Gira a la derecha \n";
		cout<<"4==> Gira a la izquierda \n";
		cout<<"5==> Avanzar espacio \n";
		cout<<"6==> Imprime la matriz \n";
		cout<<"7==> Fin del programa \n";
		cout<<"Selecciona el numero de la operacion a realizar:  ";
		
}

void mostrar(int mat[][20],int a,int b)
{
	for(int a=0;a<20;a++)
	{
		for(int b=0;b<20;b++)
		{
			cout<<mat[a][b]<<" ";
		}
		cout<<"\n";
	}
}

void derecha(int &h)
{
	h++;
	if(h>4)
	   h=1;
}

void izquierda(int &h)
{
	h--;
	if(h<1)
	   h=4;
}

void mover(int mat[][20],int e,int &a,int &b,int pluma,int h)
{
	if(h==1)
	{
		e+=b;
			for(;b<e;b++)
			{
				if(b<20)
					if(pluma==1)
					{
						mat[a][b]=pluma;
					}
			}
		if(b>20)
		{
			b=19;
		}
	}
	else
	if(h==2)
	{
		e+=a;
		for(;a<e;a++)
		{
			if (a<20)
				if(pluma==1)
				{
					mat[a][b]=pluma;
				}
		}
		if(a>20)
		{
			a=19;
		}
	}
	else
		if(h==3)
		{
			cout <<"   "<<h<<" "<<b<<" "<<e<<endl;
			cin.get();
			cin.get();
			e=b-e;
			for(;b>e;b--)
			{	
				if (b>=0)
					if(pluma==1)
					{
						mat[a][b]=pluma;
					}
			}
			if(b<0)
			{
				b=0;
			}	
		}
	else
		{
			e=a-e;
			for(;a>e;a--)
			{	if (a>=0)
					if(pluma==1)
					{
						mat[a][b]=pluma;
					}
			}
			if(a<0)
			{
				b=0;
			}		
		}
}


