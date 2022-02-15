#include <iostream>
#include <string>
using namespace std;
struct datasim{
 string nama, alamat, namakamar, sakit;
 int umur, nomor;
};
int main()
{
 string i;
 do {
 datasim data;
 cout<<"Nama Pasien :";
 cin>>data.nama;
 cout<<"Umur Pasien :";
 cin>>data.umur;
 cout<<"Alamat Pasien :";
 cin>>data.alamat;
 cout<<"Nama Kamar : ";
 cin>>data.namakamar;
 cout<<"Nomor Kamar : ";
 cin>>data.nomor;
 cout<<"Penyakit Pasien : ";
 cin>>data.sakit;

 cout<<"\n\n\n";
 cout<<"DATA PASIEN"<<endl;
 cout<<"--------"<<endl;
 cout<<"Nama Pasien     : "<<data.nama<<endl;
 cout<<"Umur Pasien     : "<<data.umur<<endl;
 cout<<"Alamat Pasien   : "<<data.alamat<<endl;
 cout<<"Nama Kamar      : "<<data.namakamar<<endl;
 cout<<"Nomor Kamar     : "<<data.nomor<<endl;
 cout<<"Penyakit Pasien : "<<data.sakit<<endl;
 cout<<"\n\n\n";
 cout<<"Apakah ingin mengulang :";
 cin>>i;
 }
 while (i=="Y");
 return 0;
}
