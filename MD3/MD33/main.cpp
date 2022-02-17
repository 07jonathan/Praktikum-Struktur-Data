// program quick sort dan sequential search
#include <iostream>
using namespace std;
struct modul3{
    int id;
    string merk;
    int harga;
    int ukuran;
}data[30];

int pilih,jmlh,cari,ada;
string balik;

void Tukar (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Tukar1 (int*x, int*y)
{
    int temp1;
    temp1 = *x;
    *x = *y;
    *y = temp1;
}
void Tukar2 (string*x, string*y)
{
    string temp2;
    temp2 = *x;
    *x = *y;
    *y = temp2;
}
void Tukar3 (int*x, int*y)
{
    int temp2;
    temp2 = *x;
    *x = *y;
    *y = temp2;
}
void input()
{
    cout<<"masukkan jumlah data = ";
    cin>>jmlh;
    for(int x=0;x<jmlh;x++)
    {
        cout<<"Masukkan id         = ";
        cin>>data[x].id;
        cin.ignore();
        cout<<"Masukkan merk       = ";
        getline(cin,data[x].merk);
        cout<<"Masukkan harga       = ";
        cin>>data[x].harga;
        cin.ignore();
        cout<<"Masukkan ukuran = ";
        cin>>data[x].ukuran;
        cin.ignore();
        cout<<endl;
    }
}
void sort()
{
    struct Tumpukan
    {
    int left;
    int right;
    }tumpukan[jmlh];

    int i, j, L, R, ujung = 1; tumpukan[1].left = 0;
    string x;
    tumpukan[1].right = jmlh-1;

    while (ujung!=0)
    {
        L = tumpukan[ujung].left;
        R = tumpukan[ujung].right;
        ujung--;
            while(R > L)
            {
                i = L;
                j = R;
                x = data[(L+R)/2].merk;
                while(i <= j)
                {
                    while(data[i].merk < x)
                    i++;
                        while(x < data[j].merk)
                        j--;
                            if(i <= j)
                            {
                                Tukar(&data[i].id, &data[j].id);
                                Tukar1(&data[i].harga,&data[j].harga);
                                Tukar3(&data[i].ukuran,&data[j].ukuran);
                                Tukar2(&data[i].merk,&data[j].merk);
                                i++;
                                j--;
                            }
                }
                    if(L < i)
                    {
                        ujung++; tumpukan[ujung].left = i;
                        tumpukan[ujung].right = R;
                    }
                    R = j;
            }
    }
        cout<<"\nHasil pengurutan:\n";
    for (int i=0;i<jmlh;i++)
    {
        cout<<"id         = "<<data[i].id<<endl;
        cout<<"merk       = "<<data[i].merk<<endl;
        cout<<"harga       = "<<data[i].harga<<endl;
        cout<<"ukuran = "<<data[i].ukuran<<endl;
        cout<<"\n";
    }
}
void search()
{
    int i=0;
    cout<<"masukkan id yang dicari : ";
    cin>>cari;
    ada=0;
    while((i<10) && (ada==0))
    {
        if(data[i].id == cari)
        {
            ada=1;
        }
        else
        {
            i=i+1;
        }
    }
    if(ada == 1)
    {
        cout<<"id yang anda cari = "<<cari<<" ada di index ke-"<<i+1<<endl;
    }
    else
    {
        cout<<"id tidak ditemukan"<<endl;
    }
}
main()
{
    do
    {
    cout<<"\tMenu"<<endl;
    cout<<"1. input"<<endl;
    cout<<"2. urutkan"<<endl;
    cout<<"3. search"<<endl;
    cout<<"Masukkan pilihan = ";
    cin>>pilih;
    switch (pilih)
    {
        case 1:
            input();
            break;
        case 2:
            sort();
            break;
        case 3:
            search();
            break;
     }
    cout<<"kembali ke menu?";
    cin>>balik;
    }
    while (balik=="y");
}
