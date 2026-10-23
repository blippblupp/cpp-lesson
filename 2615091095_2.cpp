#include <iostream>
using namespace std;

int main(){
	int barisPesanan, jumlah, kodeProduk, totalHarga, total = 0, jumlahBarang = 0;		
	
	cout << "Jumlah Baris Pesanan: ";
	cin >> barisPesanan;
	
	for (int i = 0; i < barisPesanan; i++) {
		cout << "\nPesanan " << i + 1 << endl;
		cout << "Kode Produk	: ";
		cin >> kodeProduk;
		cout << "Jumlah 		: ";
		cin >> jumlah;
		if (kodeProduk == 1) {
			totalHarga = jumlah * 15000;
		}
		else if (kodeProduk == 2) {
			totalHarga = jumlah * 12000;
		}
		else if (kodeProduk == 3) {
			totalHarga = jumlah * 5000;
		}
		else {
			cout << "Kode Produk tidak valid\n";
			jumlahBarang -= jumlah;
			totalHarga = jumlah * 0;
		}
		
		total += totalHarga;
		jumlahBarang += jumlah;

	}
	cout<<"\n==== STRUK BELANJA ====";	
	cout<<"\nJumalah Barang	: " << jumlahBarang;
	cout<<"\nTotal Bayar	: Rp"<< total;
	
	return 0;
}
