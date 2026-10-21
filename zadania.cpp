#include <iostream>
#include <math.h>
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
	//zadanie 2

	int a = 0;
	int b = 0;
	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;
	if (a == b) {
		cout << "Liczby a i b sa rowne";
	}
	if (a != b) {
		if (a > b) {
			cout << "Liczba a jest wieksza niz b";
		}
		else {
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
	//zadanie 5
	int liczba = 1;
		while (liczba > 0) {
			liczba++;
			cout << liczba << endl;
		}
	//zadanie 6
	float x = 0.0;
	float y = 0.0;
	float wynik = 0.0;
	char znak;
	while (true) {
		cout << "Podaj liczbe x: ";
		cin >> x;
		cout << "Podaj liczbe y: ";
		cin >> y;
		cout << "Podaj znak: ";
		cin >> znak;

		switch (znak) {
		case '+':
			wynik = x + y;
			cout << x << "+" << y << "=" << wynik << endl;
			break;
		case '-':
			wynik = x - y;
			cout << x << "-" << y << "=" << wynik << endl;
			break;
		case '*':
			wynik = x * y;
			cout << x << "*" << y << "=" << wynik << endl;
			break;
		case'/':
			wynik = x / y;
			cout << x << "/" << y << "=" << wynik << endl;
			break;
			if (y == 0) {
				cout << "nie wolno przez zero!!!!";
				break;
			}
		}
	}
	//zadanie 7
	int n = 0;
	while (true) {
		n++;
		if (n == 200)
			break;
		if (n % 2 == 0) {
			continue;
		}
		cout << n << endl;
	}
	//zadanie 8
	int n = 0;
	int d = 2;
	cout << "Podaj liczbe calkowita: ";
	cin >> n;
	for (d;d >= 2 && d <= sqrt(n);d++) {
		if (n % d == 0)
			cout << "Liczba " << n << " posiada dzielnik w przedziale";
		break;
	}
	cout << "Liczba" << n << " nie posiada dzielnikow w przedziale";

	//zadanie 9
	int temp = 0;
	cout << "Podaj temperature w stopniach Celcjusza: ";
	cin >> temp;
	if (temp < 0) {
		cout << "Mroz";
	}
	else if (temp >= 0 && temp < 10) {
		cout << "Zimno";
	}
	else if (temp >= 10 && temp < 20) {
		cout << "Umiarkowanie";
	}
	else if (temp >= 20 && temp < 30) {
		cout << "Cieplo";
	}
	else if (temp >= 30) {
		cout << "Goraco";
	}
	//zadanie 10
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;
	if (a >= b && b >= c)
		cout << a << endl;
	else if (a >= c && c >= b)
		cout << a << endl;
	else if (b >= c && c >= a)
		cout << b << endl;
	else if (b >= a && a >= c)
		cout << b << endl;
	else if (c >= b && b >= a)
		cout << c << endl;
	else if (c >= a && a >= b)
		cout << c << endl;
	//zadanie 11
	int rok = 0;
	cout << "Podaj rok: ";
	cin >> rok;
	if (rok % 4 == 0 && rok % 100 != 0) {
		cout << "Rok " << rok << "jest przestepny";
	}
	else if (rok % 400 == 0) {
		cout << "Rok " << rok << "jest przestepny";
	}
	else {
		cout << "Ten rok nie jest przestepny";
	}
	//zadanie 12
	int opcja = 0;
	cout << "Wybierz numer od 1 - 4\n";
	cin >> opcja;
	switch (opcja) {
	case 1:
		cout << "Start";
		break;
	case 2:
		cout << "Ustawienia";
		break;
	case 3:
		cout << "Pomoc";
		break;
	case 4:
		cout << "Koniec";
		break;
	default:
		cout << "Niepoprawna liczba";
		break;
	}
	//zadanie 13
	int ocena = 0;
	cout << "Wpisz ocene 1 - 5\n";
	cin >> ocena;
	switch (ocena) {
	case 1:
		cout << "Niedostateczny";
		break;
	case 2:
		cout << "Dopuszczajacy";
		break;
	case 3:
		cout << "Dostateczny";
		break;
	case 4:
		cout << "Dobry";
		break;
	case 5:
		cout << "Bardzo dobry";
		break;
	default:
		cout << "Niepoprawna ocena";
		break;
	}
	//zadanie 14
	int i = 0;
	int j = 0;
	for (i = 0, j = 0;i < 100;i++) {
		if (i % 3 == 0)
			continue;
		j = j + i;
		cout << j << endl;
	}
	//zadanie 15
	int i = 0;
	for (i = 1;i >= 1;i++) {
		if (i % 7 == 0 && i > 50)
			break;
	}
	cout << i << endl;

	//zadanie 16
	int i = 0;
	int j = 0;
	int iloczyn = 0;
	for (i = 0;i <= 10;i++) {
		cout << "\nmnozenie przez liczbe " << i << endl;
		for (j = 0; j <= 10;j++) {
			iloczyn = j * i;
			cout << i << "*" << j << "=" << iloczyn << endl;
		}
	}
	//zadanie 17
	int z = 0;
	int licznik = 0;
	cout << "Podaj nieujemna liczbe: ";
	cin >> z;
	while (z > 0) {
		z = z / 10;
		licznik++;
	}
	cout << licznik << endl;
	//zadanie 18
	int p = 0;
	int dzielnik = 2;
	cout << "Podaj liczbe calkowita: ";
	cin >> p;
	while (dzielnik <= sqrt(p)) {
		if (p % dzielnik == 0) {
			cout << "Liczba nie jest pierwsza";
			break;
		}
		dzielnik++;
	}
	if (dzielnik > sqrt(p)) {
		cout << "Liczba " << p << " jest pierwsza";
	}
	//zadanie 19
	int opcja = 0;
	while (opcja != 4) {
		cout << "Wybierz numer od 1 - 4\n";
		cin >> opcja;
		switch (opcja) {
		case 1:
			cout << "Start";
			break;
		case 2:
			cout << "Ustawienia";
			break;
		case 3:
			cout << "Pomoc";
			break;
		case 4:
			cout << "Koniec";
			break;
		default:
			cout << "Niepoprawna liczba";
			break;
		}
	}
	float s = 0;
	int i = 0;
	while (s < 10) {
		s = s + 0.1;
		i++;
	}
	cout << "Wartosc sumy: " << s << " Ilosc iteracji: " << i << endl;
	//zadanie 20
	float s = 0;
	int i = 0;
	while (s < 10) {
		s = s + 0.1;
		i++;
	}
	cout << "Wartosc sumy: " << s << " Ilosc iteracji: " << i << endl;
}