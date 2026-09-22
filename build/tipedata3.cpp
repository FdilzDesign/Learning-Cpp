#include <fstream>
#include <vector>
#include <iostream>
#define PI 3.14159
#define DEBUG
using namespace std;

int main() {
    //ofstream myFile("belajar.txt");
    //myFile << " saya sedang belajar cpp" << endl;
    //myFile.close();

    //cout << "Nilai PI:" << PI << endl;
//
    #ifdef DEBUG
    cout << "DEBUG mode aktif" << endl;
    #endif

    #ifndef RELEASE
    cout << " Release mode tidak aktif" << endl;
    #endif
//
    #define VERSION 2

    #if VERSION == 1
    cout << " Versi 1" <<endl;
    #elif VERSION == 2
    cout << " Versi 2" <<endl;
    #else
    cout << "Versi tidak diketahui" << endl;

    #endif
//

vector<int> v = {1, 2, 3};
v.push_back(5);
cout << v[0] << endl;

    return 0;

}