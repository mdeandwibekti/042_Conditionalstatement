#include "iostream"
using namespace std;

int main() {
	int nilmtk, nilbahasa, nilfisika;
	string status;
	float rerata;

	cout << "nilai matematika : " << endl;
	cin >> nilmtk;
	cout << "nilai bahasa : " << endl;
	cin >> nilbahasa;
	cout << "nilai fisika : " << endl;
	cin >> nilfisika;

	rerata = (nilbahasa + nilmtk + nilfisika) / 3;

	if (nilmtk > 70 || rerata > 60) {
		status = "lulus";
		if (nilfisika >= 90) {
			status = "lulusan terbaik";
		}
	}
	else {
		status = "tidak lulus";
	}
	cout << "nilai matematika : " << nilmtk << endl;
	cout << "nilai bahasa : " << nilbahasa << endl;
	cout << "nilai fisika  : " << nilfisika << endl;
	cout << "status kelulusan : " << status;
}



