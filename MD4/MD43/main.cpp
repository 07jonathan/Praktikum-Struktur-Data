#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    float nik;
    string alamat;
    float no;
    string nama;
    struct node *next;
};

void insert(struct node *&head, struct node*&tail)
{
    struct node *nodebaru;
    nodebaru = new struct node;
    cin.ignore();
    cout<<"\nMasukkan Nama Peminjam\t: ";
    getline(cin,nodebaru->nama);
    cout<<"Masukkan NIK\t: ";
    cin>>nodebaru->nik;
    cout<<"Masukkan Alamat\t: ";
    cin>>nodebaru->alamat;
    cout<<"Masukkan No Telp\t: ";
    cin>>nodebaru->no;
    nodebaru->next= NULL;
    if (tail != NULL)
        {
            tail->next = nodebaru;
            tail = nodebaru;
            tail->next=NULL;
        }
    else
        {
            tail = head = nodebaru;
        }
    cout<<endl;
}

void tampilkan(struct node *head)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
        {
            cout<<"\nNama\t\t: "<<temp->nama<<endl;
            cout<<"NIK\t\t: "<<temp->nik<<endl;
            cout<<"Alamat\t\t: "<<temp->alamat<<endl;
            cout<<"No Telp\t\t: "<<temp->no<<endl;
            temp = temp->next;
        }
}

void menu(){
    cout<<"1. Masukkan data link"<<endl;
    cout<<"2. Tampilkan Data"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";
}

int main()
{
    int m;
    int j=5;
    string x;
    struct node *head, *temp, *nodebaru, *tail;
    tail = nodebaru = temp = NULL;
    do{
            menu();
            cin>>m;
            switch (m){
            case 1 :
                for(int i=1;i<=j;i++){
                cout<<"\nAnda Menginputkan Data Ke-"<<i<<endl;
                insert(head, tail);
                }
            system("cls");
            break;
            case 2 :
                tampilkan(head);
            break;
            }
        }
    while (m!=0);system("pause");
}
