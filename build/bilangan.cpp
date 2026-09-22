#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout<<"masukan bilangan:";
    cin>>bilangan;

    cout<<"sisa bagi 2="<<bilangan % 2 <<endl;

    bool positif =  bilangan>0;
    bool genap = bilangan%2 == 0;
    cout <<"positif" << positif << endl;
    cout << "genap" << genap <<endl;

    return 0;
}