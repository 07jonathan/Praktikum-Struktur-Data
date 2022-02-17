#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct datakaryawan{
 char nama[20][50];
 char gaji [20][50];
 char jabatan [20][50];
 char tanggal [20][50];
};

main ()
{
 datakaryawan data;
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
 cout<<" Input Gaji Ke"<<(no)<<" : ";
 cin>>data.gaji[no];
 cout<<" Input jabatan Ke"<<(no)<<" : ";
 cin>>data.jabatan[no];
 cout<<" Input Tanggal Ke"<<(no)<<" : ";
 cin>>data.tanggal[no];
 no++;
 system("cls");
 break;

 case 2:
 char temp[0];
 for (int j=1; j<no-1;j++)
 {
 for (int i=j+1; i<no; i++)
 {
 if (strcmp(data.gaji[j], data.gaji[i])
 > 0)
 {
     strcpy(temp, data.nama[j]);
 strcpy(data.nama[j], data.nama[i]);
 strcpy(data.nama[i], temp);

 strcpy(temp, data.gaji[j]);
 strcpy(data.gaji[j], data.gaji[i]);
 strcpy(data.gaji[i], temp);


 strcpy(temp, data.jabatan[j]);
 strcpy(data.jabatan[j], data.jabatan[i]);
 strcpy(data.jabatan[i], temp);

 strcpy(temp, data.tanggal[j]);
 strcpy(data.tanggal[j],data.tanggal[i]);
 strcpy(data.tanggal[i], temp);
 }
 }
 }

 cout<<endl;
 cout<<"Data Setelah Diurutkan : "<<endl;
 for (int i=1; i<no;i++){
 cout<<"\n Nama Ke"<<(i)<<" :"<<data.nama[i]<<endl;
 cout<<" Gaji Ke"<<(i)<<" :"<<data.gaji[i]<<endl;
 cout<<" Jabatan Ke"<<(i)<<" :"<<data.jabatan[i]<<endl;
 cout<<" Tanggal Ke"<<(i)<<" :"<<data.tanggal[i]<<endl;
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
 cout<<" Gaji Ke"<<(center)<<" :"<<data.gaji[center]<<endl;
 cout<<" jabatan Ke"<<(center)<<" :"<<data.jabatan[center]<<endl;
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
