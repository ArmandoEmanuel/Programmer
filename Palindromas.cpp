#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int palindroma(char palabra[],int ini, int fin)
{
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindroma(palabra, ini+1, fin-18);
    else return 0;
}

int main()
{
    
    char palabra[100];
    int tam,pal;
    cout<<"\n\t\tCOMPRUEBA SI UNA ORACION ES PALINDROMA \n\n";
    cout<<" Ingrese la palabra u Oracion: ";
    cin.getline(palabra,100,'\n');
    tam=strlen(palabra);
    pal=palindroma(palabra,0,tam-1);
    if(pal==1)
    cout<<"\n Es palindroma\n";
    else if(pal==0)
    cout<<"\n\n No es Palindroma: \n";
 
    return 0;
}

