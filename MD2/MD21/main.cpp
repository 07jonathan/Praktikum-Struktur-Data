#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#define n 20
using namespace std;
int f, r;
typedef struct
{
 string nama, merk, warna;
 int rom,ram;
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
 cout<<endl<<"MASUKKAN NAMA : ";
 cin>>data[r].nama;
 cout<<"MASUKKAN MERK : ";
 cin>>(data[r].merk);
 cout<<"MASUKKAN RAM : ";
 cin>>data[r].ram;
 cout<<"MASUKKAN ROM : ";
 cin>>data[r].rom;
 cout<<"MASUKKAN WARNA : ";
 cin>>data[r].warna;
 cout<<"MASUKKAN HARGA : ";
 cin>>data[r].harga;
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
 cout<<"NAMA PEMBELI : "<<data[f].nama<<endl;
 cout<<"MERK SMARTPHONE : "<<data[f].merk<<endl;
 cout<<"VARIAN ROM/RAM : "<<data[f].ram<<"/"<<data[f].rom<<endl;
 cout<<"WARNA SMARTPHONE : "<<data[f].warna<<endl;
 cout<<"HARGA SMARTPHONE : "<<data[f].harga<<endl;
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
 cout<<"NAMA PEMBELI "<<data[i].nama<<endl;
 cout<<"MERK SMARTPHONE : "<<data[i].merk<<endl;
 cout<<"VARIAN ROM/RAM :  "<<data[i].ram<<"/"<<data[i].rom<<endl;
 cout<<"WARNA SMARTPHONE : "<<data[i].warna<<endl;
 cout<<"HARGA SMARTPHONE : "<<data[i].harga<<endl;
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
