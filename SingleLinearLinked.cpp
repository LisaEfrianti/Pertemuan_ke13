#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    int no_peserta;
    int NIM;
    char kelas;
    
    Mahasiswa*next;
};

void printList(Mahasiswa*n)
{
      while (n!=NULL)
      {
        cout<<"No Peserta : "<<n->no_peserta<<" "<<endl;
        cout<<"NIM        : "<<n->NIM<<" "<<endl;
        cout<<"Kelas      : "<<n->Kelas<<" "<<endl;
        cout<< " "<<endl;
        
      n=n->next;
     }
}
int main ()
{
    Mahasiswa*head= NULL;
    Mahasiswa*second= NULL;
    Mahasiswa*third= NULL;
    
    head= new Mahasiswa();
    second=new Mahasiswa();
    third=new Mahasiswa();
    
    head->no_peserta=333;
    head->NIM=1829142035;
    head->Kelas='A';
    Head->next=second;
    
    second->no_peserta=444;
    second->NIM=1829142034;
    second->Kelas ='B';
    second->next=third;
    
    third->no_peserta=555;
    third->NIM=1829142033;
    third->Kelas='C';
    third->next=NULL;
    
    printList(head);
    
    
    cin.get();
    return 0;
 }
    
