#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    float harga;
    float umur;
    float jumlah;
    string jenis;
    struct node *next;
};

void insert(struct node *&head, struct node*&tail)
{
    struct node *nodebaru;
    nodebaru = new struct node;
    cin.ignore();
    cout<<"\nMasukkan Jenis Hewan\t: ";
    getline(cin,nodebaru->jenis);
    cout<<"Masukkan Harga Hewan\t: ";
    cin>>nodebaru->harga;
    cout<<"Masukkan Umur Hewan\t: ";
    cin>>nodebaru->umur;
    cout<<"Masukkan Jumlah Hewan\t: ";
    cin>>nodebaru->jumlah;
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
            cout<<"\nJenis\t\t: "<<temp->jenis<<endl;
            cout<<"Harga Hewan\t\t: "<<temp->harga<<endl;
            cout<<"Umur Hewan\t\t: "<<temp->umur<<endl;
            cout<<"Jumlah Hewan\t\t: "<<temp->jumlah<<endl;
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
