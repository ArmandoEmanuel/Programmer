#include <iostream>

#include <math.h>

#include <conio.h>

using namespace std;


int main()

{

	int posicion=1;

	char movimiento;


		do

		{system("cls"); 

			
			cout<<"Eliga alguna de las opciones a realizar:\n "<<endl;

			if(posicion==1)

				cout<<"===> .-Valor Constante Matematica |\n"<<endl;

			else

				cout<<"     .-Valor Constante Matematica |\n"<<endl;

			if(posicion==2)

				cout<<"===> .-Valor de e^x |\n"<<endl;

			else

				cout<<"     .-Valor de e^x |\n"<<endl;

			if(posicion==3)

				cout<<"===> .-Salir |\n"<<endl;

			else

				cout<<"     .-Salir |\n"<<endl;


			

			movimiento=getch();		

				switch(movimiento)

				{

					case 80://fecla abajo

					{

						posicion++;	if(posicion==4) posicion=1;	

					}

				break;			

				case 72://fecla arriba

					{

						posicion--;	if(posicion==0) posicion=3;	

					}

				break;

				case 13://Tecla de enter

					{

						switch(posicion)

						{

							case 1:

								int e;

								float ResFac,res;

								cout<<"Ingresa el valor de 'n':";

								cin>>e;

								cout<<"----- n = "<<e<<" -----"<<endl;

								cout<<"e = 1 ";

								ResFac=1;

								res=0;

								for(int ciclo=1;ciclo<=e;ciclo++)

								{

									cout<<" + "<<"1"<<"/"<<ciclo<<"!";

									ResFac*=ciclo;

									res+=1/ResFac;

								}

								res+=1;

								cout<<" = "<<res<<endl;

								system("PAUSE");

							break;


							case 2:

								int x,n;

								float exp,resfac,total;

								cout<<"Ingresa el valor de 'x':";

								cin>>x;

								cout<<"Ingresa el valor de 'n':";

								cin>>n;


								resfac=1;

								total=1;

								cout<<"e^"<<x<<" = "<<total;

								for(int ciclo=1;ciclo<=n;ciclo++)

									{

										cout<<" + "<<x<<"^"<<ciclo<<"/"<<ciclo<<"!";

										exp=pow(x,ciclo);

										resfac*=ciclo;

										total+=exp/resfac;

									}

									cout<<" = "<<total<<endl;

									system("PAUSE");

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

					}//Switch case del enter

				break;

				}

		}while(movimiento != 27);//todo el ciclo se repite mientras que el usuario no seleccione cero o salir

	return 0;		

}
