#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Penerbit {
public:
	string namaPenerbit;
};

class Pengarang {
public:
	string namaPengarang;
	vector<string> bukuDikarang;
	Penerbit* penerbit;
};

class Buku {
public:
	string judulBuku;
	Pengarang* pengarang;
};



int main()
{
	Penerbit gamaPress;
	gamaPress.namaPenerbit = "Gama Press";

	Penerbit intanPerwira;
	intanPerwira.namaPenerbit = "Intan Perwira";

	Pengarang joko;
	joko.namaPengarang = "Joko";
	joko.penerbit = &gamaPress;

	Pengarang lia;
	lia.namaPengarang = "Lia";
	lia.penerbit = &gamaPress;

	Pengarang giga;
	giga.namaPengarang = "Giga";
	giga.penerbit = &gamaPress;

	Pengarang asroni;
	asroni.namaPengarang = "Asroni\nGiga";
	asroni.penerbit = &intanPerwira;

	Buku fisika;
	fisika.judulBuku = "Fisika";
	fisika.pengarang = &joko;
	joko.bukuDikarang.push_back(fisika.judulBuku);

	Buku algoritma;
	algoritma.judulBuku = "Algoritma";
	algoritma.pengarang = &joko;
	joko.bukuDikarang.push_back(algoritma.judulBuku);

	Buku basisdata;
	basisdata.judulBuku = "Basisdata";
	basisdata.pengarang = &lia;
	lia.bukuDikarang.push_back(basisdata.judulBuku);

	Buku dasarpemograman;
	dasarpemograman.judulBuku = "Dasar Pemograman";
	dasarpemograman.pengarang = &asroni;
	asroni.bukuDikarang.push_back(dasarpemograman.judulBuku);

	Buku matematika;
	matematika.judulBuku = "Matematika";
	matematika.pengarang = &giga;
	giga.bukuDikarang.push_back(matematika.judulBuku);

	Buku multimedia;
	multimedia.judulBuku = "Multimedia 1";
	multimedia.pengarang = &giga;
	giga.bukuDikarang.push_back(multimedia.judulBuku);

	// 1
	cout << "Daftar pengarang pada penerbit Gama Press :" << endl;
	for (Pengarang* pengarang : { &joko, &lia, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Gama Press") {
			cout << pengarang->namaPengarang << endl;
		}
	}
	cout << "\n";
	// 2
	cout << "Daftar pengarang pada penerbit Intan Pariwara :" << endl;
	for (Pengarang* pengarang : { &asroni, &giga }) {
		if (pengarang->penerbit->namaPenerbit == "Intan Pariwara") {
			cout << pengarang->namaPengarang << endl;
		}
	}
	cout << "\n";
	// 3
	cout << "Daftar penerbit yang diikuti Giga :" << endl;
	for (Penerbit* penerbit : { &gamaPress, &intanPerwira }) {
		if (penerbit->namaPenerbit == "Gama Press", "Intan Pariawara") {
			cout << penerbit->namaPenerbit << endl;
		}
	}
	cout << "\n";
	// 4
	cout << "Daftar buku yang dikarang Joko:" << endl;
	for (string buku : joko.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";
	//5
	cout << "Daftar buku yang dikarang Lia:" << endl;
	for (string buku : lia.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";
	//6
	cout << "Daftar buku yang dikarang Asroni:" << endl;
	for (string buku : asroni.bukuDikarang) {
		cout << buku << endl;
	}
	cout << "\n";
	//7
	cout << "Daftar buku yang dikarang Giga:" << endl;
	for (string buku : giga.bukuDikarang) {
		cout << buku << endl;
	}

	return 0;

}

