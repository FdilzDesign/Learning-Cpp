#include <iostream>
#include <stdint.h>
using namespace std;


int main() {
 char a; // 1 byte = 8 bit penyimpanannya bisa -128 - 127  unsigned 0 - 255
 short b; // 2 byte = 16 bit penyimpanannya bisa -32.678 - 32.767 unsigned 0 - 65.535 
 int c; // 4 byte = 32 bit penyimpanannya bisa  -2.147.483.648 sampai 2.147.483.647 unsigned 4.294.967.295
 long long e; // 8 byte = 64 bit penyimpanannya bisa -9.223.372.036.854.775.808 - 9.223.372.036.854.775.807 unsigned 0 - 18.446.744.073.709.551.615
 int8_t a8; // sama dengan char yang 1byte = 8 bit
 int16_t a16;
 uint8_t ua8; // sama dengan char yang 1byte unsigned
 uint32_t a32;
 auto f = "hello"; //otomatis menentukan nilai yang dimasukan  diawal
 //f = 3.0; // akan error jika tidak sesuai dengan nilai dimasukan diawal

    
    cout << "" << sizeof(a) <<endl;
    cout << "" << sizeof(b) <<endl;
    cout << "" << sizeof(c) <<endl;
    cout << "" << sizeof(e) <<endl;
    cout << "" << sizeof(a8) <<endl;
    
    
    return 0;



}