#include<iostream>
using namespace std;

class hewan{ // nama kelas
    public: //akses
    string nama; // nama atribut
    string jenis; // nama atribut
    string habitat; // nama atribut
};

class ucapan{
    public:
    void sayhello(){ // class dengan function
        cout<<"halo semua";
    };
    void terimakasih();// sebelum ditaruh diluar function wajib dituliskan terlebih dahulu didalam class
};

// Construct
class kendaraan {
    public:
    string nama;
    string lokasi;
    kendaraan (string x, string y){
        nama = x;
        lokasi = y;
    };
};

class Employee {
  private: // secara default class memliki akses private
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) { // untuk memasang bisa menambahkan set
      salary = s;
    }
    // Getter
    int getSalary() { // untuk memanggil bisa menambahkan get
      return salary;
    }
};


// method/function yang ditaruh diluar
void ucapan::terimakasih(){
    cout<< "terima kasih semua";
}

int main(){
    hewan mamalia; // membuat kelas 
    mamalia.nama ="sapi"; // memanggil atribut
    mamalia.jenis = "mamalia"; // memanggil atribut
    mamalia.habitat = "darat"; // memanggil atribut
    
    cout<<"Ini adalah hewan "<<mamalia.nama<<" tergolong hewan "<<mamalia.jenis<<" berhabitat di "<<mamalia.habitat<<endl;

    ucapan salam;
    salam.sayhello(); // memanggil atribut function
    salam.terimakasih();// Memanggil atribut yang ada diluar

    kendaraan darat("motor","darat"); // fungsi construct untuk mempemudah memanggil atribut yang ada dakan paramter
    cout<<"Ini adalah kendaraan "<<darat.nama<<" yang bergerak di "<<darat.lokasi<<endl;


    // Encapsulation
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();

    return 0;
}
