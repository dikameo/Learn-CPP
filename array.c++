#include<iostream>
using namespace std;
int main (){
    // Membuat array
    // Array string 
    string name [4] = {"budi","handoko","jefri","Paul"}; // Banyak Indeks Data ada 4 
    cout<<name[3]<<endl; // Pemanggilan Indeks diawali dari angka 0 jadi Budi sebagai indeks 0 
    cout<<"====================="<<endl;
    // Array Integer
    int angka [10] = {10,20,30,40,50,60};
    cout<<angka[5]<<endl;
    cout<<"====================="<<endl;

    // Looping Menampilkan sebuah nama dari Array
    string nama[10] = {"paul","jefri","riski","angga","asep","handoko"};
    for (int i = 0; i < 5; i++)
    {
        cout<<nama[i]<<endl;
    }
    cout<<"====================="<<endl;
    // Looping Menampilkan seluruh data dari array menggunakan Sizeof(nama array)/Sizeof(int)
    string campuran[] ={"dika","jefri","richard","alghozali","akira","paul","jefri","riski","angga","asep","handoko"};
    for (int i = 0; i <= sizeof(campuran)/sizeof(int); i++)
    {
        cout<<campuran[i]<<endl;
        break;
    }
	cout<<"====================="<<endl;
    
  
    // Array Multi dimensi
    string Ganda[][4]={
        {"A","B","C","D"},
        {"E","F","G","H"},
        {"I","J","K","L"},
        {"M","N","O","P"}
    };
    // kurung siku pertama [] = baris
    // kurung siku kedua [] = kolom
    // Untuk Multi dimensi menampilkan indeks mulai dari 0
    cout<<Ganda[2][2];
}
