#include <iostream>
#include <stack> //Libreria para usar pilas
using namespace std;
int main(int argc, char const *argv[]){

	stack<char> nombre_p; //Declaramos nuestra pila para poder usar push() - pop() - top()

	string palabra, salida = "";

	cin >> palabra;

	for (int i = 0; i < palabra.size(); i++){
		nombre_p.push(palabra[i]);
	}

	while(!nombre_p.empty()){
		salida += nombre_p.top();
		nombre_p.pop();
	}

	if (palabra == salida){
		cout << "Si es palindromo" <<endl;
	}else{
		cout << "No es palindromo" <<endl;
	}


	return 0;
}