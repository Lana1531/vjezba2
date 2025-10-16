#include <iostream>
using namespace std;
int* fibonacci(int n)
{
	int* novi = new int[n];
	novi[0] = 1;
	novi[1] = 1;
	for (int i = 2; i < n; i++)
		novi[i] = novi[i - 1] + novi[i - 2];

	return novi;
}

int main()
{
	int n;
	cout << "Unesite broj elemenata: ";
	cin >> n;

	if (n < 2) {
		cout << "Minimalan broj elemenata je 2." << endl;
		return 1;
	}
	int* rezultat = fibonacci(n);

	cout << "Fibonacci niz: ";
	for (int i = 0; i < n; i++) {
		cout << rezultat[i] << " ";
	}
	cout << endl;
	delete[] rezultat;
	return 0;
}

