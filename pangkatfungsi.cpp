#include <iostream>
using namespace std;

int angka,hasil=0,pangkat;
int fpangkat(int x, int y){
	if (y <= 0){
		return 1;
	}
	else {
		return x*fpangkat(x,y-1);
	}
}
int main (){
	cout<<"Input Angka yang ingin dipangkatkan: ";
	cin>>angka;
	cout<<"Input pangkat: ";
	cin>>pangkat;
	hasil = fpangkat(angka, pangkat);
	cout<<"Hasil Pangkat: "<<hasil;
}
