#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;
    const string numbers[10] = {"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    cout << "Ingresa Numero: ";
    getline (cin, number);
    
    int i, size = number.length();
    for(i = 0; i < size - 1; i++)
	 {
        cout << numbers[number.at(i) - 48] << " , ";
  	  }
    cout << numbers[number.at(i) - 48] << "\n";
    
    return 0;
}

