#include <iostream>
#include <string>
using namespace std;
void buscaPalabrasXTam(string frase, int size)
 {
    unsigned int _count = 0, i, count = 0;
    

    for(i = 0; i < frase.length(); i++)
	 {
        _count++;
        if(frase.at(i) == char(32) || i == frase.length() - 1) 
		{ 
            if(_count - (frase.at(i) == char(32) ? 1: 0) == size)  
            	count++; 
            _count = 0;
        }
    }
    cout << "\nPalabras Entontradas [" << size << "] : "<< count;    
}

int main()
{
  string frase;
  int size;
  cout << "Ingresa La Frase: ";
  getline (cin, frase);
  cout << "Numero de palabras: ";
  cin >> size; 
  buscaPalabrasXTam(frase, size);
  return 0;
}

