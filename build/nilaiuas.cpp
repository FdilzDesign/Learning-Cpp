#include <iostream>
using namespace std;

int main() {
    double tugas,uts,uas;

    cout << "nilai tugas :";
    cin>>tugas;


    cout<<"Nilai uts :";
    cin>>uts;

    cout<<"nilai uas :";
    cin>>uas;

    double nilaiakhir =
     0.30 * tugas + 0.30 * uts + 0.40 * uas;
     cout << "nilai akhir =" << nilaiakhir <<endl;
     return 0;
}