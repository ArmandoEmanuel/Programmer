
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char function(char cad1[], char cad2[]) {
	
	int _cad1 = -1, _cad2 = -1, i, s; 
    
	for(i = 0; i < 100; i++)
	 { 
	    
		if(_cad2 == -1 && cad2[i] == '\0')
		 {
			_cad2 = i;
		}

		if(_cad1 == -1 && cad1[i] == '\0')
			_cad1 = i;

		if(_cad1 != -1 && _cad2 != -1)
			break;
	}
	
    
    
	char join[_cad1 + _cad2];

	s = _cad1 > _cad2 ? _cad1 : _cad2;  
	
	cout << "Palabras de Cad1:" << _cad1 << ", Palabras de Cad2: "  << _cad2 << ", Palabras totales(join): " << _cad1 + _cad2  << "\n\n";
	cout << "Result: \t[";

	for(i = 0; i < s; i++) 
	{
		if(i < _cad1)
			join[i] = cad1[i];

		if(i < _cad2)
			join[_cad1 + i] = cad2[i];
	}

	for(i = 0; i < (_cad1 + _cad2); i++) 
	{
		cout << join[i];
	}
	
	cout << "]";
}

int main()
{
  char cad1[100], cad2[100];
  cout << "Cadena [1]: ";
  cin >> cad1;
  cout << "Cadena [2]: ";
  cin >> cad2;
  function(cad1, cad2);
  return 0;
}
