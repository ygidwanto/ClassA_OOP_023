#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNim : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();

};

void Matakuliah::InputMK() {
	cout << "\nMasukkan Kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Masukkan Sks Mata Kuliah : ";
	cin >> sks;
}