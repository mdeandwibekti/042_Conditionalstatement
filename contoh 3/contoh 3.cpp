#include <iostream>
using namespace std;

int main() {
	int bilangan;
	srand(time(0));

	bilangan = rand() % 10;
	cout << "nilai awalnya : " << bilangan << endl;

	if (bilangan >= 5)
	{
		bilangan = 2 * bilangan;
	}
	else
	{
		bilangan = 4 * bilangan;
	}
	cout << "nilai sekarang : " << bilangan;
}