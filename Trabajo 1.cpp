#include <iostream>
using namespace std;
    int main()
{
	    /*
	Sin necesidad de usar otras variables, calcula el nuevo sueldo de acuerdo a la siguiente tabla
	rango aumento
	0 - 1000 18% 
	1001 - 1100 15%
	1101 - 1200 12%
	1201 - 1300 10%
	mas de 1300 8%
*/
    float sueldo;
        cout<<"Ingresa tu sueldo actual ";
          cin>>sueldo;
           
        if(sueldo>=0 &&sueldo<=1000)
            sueldo*=1.18;
            
                else
                    if(sueldo>=1001 && sueldo<=1100)
                         sueldo*=1.15;
                            
                     else
                         if(sueldo>=1101 && sueldo<=1200)
                            sueldo*=1.12;
                            
                            else
                                if(sueldo>=1201 &&sueldo<=1300)
                                    sueldo*=1.10;
                                    
                                    else
                                        sueldo*=1.08;
                                             cout<<"\nTu nuevo sueldo es : "<<sueldo;
	system("PAUSE");
        return 0;
}
