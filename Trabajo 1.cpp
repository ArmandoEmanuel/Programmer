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
            sueldo=(sueldo*118)/100;
            
                else
                    if(sueldo>=1001 && sueldo<=1100)
                         sueldo=(sueldo*115)/100;
                            
                     else
                         if(sueldo>=1101 && sueldo<=1200)
                            sueldo=(sueldo*112)/100;
                            
                            else
                                if(sueldo>=1201 &&sueldo<=1300)
                                    sueldo=(sueldo*110)/100;
                                    
                                    else
                                        sueldo=(sueldo*180)/100;
                                             cout<<"\nTu nuevo sueldo es : "<<sueldo;
	system("PAUSE");
        return 0;
}
