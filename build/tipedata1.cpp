#include <iostream>
using namespace std;

int main() { 
    int value = 10;//nilai bulat
    double ipk = 0.5;//nilai desimal
    bool lulus = true;//ini adalah boolean 
    char predikat = 'A';//hanya menyimpan 1 nilai karakter
    string nama = "Fadil";
    unsigned int n1 = -1;
    nama.append(" Isef");//1.alternatif cara ke 1 nambahin nama 
    nama += " Isef Fadil";//2.alternaatif cara ke 2 nambahin nama 

    cout << "Nama gw: "<< nama <<endl;
    cout << "Nilai GW: "<< value <<endl;
    cout << "Nilai IPK Saya: "<< ipk <<endl;
    cout << " Predikat: "<< predikat <<endl;
    cout << "nilai: "<< n1 <<endl;

    if (lulus) {
        cout << "Saya Lulus" <<endl;
    } else {
        cout << "Saya Ga Lulus" <<endl;
    }

    return 0;
};