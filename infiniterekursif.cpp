#include<iostream>
using namespace std;
int hasil =1;
void contohRekursiBerisiko(int n) {
cout << "Nilai n: " << n << endl;
contohRekursiBerisiko(n - 2);
hasil*=n;
}

int main() {
int n = 10;
cout << "Memulai rekursi :" << endl;
contohRekursiBerisiko(n);
cout<<"Hasil: "<<hasil;
return 0;
}
