#include <iostream>
using namespace std;

int main(){
	int menu, jumlahTerjual, stok = 30, hargaJual = 12000;
	
	do {
		cout << "==== SISTEM STOK TOKO ====\n";
		cout << "1. Catat Penjualan\n";
		cout << "2. Lihat Laporan Stok\n";
		cout << "0. Keluar\n\n";
		cout << "Pilih Menu: ";
		cin >> menu;
		
			if (menu == 1) {
			do {
				cout << "\nJumlah Terjual: ";
				cin >> jumlahTerjual; 
				
				stok -= jumlahTerjual;
				
				cout << "Sisa Stok: " << stok << endl; 
				if (stok >= 1 && stok <= 9) {
					cout << "PERINGATAN: Stok Menipis!";
				}
				else if (stok == 0) {
					cout << "PERINGATAN: Stok Habis!\n\n";
					break;
				}
				else if (stok < 0 || stok > 30) {
					cout << "PERINGATAN: Stok Tidak Valid!\n";
					stok += jumlahTerjual;
				}
				else {
					cout << "";
				}
			} while (jumlahTerjual != 0);
		}
		else if (menu == 2){
			
		}
	} while (menu != 0);
	
	
	
	return 0;
}
