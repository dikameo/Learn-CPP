#include<iostream>
using namespace std;
int main(){
    cout<<"BERIKUT PROGRAM PERCABANGAN"<<endl;
    int umurA = 10;
    int umurB = 20;
    if(umurA>umurB){
        cout<<"Umur A lebih dari B"<<endl;
    }else{
        cout<<"Umur B lebih dari A"<<endl;
    }
    // Menggunakan Switch
    int pilihan = 1;
    switch (pilihan)
    {
    case 1:
        cout<<"Anda Memilih Switch pilihan ke 1"<<endl;
        break;
    
    default:
        cout<<"Pilihan Tidak tersedia"<<endl;
        break;
    }
    // Ternary
    int waktu = 35;
    string hasil = (waktu>10)?"Waktu anda lebih dari 10 detik":"Waktu anda kurang dari 10 Detik";
    cout<<"hasil dari perhitan anda "<<hasil;
    
}
