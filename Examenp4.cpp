//Autor: Cuero Burbano Piero Dario
//Programa: Arreglo

#include <iostream>

using namespace std;

int main () {

	int AR[5],S=0;

	for(int i=0; i<5; ++i) {

		cout<<"Ingrese los valores para cada elemento"<<(i+1)<<" : "<<endl;

		cin>> AR[i];

	}

	for(int i=0; i <5; ++i) {

		S += AR[i];

	}

	cout<<"La suma de todos los elementos es "<<S<<endl;

	return 0;

}

