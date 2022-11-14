#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand();
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//array1
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';  
	}*/
	//array2
	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';
		}*/
	//array3
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}*/
	//array4
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * D;
		cout << mas[i] << ' ';
	}*/
	//array5
	/*const int n = 10;
	int mas[n];
	int fa = 1, fb = 1, k, fk = 0;
	cin >> k;
	mas[0] = fk;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[fk - fa] + mas[fk - fb];
		cout << mas[i] << ' ';
	}*/
	//array7
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/
	//array8
	/*const int n = 10;
	int mas[n];
	int k = 0;
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i <= n; i++) {
		if (mas[i] % 2 != 0) {
			k++;
			cout << mas[i] << endl;
		}
	}
	cout << k << endl;*/
	//array9
	/*const int n = 10;
	int mas[n];
	int k = 0;
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i <= n; i++) {
		if (mas[i] % 2 == 0) {
			k++;
			cout << mas[i] << endl;
		}
	}
	cout << k << endl;*/
	//array10
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i <= n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i <= n; i++) {
		if (mas[i] % 2 == 0) {
			cout << mas[i] << ' ';
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (mas[i] % 2 != 0) {
			cout << mas[i] << ' ';
		}
	}
	cout << endl;*/
//array13
int n;
cin >> n;
if (n % 2 != 0) {
	int a[10];
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 != 0) {
			cout << a[i] << ' ';
		}
	}
}
else {
	cout << "Error" << endl;
}
}