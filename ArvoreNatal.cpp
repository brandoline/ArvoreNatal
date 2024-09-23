#include <iostream>
#include <locale>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

	//COPA
	
//Definir tamanho
int altura;
cout << "Digite a altura do seu pinheiro: ";
cin >> altura;

for(int i = 0; i < altura; i++){
	// Fazer torre esquerda
		for(int j = altura; j > i; j--){
		cout << ' ';
	}
	// Fazer torre esquerda
	for(int j = 0; j <= i; j++){
		cout << '#';
	}
	
	// Adicionar ponto entre torres
	cout << '.';
	
	for(int j = 0; j <= i; j++){
		cout << '#';
	}
	cout << endl;
}

	// TRONCO DO PINHEIRO

for(int i = 0; i < altura; i++){
		for(int j = altura; j > i; j--){
		cout << ' ';
	}
	// Adicionar espacos_brancos ate metade_arvore
	for(int j = 0; j <= i; j++){
		cout << ' ';
	}
	
	// chegar metade, adicionar ponto
	cout << '.';	
	cout << endl;
}

	// looping adicionar pontos_base da arvore
for(int i = 0; i < altura*2.5; i++){
	cout << '.';
}

return 0;
	
}
