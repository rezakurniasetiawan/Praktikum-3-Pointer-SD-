#include <iostream> 
#include <cctype> 
#include <cstring>

using namespace std;

int main(void)
{
	char teks[20], teks_baru[20];
	cout << "Program Merubah Karakter Huruf Kecil ke Huruf Besar atau Sebaliknya" << endl;
		cout << "Teknik Informatika Unesa" << endl;
		cout << "=================================================" << endl;
		cout << "Contoh :";
	cout << "REZA - reza | reza - REZA" << endl;
	cout << "Tuliskan teks : "; cin >> teks;;

	for (int i = 0; i < strlen(teks); i++) {
		if (teks[i] >= 'a' && teks[i] <= 'z') {
			teks_baru[i] = toupper(teks[i]);
		}
		else {
			teks_baru[i] = tolower(teks[i]);
		}
	}

	cout << "Perubahan : " << teks_baru << endl;

	return 0;
}