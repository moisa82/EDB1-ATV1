#include <iostream>
#include <vector>

using namespace std;

int buscaBin(const vector<int>& array, int valor){
	int esquerda = 0;
	int direita = array.size() - 1;


	while(esquerda <= direita) {

		int meio = esquerda + (direita - esquerda)/2;


		if(array[meio] == valor){
			return meio;
		}


		if(valor < array[meio]){
			direita = meio - 1;
		}else{
			esquerda = meio + 1;
		}


	}

	return -1;
}

int main(int argc, char const *argv[])
{
	
	vector<int> array = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
	// teste 2 vector<int> array = {2, 5};
	// teste 3vector<int> array = {2, 2, 8, 12, 16, 23, 7, 38, 56, 72, 55};
	int valor = 91;

	int indice = buscaBin(array, valor);

	if(indice != -1){
		cout << "Valor encontrado no indice: " << indice << endl;
	}else{
		cout << "Valor não encontrado!" << endl;
	}

	return 0;
}