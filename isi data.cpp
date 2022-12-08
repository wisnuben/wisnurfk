#include <iostream>
#include <fstream>
using namespace std;

struct sepatu{
	string vendor;
	string tipe;
	string warna;
};

int main(){
	
	sepatu toko[2];
	
	ofstream buka;
	buka.open("Sepatu.txt");
	
	for (int i=0; i<2; i++){
		getline (cin, toko[i].vendor);
		getline (cin, toko[i].tipe);
		getline (cin, toko[i].warna);
		buka << toko[i].vendor << endl;
		buka << toko[i].tipe << endl;
		buka << toko[i].warna << endl;
	}
	buka.close();
}
