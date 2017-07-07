#include <iostream>
#include "function.h"
#include <vector>
#include <array>

using namespace std;

int main() {


	/* Ejer1
	vector<int> vec {2,2,2,2,8,5,5,5,5,5,3,9,6,6,6,6};
	cout << meseta(vec).first << ", " << meseta(vec).second;
	*/

	/* Ejer 2
	vector <vector<int> > base;
	int n = 3;
	for (int i=0; i<10; i++) {
		vector<int> aux;
		aux.push_back(i);
		base.push_back(aux);

	}
	for (int j=1; j<n; j++) {
		base = ejer2(base);
	}
	for (int i = 0; i<base.size(); i++) {
		cout << base [i][0] << "," << base [i][1] << "," << base [i][2] <<  endl;
	}
	*/

	/*Ejer 4
	vector<int> vec1 {1,2,4,6};
	vector<int> vec2 {3,5};

	vector<pair<int,int> > finalproduct (ejer4(vec1,vec2)); // llamo a la funcion una vez y copio el vector resultante en finalproduct asi no tengo que hacer varios llamados
	for (int i =0; i < finalproduct.size(); i++) {
		cout << finalproduct[i].first << "," << finalproduct[i].second << endl;
	}
	*/

	/*Ejer 5
	vector<int> vec1 {1,2,4,6};
	vector<int> vec2 {1,2,4,6};
	cout << ejer5(vec1,vec2);
	*/

	/* Ejer 6
	vector<int> vec1 {8,3,2,5,9};
	int k = 5;
	cout << ejer6(vec1,k);
	*/

	/* Ejer 7
	vector<int> vec {6,5,3,3};
	cout << ejer7(vec);
	*/

	/* Ejer 8
	vector<int> vec {5,6,3,4,5,6,9};
	vector<pair<int,int> > result (ejer8(vec));
	for (int i =0; i < ejer8(vec).size(); i++) {
		cout << ejer8(vec)[i].first << "," << ejer8(vec)[i].second << endl;
	}
	*/

	/* Ejer 9
	string cad1 {5,6,3,4,3};
	string cad2 {5,6,3,4,6};
	cout << subSeq(cad1,cad2);
	*/

	/* Ejer 10
	string cad1 {1,2,3,4,1,3,8};
	string cad2 {1,3,5,1,2,3,4};
	vector<pair<int,int> > secuencia (subsec(cad1,cad2));
	for (int i =0; i < secuencia.size(); i++) {
			cout << secuencia[i].first << "," << secuencia[i].second << endl;
	}
	*/

	/*string cad1 {'2','3','5','1','9','2'};
	string cad2 {'4','1','3','5','1','9','2','3','4'};
	string subcad (ejer10(cad1,cad2));
	cout << "Longitud: " << subcad.size() << endl;
	for (int i =0; i < subcad.size(); i++) {
		//cout << subcad[i] << ", " ;
	}*/

	/* Ejer 12
	string cadena {'h','o','l','a','#','c','o','m','o','#','e','s','t','a','s'};
	int tam = InvertirFrase(cadena,'#').size();
	vector <string> fraseInvertida (InvertirFrase(cadena,'#'));
	for (int i = 0; i < tam; i++) {
		cout << fraseInvertida[i];
	}
	*/

	/* Ejer 13
	string cadena {'h','#','o','l','a','#','#','#','n','e'};
	vector<string> cadenaSinEspacios (split(cadena));

	for (int i = 0; i < cadenaSinEspacios.size(); i++) {
		cout << cadenaSinEspacios[i] << endl;
	}
	cout << cadenaSinEspacios.size();
	*/

	/* Ejer 14
	string cadena {'e','s','t','a','#','e','s','#','u','n','a','#','c','a','d','e','n','a','#','d','e','#','c','a','r','a','c','t','e','r','e','s','#','a','#','p','a','r','t','i','r'};
	vector<string> cadenaSinEspacios (ejer14(cadena, 10));
	for (int i = 0; i < cadenaSinEspacios.size(); i++) {
		cout << cadenaSinEspacios[i] << endl;
	}
	*/
	


	return 0;
}


