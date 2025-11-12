#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;

int maksimumRekursif(int arr[], int n) {
if (n == 1) return arr[0];
int maxSubarray = maksimumRekursif(arr, n - 1);
return (arr[n - 1] > maxSubarray) ? arr[n - 1] : maxSubarray;
}

int main() {
int arr[100];
string line;
int count = 0;
ifstream file("data_input.txt");
if (!file) {
cerr << "Tidak dapat membuka file!" << endl;
return 1;
}
while (getline(file, line) && count < 100) {
stringstream ss(line);
ss >> arr[count];
count++;
}
file.close();
for(int i = count; i < 100;i++)
{
	arr[i]=0;
}
cout<<"Data yang dibaca dari file:"<<endl;
for (int i = 0; i<count;i++){
cout<<arr[i]<<endl;}
int n = sizeof(arr) / sizeof(arr[0]);
cout << "Nilai maksimum dalam array: " << maksimumRekursif(arr, n) << endl;
return 0;
}
