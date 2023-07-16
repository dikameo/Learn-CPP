#include<iostream>
using namespace std;

// struct digunakan untuk menduplikasi variabel yang memiliki kesamaan contoh seperti dibawah ini
struct Biodata
{
    string nama; // variabel nama
    string alamat; // variabel alamat
    string sekolah;  // variabel sekolah
    int umur; // variabel umur
};

// Metode penulisan Struct yang lain
struct Buku
{
    string nama;
    int harga;
}BukuIpa;



int main(){

    Biodata budi;
    budi.nama = "Budi Wicaksono";
    budi.alamat = "Palembang";
    budi.sekolah = "SMK AL GHOZALI";
    budi.umur = 17;

    Biodata siska;
    siska.nama = "Siska Raka Permana";
    siska.alamat = "Pekanbaru";
    siska.sekolah = "SMAN 1 Pekan baru";
    siska.umur = 18;

    cout<<"Nama saya "<<budi.nama<<". Saya tinggal di"<<budi.alamat<<". Saya bersekolah di "<<budi.sekolah<<". Saya Berumur "<<budi.umur<<endl;
    cout<<"======================================================================"<<endl;
    cout<<"Nama saya "<<siska.nama<<". Saya tinggal di"<<siska.alamat<<". Saya bersekolah di "<<siska.sekolah<<". Saya Berumur "<<siska.umur<<endl;

    // METODE STRUCT YANG LAIN
    BukuIpa.nama ="Ilmpu Pengetahuan Alam Kelas 10";
    BukuIpa.harga = 20000;
    cout<<"======================================================================"<<endl;
    cout<<"Saya membeli buku "<<BukuIpa.nama<<"Dengan Harga "<<BukuIpa.harga;

}