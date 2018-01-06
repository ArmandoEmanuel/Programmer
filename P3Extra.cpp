#include <iostream>
#include <string>
using namespace std;
void function(int v[15], int m[][2], int _v, int _m)
 {
    unsigned int i, j;

    for(i = 0; i < _m; i++) {
        for(j = 0; j < _v; j++) 
		{
            if(v[j] == m[i][0])
			 {
                m[i][1] = j;
                break;
            }
            if(j == _v - 1) 
                m[i][1] = -1;
            
        }
    }
    cout << "\n";
    
    for(i = 0; i < _m; i++) 
	{
        cout << m[i][0]  << " : " << m[i][1] << " \n" ;
    }
}


int main()
{
  int v[15] = {1,2,3,4,5,6,7,8,9};
  int m[5][2] = { {2}, {4}, {6}, {8}, {20} }; /*Prueba del llenado de la matriz */
  function(v, m, 15, 5);
  
  return 0;
}
