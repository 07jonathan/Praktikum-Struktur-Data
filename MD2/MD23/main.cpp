#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#define n 20
using namespace std;
int f, r;
typedef struct
{
 string nama, penyakit;
 int nomor;
 char harga[10];
}pembeli;

void awal()
{
 f=0;
 r=-1;
}

int main()
{
 string kembali;
 pembeli data[n];
 int pilih;
 awal();
 cout<<"QUEUE ANTRIAN PEMBELI";
 do{
 cout<<endl<<"1. INSERT DATA"<<endl;
 cout<<"2. DELETE DATA"<<endl;
 cout<<"3. LIHAT DATA"<<endl;
 cout<<"4. EXIT "<<endl<<endl;
 cout<<"MASUKKAN PILIHAN ANDA : ";
 cin>>pilih;
 switch(pilih)
 {
 case 1 :
 if(r<n-1)
 {
 r++;
 cout<<endl<<"ANTRIAN NO : "<<r+1;
 cout<<endl<<"MASUKKAN NAMA PASIEN : ";
 cin>>data[r].nama;
 cout<<"MASUKKAN NOMOR PASIEN : ";
 cin>>(data[r].nomor);
 cout<<"MASUKKAN PENYAKIT : ";
 cin>>data[r].penyakit;
 system("cls");
 }
 else
 {
 cout<<"MAAF ANTRIAN PENUH"<<endl;
 cin>>kembali;
 system("cls");
 }

 break;
 case 2 :
 if(f<r+1)
 {
 cout<<endl<<"DATA YANG DIINPUTKAN"<<endl<<endl;
 cout<<"ANTRIAN NOMOR : "<<f+1<<endl;
 cout<<"NAMA PASIEN : "<<data[f].nama<<endl;
 cout<<"NOMOR PASIEN : "<<data[f].nomor<<endl;
 cout<<"PENYAKIT : "<<data[f].penyakit<<endl;
f++;
 if(f==r+1 && r==n-1)
 {
 awal();
 }
 cin>>kembali;
 system("cls");

 }
 else
 {
 cout<<"ANTRIAN KOSONG"<<endl;

 cin>>kembali;
 system("cls");
 }
 break;

 case 3 :
 if(f<r+1){
 for(int i=f;i<r+1;i++)
 {
 cout<<endl<<"DATA YANG DIINPUTKAN"<<endl<<endl;
 cout<<"ANTRIAN NOMOR : "<<i+1<<endl;
 cout<<"NAMA PASIEN "<<data[i].nama<<endl;
 cout<<"NOMOR PASIEN : "<<data[i].nomor<<endl;
 cout<<"PENYAKIT :  "<<data[i].penyakit<<endl;
 }
 cin>>kembali;
 system("cls");
 }
 else
 {
 cout<<"ANTRIAN KOSONG"<<endl;
 cin>>kembali;
 system("cls");

 }
 break;

 case 4 :
 cout<<"TERIMA KASIH ";
 break;
 default :
 cout<<endl<<"MASUKKAN ANGKA ANTARA 1-3"<<endl;

 }
 }
 while((pilih>=1)&&(pilih<=3));
 getch();
}
