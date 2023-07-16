#include<iostream>
using namespace std;
int main(){

    // Menggunakan while 
    int a = 5;
    while (a>=1) // Kondisi
    {
        cout<<a<<endl;
        --a; // Pengulang
    }

	cout<<"============= Do while perulangan===================="<<endl;
    // Menggunakan do while
    int b = 5;
    do
    {
       cout<<b<<endl;
       b++;
    } while (b<=10);


    cout<<"============ Penjumlahan ====================="<<endl;
    // Menggunakan For LOOP
    // Versi 1
    int c = 10;
    for (int i = 1; i <= c; i++)
    {
        cout<<i<<endl;
    }
    
        
    cout<<"=============== Pengurangan =================="<<endl;
    // Menggunakan For LOOP
    // Versi 2 Mengurangi
    int d = 10;
    for (int j = 1; d >= j; d--)
    {
        cout<<d<<endl;
    }
    
    cout<<"=============== Penambahan double =================="<<endl;
    // Menggunakan For LOOP
    // Versi 2 Mengurangi
    int e = 1;
    for (int f = 10; e <= f; e+=2)
    {
        cout<<e<<endl;
    }
    
        cout<<"=============== Versi lain kelipatan 3=================="<<endl;
    // Menggunakan For LOOP
    // Versi 2 Mengurangi
    int g = 1;
    for (int h = 200; g <= h; g*=3)
    {
        cout<<g<<endl;
    }

    
}
