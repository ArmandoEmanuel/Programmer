
#include <iostream>
#include <string>
using namespace std;
void function(string frase, int v[15])
 {
unsigned int count = 0, i;
 
     for(i = 0; i < frase.length(); i++) 
	{
        count++;
        if(frase.at(i) == char(32) || i == frase.length() - 1)
		 {
            if(count > 1 && count < 17) 
                v[count - (frase.at(i) == char(32) ? 2: 1)]++;       
				count = 0; 
        }
    }
    cout << "\n";
    
    for(i = 0; i < 15; i++) {
        cout << v[i] << " ";
    }
}


int main()
{
  string name;
  int v[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  cout << "Ingresa La Frase: ";
  getline (cin, name);
  function(name, v);
  return 0;
}

