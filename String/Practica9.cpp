#include <iostream>
#include "function.h"
#include <vector>

using namespace std;

//Ejercicio 1: Meseta mas larga, devuelve la subseq, de valores igualers, mas larga de un vector
pair<int,int> meseta (vector<int> vec) {
	vector<pair<int,int> > iguales;
	int cantRep = 0;
	int j=1;
	int i=j;
	//for (int i=j; i<vec.size(); i++) {
	while (i < vec.size()){
		while (j<vec.size() && vec[j] == vec [j-1])  {
			cantRep++;
			i=j++;
		}
		if (cantRep > 0)
			iguales.push_back(make_pair(vec[j-1],cantRep+1));
		cantRep=0;
		i=j++;
	}
	int max = iguales[0].second;
	pair<int,int> meset = iguales[0];
	for (int k=1; k<iguales.size(); k++) {
		if (iguales[k].second > max) {
			max = iguales[k].second;
			meset = iguales[k];
		}
	}

	return meset;
}

//Ejercicio 2: Dada una seq retorna todas las sec de long n con valores de 0 a 9

vector<vector<int> > ejer2 (vector<vector<int> > base){
	int i=0;
	vector<vector<int> > res;
	while (i<base.size()) {
		int j =0;

		while (j<=9) {
			vector<int> aux;
			int k=0;

			while (k < base[0].size()) { //cargo a aux los dos numeros de la posicion i
				aux.push_back(base[i][k]);
				k++;
			}

			aux.push_back(j);
			res.push_back(aux);
			j++;
		}
		i++;
	}
	return res;
}

//Ejercicio 4: Producto Cartesiano

vector <pair<int,int> > ejer4 (vector<int> vec1, vector<int> vec2) {
	vector <pair<int,int> > product;
	for (int i=0; i<vec1.size(); i++) {
		for (int j=0; j<vec2.size(); j++) {
			product.push_back(make_pair(vec1[i],vec2[j]));
		}
	}
	return product;
}

//Ejercicio 5: Distancia de Hamming
int ejer5 (vector<int> vec1, vector<int> vec2) {
	int count = 0;
	for (int i=0; i<vec1.size(); i++) {
		if (vec1[i] != vec2[i])
			count++;
	}
	return count;
}

//Ejercicio 6: Quick Select
int ejer6 (vector<int> vec, int k) {
	int j = 0;
	int count;
	while ( j < vec.size() && k!=count) {
		count = 0;
		int i = 0;
		while (i<vec.size() && count <= k) {
			if (vec[j] >= vec [i])
				count++;
			i++;
		}
		j++;
	}
	return vec[j-1];
}
//Ejercicio 7: suma Izq = suma Der
int ejer7 (vector<int> vec) {

	int i =0;
	int indice = 0;
	bool fin = true;
	while (i < vec.size() && fin) {
		int sumIzq = 0;
		int sumDer = 0;
		for (int j = 0; j < i; j++) {
			sumIzq = sumIzq + vec[j];
		}
		for (int j = i+1; j < vec.size(); j++) {
			sumDer = sumDer + vec[j];
		}
		if (sumIzq == sumDer) {
			indice = i;
			fin = false;
		}
		i++;
	}
	return indice;
}

//EJer 8: Compresion de secuencias
vector<pair<int,int> > ejer8 (vector<int> vec) {
	vector<pair<int,int> > result;
	int i=0;
	int count = 1;
	while (i < vec.size()) {
		int first = vec[i];
		while (i<vec.size() && vec[i]==vec[i+1]-1) {
			count++;
			i++;
		}
		result.push_back(make_pair(first,count));
		count=1;
		i++;
	}
	return result;

}

/*
 * Manipulemos los STRINGS
 */

// Ejer 9: Subsecuencias

bool subSeq (string cad1, string cad2) {
	int i=0;
	int count=0;
	int acum = 0;
	while (i<cad2.size() && count!=cad1.size()) {
		if (cad1[0]==cad2[i]) {
			int j=0;
			count=0;
			while ( j < cad1.size() && cad1[j]==cad2[acum]) {
				count++;
				j++;
				acum++;
			}

		} else {
			acum++;
		}
		i++;
		acum=i;

	}
	return count==cad1.size();
}

// Ejer 10
vector<pair<int,int> > subsec (string cad1, string cad2) {

	int k = 0;

	vector<pair<int,int> > subsecs;

	while (k<cad1.size()) {
		int j = 0;
		int i = 0;
		int count=0;
		while (i<cad2.size()) {
			int valorindice = k;
			j = i;
			while (j<cad2.size() && cad1[valorindice]==cad2[j]) {
				count++;
				j++;
				valorindice++;
			}
			if (cad1[k]==cad2[i])
				subsecs.push_back(make_pair(count,k)); //j-count es la 1° pos de la subseq
			i++;
			count = 0;
		}
		k++;
	}


	return subsecs;
}

//Ejer 10 bis intento
string armarsub (string cad1, int i, int f) {
	string misub;

	for (int j = i; j<f; j++){
		misub.push_back(cad1[j]);
	}
	return misub;
}


string ejer10 (string cad1, string cad2) {
	int final = cad1.size();
	int j = 0;
	bool bandera=false;
	string cadmlarga;
	while (final >= 2 && !bandera) {

		int fin=final;
		while (fin <= cad1.size() && !bandera) {
			cadmlarga = armarsub(cad1,j,fin);
			bandera = subSeq(cadmlarga,cad2);
			j++;
			fin++;
		}
		final--;
		j=0;

	}
	return cadmlarga;
}

// Ejer 11
//string subString (string cadena, int L) {

//}


//EJer 12

/*vector<int> PosicionesDelimitador (string cadena, char delim) {
	vector<int> PosDelimitador;
	PosDelimitador.push_back(0);
	for (int i = 0; i < cadena.size() ) {
		if (delim == cadena[i])
			PosDelimitador.push_back(i);
	}
	return PosDelimitador;
}*/

// Ejercicio 12: invertir orden de palabras
vector<string> sacaDelim (string cadena, char delim) {
	string acumPalabra;
	vector <string> cadenaSinDelim;
	int j=0;
	int i=0;
	while (j < cadena.size()) {
		while (i < cadena.size() && cadena[i] != delim) {
			acumPalabra.push_back(cadena[i]);
			i++;
		}
		//if (cadena[i] == delim) {
			cadenaSinDelim.push_back(acumPalabra);
		//}
		acumPalabra = "";
		i++;
		j = i;
	}
	return cadenaSinDelim;
}
vector<string> InvertirFrase (string cadena, char delimitador) {
	vector<string> cadenasinDelim (sacaDelim(cadena, delimitador));
	vector<string> inversa;
	string delim  {delimitador};
	for (int i=cadenasinDelim.size()-1; i>0; i--) {
		inversa.push_back(cadenasinDelim[i]);
		inversa.push_back(delim);
	}
	inversa.push_back(cadenasinDelim[0]);

	return inversa;
}

// EJercicio 13
vector<string> split (string cadena) {
	string acumPalabra;
	char delim = '#';
	vector <string> cadenaSinDelim;
	int j=0;
	int i=0;
	while (j < cadena.size()) {
		while (i < cadena.size() && cadena[i] != delim) {
			acumPalabra.push_back(cadena[i]);
			i++;
		}
		if (cadena[i-1] != delim) {
			cadenaSinDelim.push_back(acumPalabra);
		}
		acumPalabra = "";
		i++;
		j = i;
	}
	return cadenaSinDelim;

}

int cuantoAgrega (string text) {
	int count = 0;
		while (text[text.size()-1] == '#') {
			text.pop_back();
			count++;
		}

	return count-1;
}
/*
vector<string> justifica (vector<string> texto) {
	vector<string> justificado;
	int i = 0;
	while (i < texto.size()) {
		justificado = split(texto[i]);

	}
}
*/

// Ejercicio 14
vector<string> ejer14 (string cadena, int c) {
	vector<string> cad1 (split(cadena));
	vector<string> cadFinal;
	int k = 0;
	int i = 0;
	int j = 0;

	while ( i < cad1.size() ) {
		cadFinal.push_back(cad1[i]);
		j++;
		while ( j < cad1.size() && cadFinal[k].size()+cad1[j].size() < c ) {
			cadFinal[k] += "#" + cad1[j];
			i = j++;
		}

		k++;
		i++;

	}
	return cadFinal;
}

