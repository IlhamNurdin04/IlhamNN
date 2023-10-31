#include <iostream>

using namespace std;

int main(){
	
	string nama,alamat,status;
	long long int nim,nohp;
	
	cout<<"=============" <<endl;
	cout<<"Isi Data Diri" <<endl;
	cout<<"=============" <<endl;
	
	cout<<""<<endl;
	cout<<"Nama    : ";
	getline(cin,nama);
	cout<<"NIM     : ";
	cin>>nim;
	cout<<"No HP   : ";
	cin>>nohp;
	cout<<"Alamat  : ";
	cin>>alamat;
	cout<<"Status  : ";
	cin>>status;
	
	cout<<"\n" <<endl;
	cout<<"Terima Kasih"        <<endl;
	cout<<"============\n"      <<endl;
	cout<<"Nama    : " <<nama   <<endl;
	cout<<"NIM     : " <<nim    <<endl;
	cout<<"No HP   : " <<nohp   <<endl;
	cout<<"Alamat  : " <<alamat <<endl;
	cout<<"Status  : " <<status <<endl;
	
	
	return 0;
}
