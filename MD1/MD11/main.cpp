#include <iostream>
#include <string>
using namespace std;
struct datasim{
 string tipe, nama, tempat, status, daerah;
 int tanggallahir, bulanlahir, tahunlahir;
};
int main()
{
 string i;
 do {
 datasim data;
 cout<<"Masukkan Tipe SIM(A/B/C) :";
 cin>>data.tipe;
 cout<<"Masukkan Nama             :";
 cin>>data.nama;
 cout<<"Masukkan Tempat Kelahiran :";
 cin>>data.tempat;
 cout<<"Masukkan Tanggal Lahir (04 10 2001):";
 cin>>data.tanggallahir;
 cin>>data.bulanlahir;
 cin>>data.tahunlahir;
 cout<<"Masukkan Status Pemohon (Baru/Lama): ";
 cin>>data.status;
 cout<<"Masukkan Daerah Pembuatan : ";
 cin>>data.daerah;
 cout<<"\n\n\n";
 cout<<"DATA Pemohon"<<endl;
 cout<<"--------"<<endl;
 cout<<"Tipe SIM : "<<data.tipe<<endl;
 cout<<"Nama Pemohon : "<<data.nama<<endl;
 cout<<"Tempat & Tanggal Lahir : "<<data.tempat<<","<<data.tanggallahir<<" "<<data.bulanlahir<<" "<<data.tahunlahir<<endl;
 cout<<"Status Pemohon SIM : "<<data.status<<endl;
 cout<<"Daerah pembuatan SIM : "<<data.daerah<<endl;
 cout<<"\n\n\n";
 cout<<"Apakah ingin mengulang :";
 cin>>i;
 }
 while (i=="Y");
 return 0;
}
