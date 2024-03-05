#include <iostream>
using namespace std;

int main() {
	int bilangan1, bilangan2;
	string status;
	srand(time(0));

	bilangan1 = rand() % 10;
	bilangan2 = rand() % 10;


	if (bilangan1 == bilangan2)
	{
		status = "bilangan1 = bilangan2";
	}
	else if (bilangan1 > bilangan2)
	{
		status = "bilangan1 lebih besar dari bilangan2";
	}
	else
	{
		status = "bilangan1 lebih kecil dari bilangan2";
	}
	cout << "bilangan pertama : " << bilangan1 << endl;
	cout << "bilangan kedua : " << bilangan2 << endl;
	cout << "status bilangan : " << status;
}