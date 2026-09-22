#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;
    

    double hasil1 = a / b;
    double hasil2 = static_cast<double>(a) / b;
    cout <<"hasil pembagian a / b(tanpa castinng): " << hasil1 <<endl;
    cout <<"hasil pembagian a / b(dengan casting): " << hasil2 <<endl;

    return 0;   
 //static_cast = bisa dipakai tipe data apa aja sesuai kebutuhan program,contoh(int,char,float,double)  
 //static_cast<double> = menghindari pembagian bulat int division,misal 5/2 hasilnya 2,bukan 2.5 dengan menggunakan ini
 //hasilnya akan 2.5
 //Double = tipe data untuk menyimpan angka desimal atau pecahan dengan tingkat presisi ganda
 //ukuran memori butuh 8 byte(64-byte)
 //double mampu menyimpan hingga 15 digit desimal,jauh lebih luas dibandingkan float yg hanya 4 byte dan 7 digit
 //kompilir cpp otomatis membaca angka desimal lgsg sebagai double jika tidak diberi huruf f di belakangnya


}
