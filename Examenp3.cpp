//Autor: Cuero Burbano Piero Dario
//Programa: Tabla de multiplicar


#include <iostream>

using namespace std;

int main () {
	
	int N1;

	cout<<"Ingrese un numero"<<endl;
	cin>>N1;

	cout<<"Tabla de multiplicar del numero"<<N1<<endl;

	for(int i=1; i<=10; ++i) {

		cout<<N1<<"x"<<i<<"="<<(N1 * i)<<endl;

	}

	return 0;

}

