#include<iostream>
 using namespace::std;

 const int Tamano_Arreglo = 1000;


 void Imprime( int A[], int Tamano);

 int main()

 { 
 int Arreglo[Tamano_Arreglo + 1] = { 0, 0};

 for ( int i = 1; i <= Tamano_Arreglo; i++ )
 Arreglo[i] = 1; 

 for ( int j = 2; j <= Tamano_Arreglo; j++ )
 for ( int k = 2; k <= (Tamano_Arreglo)/j; k++ )
 Arreglo[k*j] = 0;

 Imprime( Arreglo, Tamano_Arreglo );

 return 0;

 } 

 void Imprime( int A[], int Tamano )

 { 
 	int contador = 0;

 for ( int m = 1; m <= Tamano; m++ )
 { 
 	if ( 1 == A[m] )
	 contador++;
 } 


 cout <<"\n\nEstos son los " << contador << " numeros primos que hay ";
 cout <<"entre 1 y " << Tamano << endl;

 for ( int n = 1; n <= Tamano; n++ )
 { 

 if ( 1 == A[n] )
 {
 cout <<" " << n << "\t";
 }
 } 

 cout << endl <<endl;
 return;
 } 
