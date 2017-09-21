#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int dado();



int main()


{

	int posicion=1,n2,n3,n4;
	int Dado[6]={0},tiro,cara;

	char movimiento;


		do

		{system("cls"); 

			
			cout<<"-----------------------------------------MENU----------------------------------\n "<<endl;

			if(posicion==1)

				cout<<"===> 1.-1 Lanzamiento|\n"<<endl;

			else

				cout<<"     1.-1 Lanzamiento |\n"<<endl;

			if(posicion==2)

				cout<<"===> 2.-2 Lanzamiento|\n"<<endl;

			else

				cout<<"     2.-2 Lanzamiento |\n"<<endl;
				
			if(posicion==3)

				cout<<"===> 0.-Salir|\n"<<endl;

			else

				cout<<"     0.-Salir |\n"<<endl;

	cout<<"--------------------------------------------------------------------------------\n "<<endl;
			

			movimiento=getch();		

				switch(movimiento)

				{

					case 80:

					{

						posicion++;	
						if(posicion==6)
						
							posicion=1;	

					}

				break;			

				case 72:

					{

					
						if(--posicion==0) posicion=3;	

					}

	break;

	case 13:

	{

	switch(posicion)

	{

	case 1:
	for(tiro=1;tiro<=100;tiro++)
	{
		dado();
	}
		cout<<" \n", "Cara", "Frecuencia";
	 for(cara = 1; cara <= 6; cara++)
	 {
	 	cout<<" \n"<< cara<<dado[cara];
	 }
        
        
	getch();
	break;

	case 2:
	
		getch();
	break;
	case 3:

	char salir;
	cout<<"Deceas Salir(S/N):";
	cin>>salir;
	if(salir=='s'||salir=='S')
		return 0;
		system("PAUSE");								

							break;

						}

					}

				break;

				}

		}while(movimiento != 27);

	return 0;		

}

int dado()
{
		int cara;
	cara = (rand() % 6) + 1;
    ++dado[cara];

}
