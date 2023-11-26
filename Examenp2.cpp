//Autor:Cuero Burbano Piero Dario
//Programa:Positivo, negativo o cero

#include <iostream>

using namespace std;

int main () {
	int N1;

	cout<<"Ingrese un numero"<<endl;
	cin>>N1;

	cout<<"Comprobando si el numero ingresado es positivo, negativo o cero"<<endl;

	if(N1>0){

		cout<<"El numero ingresado es positivo"<<endl;

	}else if (N1<0){

		cout<<"El numero ingresado es negstivo"<<endl;

	}else {

		cout<<"El numero ingresado es cero"<<endl;

	}

	return 0;

}

