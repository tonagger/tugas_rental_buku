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
};




int main(){
   return 0;
}
