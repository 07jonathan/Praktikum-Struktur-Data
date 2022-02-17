#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    float nilaiquis;
    float nilaiuts;
    float nilaiuas;
    float nilairata;
    string nama;
    char kelas[15];
    struct node *next;
};

void insert(struct node *&head, struct node*&tail)
{
    struct node *nodebaru;
    nodebaru = new struct node;
    cin.ignore();
    cout<<"\nMasukkan Nama\t\t: ";
    getline(cin,nodebaru->nama);
    cout<<"Masukkan Kelas\t\t: ";
    cin>>nodebaru->kelas;
    cout<<"Masukkan Nilai Quis\t: ";
    cin>>nodebaru->nilaiquis;
    cout<<"Masukkan Nilai UTS\t: ";
    cin>>nodebaru->nilaiuts;
    cout<<"Masukkan Nilai UAS\t: ";
    cin>>nodebaru->nilaiuas;
    nodebaru->nilairata=(nodebaru->nilaiquis+nodebaru->nilaiuts+nodebaru->nilaiuas)/3;
    cout<<"Nilai Rata-Rata\t: "<<nodebaru->nilairata;
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
            cout<<"Kelas\t\t: "<<temp->kelas<<endl;
            cout<<"Quiz\t\t: "<<temp->nilaiquis<<endl;
            cout<<"UTS\t\t: "<<temp->nilaiuts<<endl;
            cout<<"UAS\t\t: "<<temp->nilaiuas<<endl;
            cout<<"Rata-Rata\t: "<<temp->nilairata<<endl;
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
