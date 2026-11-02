#include <iostream>
using namespace std;

int main()
{
	string a, b;
	int c, e;
	float d;
	
	cout<<"Masukan NIM: ";
	getline(cin, a);
	
	cout<<"Masukan Nama: ";
	getline(cin, b);
	
	cout<<"Masukan Usia: ";
	cin>>c;
	
	cout<<"Masukan Berat Badan: ";
	cin>>d;
	
	cout<<"Masukan Jenis Kelamin (1 = pria, 0 = wanita): ";
	cin>>e;
	
	cout<<"\n";
	
	cout<<"NIM: "<<a<<endl;
	cout<<"Nama: "<<b<<endl;
	cout<<"Usia: "<<c<<endl;
	cout<<"Berat Badan: "<<d<<endl;
	if (e == 1){
		cout<<"Jenis Kelamin: Pria";
	}
	else if (e == 0){
		cout<<"Jenis Kelamin: Wanita";
	}
	else {
		cout<<"Jenis kelamin tidak valid (Note: Input angka yang bener oii)";
	}

    return 0;
}
