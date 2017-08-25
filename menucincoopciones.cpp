using namespace std;
#include <iostream>
#include <conio.h>
	int	main()
	{
	int op,n=0,i,n1,fac=1,n2,calf,intr;
	float prom,suma=0;
	char ch;


	

	cout <<"Selecciona la Opcion que deseas realizar: \n\n1.-Indentificador de numeros Primos\n\n2.-Indentificador de numeros Factoriales\n\n3.-Sacar promedio de calificaciones\n \nSalir.-0\nOperacion a realizar==>";
	cin>>  op  ;



	system ("cls");
		switch (op)
	{

	
	case 1:
	cout << "Seleccionaste la opcion Indentificador de primos:\n";
         cout<<" Ingrese numero a Indentificar: "<<endl;
         cin>>n1;
         for(i=1;i<(n1+1);i++){
         if(n1%i==0){
             n++;
            }
         }
         if(n!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
	break;
	case 2:
	cout <<"Seleccionaste la opcion Indentificador de Factorial\n ";
	cout<<"Ingrese el numero a Indentificar: "<<endl;
	cin>>n2;
	for(i=1;i<=n2;i++)
		fac=fac*i;
		cout<<"El factorial del numero "<<n2<<" es "<<fac;
	break;
	case 3:
	cout <<"Seleccionaste la opcion de sacar promedios:\n ";
	cout<<"Cuantas calificaciones desea introducir? [ej: 5]\n";
	cin>>intr;	
	if(calf>=0)
	for(i=1;i<=intr;i++){
		cout<<"Dame la calificacion: ";
		
	cin>>calf;

	
	suma+=calf;
	prom=suma/intr;
	
    }
    	else
		cout<<"el promedio es: "<<prom;
		
		cout<<"El promedio es: "<<prom;
	
		
	break;

	case 0:
	return 0;
	default:
	cout <<"Opcion no valida ";

	while(ch!='S' && ch!='s')
	{
		cout<<"Desea salir? (S/N)\n";
		ch=getch();
	
	}

	}
	



		
	return 0;

	}
