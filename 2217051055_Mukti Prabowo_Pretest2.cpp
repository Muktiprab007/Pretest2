#include <iostream>
using namespace std;

int main(){
	float Detik, jam, menit;
	
	cout << "Masukan detik = ";
	cin >> Detik;
	
	jam = Detik/3600;
	menit = Detik/60;
	
	cout << " " << jam << " jam "<< " " << menit << " menit";
	
	return 0;
}
