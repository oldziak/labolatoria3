#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	if (a == b) {
		cout << "Liczby a i b sa rowne";
	}
	else if (a != b)
	{
		if (a > b) {
			cout << "Liczba a jest wieksza niz b";
		}
		else if (b > a) {
			cout << "Liczba b jest wieksza niz a";
		}

	}

	//zadanie 3
	float r = 0;
	cout << "Podaj korelacje: ";
	cin >> r;
	if (0.7 <= r <= 1) {
		cout << "Bardzo silna korelacja dodatnia";
	}
	else if (r >= 0.5) {
		cout << "Silna korelacja dodatnia";
	}
	else if (r >= 0.3) {
		cout << "umiarkowana korelacja dodatnia";
	}
	else if (r >= 0.2) {
		cout << "s³aba korelacja dodatnia";
	}
	else if (r >= 0) {
		cout << "brak korelacji dodatnia";
	}

	//zadanie 4
	float x = 0.0;
	float y = 0.0;
	float wynik = 0.0;
	char znak;
	cout << "Podaj liczbe x: ";
	cin >> x;
	cout << "Podaj liczbe y: ";
	cin >> y;
	cout << "Podaj znak: ";
	cin >> znak;
	if (znak == '+') {
		wynik = x + y;
		cout << x << "+" << y << "=" << wynik << endl;
	}
	if (znak == '-') {
		wynik = x - y;
		cout << x << "-" << y << "=" << wynik << endl;
	}
	if (znak == '*') {
		wynik = x * y;
		cout << x << "*" << y << "=" << wynik << endl;
	}
	if (znak == '/') {
		wynik = x / y;
		cout << x << "/" << y << "=" << wynik << endl;
		if (y == 0) {
			cout << "nie wolno przez zero!!!!";
		}
	}
}
//zadanie 5