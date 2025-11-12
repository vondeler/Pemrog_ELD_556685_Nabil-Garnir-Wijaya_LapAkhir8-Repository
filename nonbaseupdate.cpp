#include<iostream>
using namespace std;
int hasil=1;
int n = 10;
void contohRekursiBerisiko(int n) {
int temp;
cout << "Nilai n: " << n << endl;
if (n <= 1) {
n=1;
cout << "Selesai" << endl;
}else
contohRekursiBerisiko(n - 2);
hasil*=n;
}

int main() {

cout << "Memulai rekursi :" << endl;
contohRekursiBerisiko(n);
cout<<"Hasil: "<<hasil;
return 0;
}
