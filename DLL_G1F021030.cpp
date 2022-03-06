//=======================//
//==DOUBLE LINKED LIST==//
//=====================//
#include <iostream>

using namespace std;

// struktur linked list
struct Tanggal_Lahir{
  string Bulanr;
  int Tanggal, Tahun;

  // pointer
  Tanggal_Lahir *prev;
  Tanggal_Lahir *next;
};

Tanggal_Lahir *head, *tail, *cur, *del, *newNode, *afterNode;

// fungsi membuat circular double Linked list
void createTanggal_Lahir( string Bulan , int Tanggal, int Tahun){
  head = new Tanggal_Lahir();
  head->Tanggal = Tanggal_Lahir;
  head->Bulan = Bulan Lahir;
  head->Tahun = Tahun Lahir;
  head->prev = head;
  head->next = head;
  tail = head;
}

// add First
void addFirst( string Bulan, int Tanggal, int Tahun ){
  if( head == NULL ){
    cout << "Buat Linked List dahulu!!" << endl;
  }else{
    newNode = new Tanggal_Lahir();
    newNode->Tanggal = Tanggal Lahir;
    newNode->Bulan = Bulan Lahir;
    newNode->Tahun = Tahun Lahir;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    head = newNode;
  }
}

// add Last
void addLast( string bulan, int Tanggal, int Tahun ){
  if( head == NULL ){
    cout << "Buat Linked List dahulu!!" << endl;
  }else{
    newNode = new Tanggal_Lahir();
    newNode->Tanggal = Tanggal Lahir;
    newNode->Bulan = Bulan Lahir;
    newNode->Lahir = Tahun Lahir;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail->next = newNode;
    tail = newNode;
  }
}


// remove First
void removeFirst(){
  if( head == NULL ){
    cout << "Buat Linked List dahulu!!" << endl;
  }else{
    del = head;
    head = head->next;
    tail->next = head;
    head->prev = tail;
    delete del;
  }
}

// remove Last
void removeLast(){
  if( head == NULL ){
    cout << "Buat Linked List dahulu!!" << endl;
  }else{
    del = tail;
    tail = tail->prev;
    tail->next = head;
    head->prev = tail;
    delete del;
  }
}


// fungsi print
void printSmartPhone()
{
  if( head == NULL ){
    cout << "Buat Linked List dahulu!!" << endl;
  }else{
    cout << "Data Barang : " << endl;
    cur = head;
    while( cur->next != head ){
      // print
      cout << "Tanggal Lahir : " << cur->Tanggal<< endl;
      cout << "Bulan Lahir : " << cur->Bulan<< " barang" << endl;
      cout << "Tahun Lahir : Rp." << cur->Tahun << "\n" << endl;

      // step
      cur = cur->next;
    }
    // print last node
      cout << "Merk Barang : " << cur->merkBarang << endl;
      cout << "Tipe Barang : " << cur->TipeBarang << " barang" << endl;
      cout << "Harga Barang : Rp." << cur->hargaBarang << "\n" << endl;
  }
}

int main(){

  createSmartPhone(26, "Juli", 2003);
  printTanggalLahir();

  addFirst(14, "february", 2004);
  printTanggalLahir();

  addLast(12,"agustus", 2003);
  printTanggalLahir();

  removeFirst();
  printTanggalLahir();
  
  removeLast();
  printTanggalLahir();

} 
