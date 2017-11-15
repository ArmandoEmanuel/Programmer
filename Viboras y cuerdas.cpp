#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int dado();
int Player1(int vec[],int P1);
int Player2(int vec[],int P2);


int main()
{
	int vec[100]={0};
	int P1=0;
	int P2=0;
	srand(time(NULL));
	vec[5]=+11; 
	vec[25]=+10; //<==Tablero de juego [Escaleras-Serpientes]
	vec[30]=+15; 
	vec[60]=+8; 
	vec[75]=+10; 
	vec[15]=-7; 
	vec[20]=-10; 
	vec[50]=-15; 
	vec[80]=-20; 
	vec[95]=-70; 
	while(P1<100&&P2<100)
	{
		P1=Player1(vec,P1);
		P2=Player2(vec,P2);
			cout<<"Jugador 1: "<<P1<<endl<<"Jugador 2:"<<P2<<endl<<endl;
	}
	
	if(P1>=100&&P2>=100)
	{
		cout<<"Empate";
	}
	else
	if(P1>P2)
	{
		cout<<"Gano el Jugador 1";
	}
	else
	cout<<"Gano el Jugador 2";
	
	return 0;
}
int Player1(int vec[],int P1)
{
	P1+=dado();
	P1+=vec[P1];
	return P1;
}

int Player2(int vec[],int P2)
{
	P2+=dado();
	P2+=vec[P2];
	return P2;
}

int dado()
{
	int n;
	return n=1+rand()%6;	
}


