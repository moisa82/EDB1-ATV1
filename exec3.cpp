#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(const vector<int>& array){

	int tamanho = array.size();

	for(int i = 0; i < tamanho - 1; ++i){
		if(array[i] > array[i + 1]){
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	
	vector<int> array1 = {1, 2, 3, 4, 5};
    vector<int> array2 = {5, 8, 9};

	cout << "Array 1 está ordenado? " << (estaOrdenado(array1) ? "Sim" : "Não") << endl;
	cout << "Array 2 está ordenado? " << (estaOrdenado(array2) ? "Sim" : "Não") << endl;
	return 0;
}