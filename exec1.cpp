#include <iostream>
#include <vector>

using namespace std;

int buscaSeq(const vector<int>& array, int tamanho, int valor, int indice){
	if(indice >= tamanho){
		return -1;
	}


	if(array[indice] == valor){
		return indice;
	}

	return buscaSeq(array, tamanho, valor, indice+1);

}

int main(int argc, char const *argv[])
{
	//teste 1
	vector<int> array = {1,2,3,4,5,6,7,8,9,10};
	//teste 2 vector<int> array = {1,3,4,6,7,9,10};
	//teste 3 vector<int> array = {7,2,3,8,5,6,7,8,9,10};
	//teste 4 vector<int> array = {1,1,1,1,1};
	int tamanho = array.size();
	int valor = -7;

	int result = buscaSeq(array, tamanho, valor, 0);

	if(result != -1){
		cout << "O valor " << valor << " está no indice " << result << endl;
	}else{
		cout << "O valor não está na lista!" << endl;
	}

	return 0;
}