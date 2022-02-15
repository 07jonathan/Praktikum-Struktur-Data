#include <iostream>
#include <string>
using namespace std;
struct databarang
{
 string nama;
 int jumlah;
};
struct {
 databarang barang;
 string pengirim, penerima, alamat;
}data[100];
int main()
{
 string i;
 int x=1;
 int y=1;
 do{
 cout<<"Data Ke-"<<y<<endl;
 cout<<"Nama Pengirim :";
 cin>>data[y].pengirim;
 cout<<"Nama Penerima :";
 cin>>data[y].penerima;
 cout<<"Alamat :";
 cin>>data[y].alamat;
 cout<<"Jumlah Barang:";
 cin>>data[y].barang.jumlah;
 cout<<"Nama Barang : ";
 cin>>data[y].barang.nama;
 cout<<"\n\n\n";
 for (x=1;x<=y;x++){
 cout<<"DATA Pemohon "<<y<<endl;
 cout<<"---------------------"<<endl;
 cout<<"Tipe SIM : "<<data[x].pengirim<<endl;
 cout<<"Nama Pemohon : "<<data[x].penerima<<endl;
 cout<<"Alamat : "<<data[x].alamat<<endl;
 cout<<"Jumlah Barang : "<<data[x].barang.jumlah<<endl;
 cout<<"Nama Barang : "<<data[x].barang.nama<<endl;
 cout<<"\n";
 }
 cout<<"Apakah ingin mengulang :";
 cin>>i;
 cout<<"\n\n";
 y++;
}
while (y<=10);
 return 0;
}
