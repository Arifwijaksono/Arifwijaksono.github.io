#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    double ipk;
};
struct Node {
    mahasiswa data;
    Node *next;

};

void addLast(Node **head){
    Node *nodeBaru = new Node;
    cout << "Masukan nama: ";
    fflush(stdin);getline(cin, nodeBaru->data.nama);
    cout << "masukan nim: ";
    cin>>nodeBaru->data.nim;
    cout<<"Masukan ipk: ";
    cin >> nodeBaru->data.ipk;
    nodeBaru->next = NULL;
    if((*head) == NULL){
        *head = nodeBaru;
        return;
    }
    // Traversal ke node terakhir
    Node *temp = *head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp-> next = nodeBaru;
};
int main(){
    Node *HEAD = NULL;
    int pilihan;
    while (pilihan != 9)
    {
        cout <<"Program linked list"<<endl;
        cout<<" 1. Add Last"<< endl;
        cout<<" 2. Display"<< endl;
        cout<<" 9. Add Last"<< endl;
        cout<<"Masukan pilian: ";
        cin>>pilihan;
        switch (pilihan)
        {
        case 1:
            addLast(&HEAD);
            break;
        case 2:
            // display();
            break;
        default:
        cout << "Pilihan tidak ada"<<endl;


        }
    }


    return 0;
}