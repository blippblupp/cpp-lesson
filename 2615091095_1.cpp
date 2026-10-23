#include <iostream>
using namespace std;

int main(){
	string nama;
	float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;		
	
	cout << "Nama mahasiswa	: ";
	cin >> nama;
	
	cout << "Nilai Tugas	: ";
	cin >> nilaiTugas;
	
	cout << "Nilai UTS	: ";
	cin >> nilaiUTS;
	
	cout << "Nilai UAS	: ";
	cin >> nilaiUAS;
	
	nilaiAkhir = (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.5);
	
	cout << "\n==== HASIL PENILAIAN ====\n";
	cout << "Nama Mahasiswa	: " << nama << endl;
	cout << "Nilai Akhir	: " << nilaiAkhir << endl;
	if (nilaiAkhir >= 85) {
		cout << "Niali Huruf	: A";
	} 
	else if (nilaiAkhir >= 70) {
		cout << "Niali Huruf	: B";
	} 
	else if (nilaiAkhir >= 55) {
		cout << "Niali Huruf	: C";
	} 
	else {
		cout << "Niali Huruf	: D";
	} 
	
	return 0;
}
