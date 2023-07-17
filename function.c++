#include<iostream>
using namespace std;

// Basic Function
void sayhello(){ // Deklarasi
    cout<<"Halo semua"<<endl; // Definisi
}

// Function dengan menggunakan parameter ganda juga bisa
void nama(string nama, int umur){
    cout<<"perkenalkan nama saya "<<nama<<endl;
    cout<<"umur saya "<<umur<<" tahun"<<endl;

}
// Function dengan mengembalikan nilai bisa digunakan untuk operator matematika 
// untuk void diganti dengan int
int penjumlahan(int a, int b){
    return a + b;
}

// Function yang digunakan untuk menampilkan array
// void dataarray(string index[]){
//     int size = sizeof(index)/sizeof(index[0]);
//     for ( int i = 0; i < size; i++)
//     {
//         cout<<"berikut datanya adalah "<<index[i];
//     }
    

// }
void dataarray(string index[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Berikut datanya adalah " << index[i] << endl;
    }
}


int main(){
    sayhello(); // Cara memanggil function
    nama("wahyu andika",18);// Cara memanggil function dengan parameter
    cout<<"hasil penjumlahan dari 2 + 4 adalah "<<penjumlahan(2,4)<<endl;

    // data array
    // string namatemen[4] = {"dika","jefri","asep"};
    // // int size = sizeof(namatemen)/sizeof(namatemen[0]);
    // dataarray(namatemen);
    string namatemen[3] = {"dika", "jefri", "asep"};
    int size = sizeof(namatemen) / sizeof(namatemen[0]);
    dataarray(namatemen, size);
    return 0;
}
