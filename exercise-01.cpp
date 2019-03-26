/*
Nama Program    : exercise-01
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 26 Maret 2019
Deskripsi       : strukdat-05
*/

#include<iostream>

using namespace std;

struct Pembalap {
   int nomor;
   char nama[40];
   int waktu;
   Pembalap* next;
   Pembalap* prev;
};

void createNode(Pembalap* &p,  int nomor, char nama)
{
    p=new Pembalap;

    cout<<"Nomor\t\t\t: "; cin>>p->nomor;
    cout<<"Nama\t\t\t: "; cin.ignore(); cin.getline(p->nama, 40);
    cout<<"Waktu\t\t\t: "; cin>>p->gaji;
    p->next=NULL;
    p->prev=NULL;
}
void insertFirst(Pembalap* &head, Pembalap* node)
{
    if (head==NULL) // kasus kosong
    {
        head=node;
    }
    else            // kasus ada isi
    {
        head->next=head;
        head->prev=node;
        head=node;
    }
}

void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node)
{
    // insert before a node

}

void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deletedNode)
{
    // delete a node that have the key

}

void search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate)
{

}

void traversal(Pembalap* head)
{
    pointer pBantu;
    pBantu=First;

    if(First==NULL)
    {
        cout<<"List kosong" <<endl;
    }
    else
    {
        int i=1;

        pBantu=First;
        cout<<"No\t Nama\t\t\t Bidang\t\t Gaji" <<endl;
        cout<<"=======================================================" <<endl;
        do
        {
            cout<<i <<"\t"<<pBantu->nama <<"\t\t" <<pBantu->bidang <<"\t\t" <<pBantu->gaji <<endl;
            pBantu=pBantu->next;
            i++;
        }
        while(pBantu!=NULL);
    }
}

void sortingByNomor(Pembalap* &head)
{
    // sorting ascending
}

void update(Pembalap* firstNode, int nomorKey)
{
    // update Pembalap from user input

}


int main()
{
    Pembalap* head=NULL;
    Pembalap* pBaru=NULL;
    Pembalap* pToUpdate=NULL;
    char nama='a';

    for (int i=0; i<4; i++)
    {
        createNode(pBaru, i+1, nama++);
        insertFirst(head, pBaru);
    }

    cout<<endl <<">>> List" <<endl;
    traversal(head);

    int keyNomor=2;
    cout<<endl <<">>> Insert Before nomor" <<keyNomor <<endl;
    createNode(pBaru, 99, 'z');
    insertBefore(head, keyNomor, pBaru);
    traversal(head);

    cout<<endl <<">>> SortingByNomor" <<endl;
    sortingByNomor(head);
    traversal(head);

    keyNomor=3;
    cout<<endl <<">>> Delete nomor " <<keyNomor <<endl;
    Pembalap* pHapus = NULL;
    deleteByKey(head, keyNomor, pHapus);
    traversal(head);

    keyNomor = 4;
    cout<<endl <<">>> Update nomor " <<keyNomor <<endl;
    update(head, keyNomor);

    cout<<endl << ">>> Updated list" <<endl;
    traversal(head);
}
