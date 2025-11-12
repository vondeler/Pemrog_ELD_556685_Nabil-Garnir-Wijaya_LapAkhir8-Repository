#include <iostream>
using namespace std;
int angka,hasil=0;
int fibo(int n)
{
	if (n<=2){
		return 1;
	}
	else {
		return fibo(n-1)+fibo(n-2);
	}
	int temp;
	
}
int main(){
	cout<<"Mau angka fibonnaci ke berapa?"<<endl;
	cout<<"input: ";
	cin>>angka;
	hasil = fibo(angka);
	cout<<"Hasil: "<<hasil;
}
