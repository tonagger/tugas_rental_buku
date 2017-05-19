#include<iostream>
#include<string.h>

using namespace std;

class buku{
	protected:
		float harga_buku, harga_pinjam;
		string isbn, tgl_terbit, nama, pengarang, genre;		
	public:
		buku(float n_harga_buku, float n_harga_pinjam, string n_isbn, string n_tgl_terbit, string n_nama, string n_pengarang, string n_genre){
			harga_buku = n_harga_buku;
			harga_pinjam = n_harga_pinjam;
			isbn = n_isbn;
			tgl_terbit = n_tgl_terbit;
			nama = n_nama;
			pengarang = n_pengarang;;
			genre = n_genre;			
		}
		
	float biaya_sewa(float harga_buku, int jml_hari){
		int nilai_sewa;
		if (harga_buku >= 10000 && harga_buku <= 100000){
			nilai_sewa = 1500;
		} else if (harga_buku >= 100000 && harga_buku <= 500000){
			nilai_sewa = 5000;
		} else if (harga_buku >= 500000){
			nilai_sewa = 10000;
		}
		
	float biaya_denda(float harga_buku, int jml_hari){
		int nilai_denda;
		if (harga_buku >= 10000 && harga_buku <= 100000){
			nilai_denda = 500;
		} else if (harga_buku >= 100000 && harga_buku <= 500000){
			nilai_denda = 1000;
		} else if (harga_buku >= 500000){
			nilai_denda = 2000;
		}
		return nilai_denda * jml_hari;
	}
		
	}
};





int main(){
   return 0;
}
