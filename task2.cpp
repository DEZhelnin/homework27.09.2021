#include<iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int d, m,k;
	cin >> d >> m;
	if (d < 1 || d>31 || m > 13 || m < 1 || (m == 2 && d > 28) || (( m==6 || m == 4 || m == 9 || m == 11) && d >30)) cout << "такого дня не существует";
	else {
		if (m <= 2) k = 372 - 31 * (m - 1) - d - 7;
		if (m > 2 && m < 5) k = 372 - 31 * (m - 1) - d - 4;
		if (m >= 5 && m < 7)k = 372 - 31 * (m - 1) - d - 3;
		if (m >= 7 && m <= 9)k = 372 - 31 * (m - 1) - d - 2;
		if (m > 9 && m <= 11)k = 372 - 31 * (m - 1) - d - 1;
		if (m > 11) k = 372 - 31 * (m - 1) - d;
		cout << k;
	}
}
