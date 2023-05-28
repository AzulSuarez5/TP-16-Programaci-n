#include<bits/stdc++.h>
using namespace std;
string CaracterCadaTresDigitos(string caracter, string frase);
int main(){	
    string frase,caracter;
	cout<<"ingrese la frase:"<<endl;
    getline(cin,frase);
    cout<<"ingrese un caracter:"<<endl;
    cin>>caracter;
    string n=CaracterCadaTresDigitos(caracter,frase);
	cout<<"La palabra convertida es:"<<n;
	return 0;
}
string CaracterCadaTresDigitos(string caracter, string frase){
	string CadenaCambiada; 
	int i,contador=2;
	for(i=0; i<frase.size(); i++){
		CadenaCambiada+=frase[i];
		if(i==contador){
			CadenaCambiada+=caracter;
			contador=contador+3;
		}
	}
	return CadenaCambiada;
}