#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct datakopi{
 char nama[20][50];
 char merk [20][50];
 char harga [20][50];
 char tanggal [20][50];
};

main ()
{
 datakopi data;
 string kembali;
 int jd,kiri,kanan,center,pilih;
 int no=1;
 char cari[20];

 do{
 cout<<"\nMenu"<<endl;
 cout<<"1. Input"<<endl;
 cout<<"2. Urut"<<endl;
 cout<<"3. Cari Nama"<<endl;
 cout<<"4. Exit"<<endl;
 cout<<"Masukkan pilihan:";cin>>pilih;
 switch(pilih){

 case 1:

 cout<<endl;

 cout<<"\n Input Nama Ke"<<(no)<<" : ";
 cin>>data.nama[no];
 cout<<" Input Merek Ke"<<(no)<<" : ";
 cin>>data.merk[no];
 cout<<" Input Harga Ke"<<(no)<<" : ";
 cin>>data.harga[no];
 cout<<" Input Tanggal Ke"<<(no)<<" : ";
 cin>>data.tanggal[no];
 no++;
 system("cls");
 break;

 case 2:
 for(int i=1;i<no;i++){

 int j,bd;
 j=i;

 for(int k=i+1;k<no;k++)
    {

bd=strcmp(data.merk[j],data.merk[k]);
 if(bd==1) j=k;
 }
 if(j!=i){
 char temp[1][30];
 strcpy(temp[0],data.tanggal[j]);
strcpy(data.tanggal[j],data.tanggal[i]);
 strcpy(data.tanggal[i],temp[0]);

 strcpy(temp[0],data.merk[j]);
strcpy(data.merk[j],data.merk[i]);
 strcpy(data.merk[i],temp[0]);


 strcpy(temp[0],data.nama[j]);
strcpy(data.nama[j],data.nama[i]);
 strcpy(data.nama[i],temp[0]);

 strcpy(temp[0],data.harga[j]);
strcpy(data.harga[j],data.harga[i]);
 strcpy(data.harga[i],temp[0]);


 }
 }


 for (int i=1;i<no;i++){
 cout<<"\n Nama Ke"<<(i)<<":"<<data.nama[i]<<endl;
 cout<<" Merek Ke"<<(i)<<":"<<data.merk[i]<<endl;
 cout<<" Harga Ke"<<(i)<<":"<<data.harga[i]<<endl;
 cout<<" Tanggal Ke"<<(i)<<":"<<data.tanggal[i]<<endl;
 }
 cin>>kembali;
 system("cls");
 break;

 case 3:
 cout<<endl;
 cout<<" Input Nama Dicari : ";
 cin>>cari;
 kiri=0;
 kanan=no-1;
 center=(kanan-kiri)/2;

 while ((strcmp(data.nama[center],cari)!=0)&& (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
 {
 if (strcmp (cari,data.nama[center])>0)
 {
 kiri=center+1;
 }
 else if (strcmp (cari,data.nama[center])<0)
 {
 kanan=center-1;
 }
 center=kiri+(kanan-kiri)/2;
 }

 cout<<endl;

 if (strcmp(data.nama[center],cari)==0)
 {
 cout<<" Keterangan : Data Ditemukan"<<endl;
 cout<<"\n Nama Ke"<<(center)<<" :"<<data.nama[center]<<endl;
 cout<<" Merek Ke"<<(center)<<" :"<<data.merk[center]<<endl;
 cout<<" Harga Ke"<<(center)<<" :"<<data.harga[center]<<endl;
 cout<<" Tanggal Ke"<<(center)<<" :"<<data.tanggal[center]<<endl;

 }
 else
 {
 cout<<" Keterangan : Data Tidak Ditemukan";
 }

 cin>>kembali;
 system("cls");

 getch();
 break;
 }
 }
 while (pilih!=4);
}
