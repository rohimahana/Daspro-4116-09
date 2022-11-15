#include <iostream>

using namespace std;

int main()
{
/*  int tanggal;
    int bulan;
    cout << "Masukkan Tanggal : ";
    cin >> tanggal;
    cout << "Masukkan Bulan : ";
    cin >> bulan;
    if (tanggal >=1 && tanggal <=31){
        cout << "Tanggal Valid" << endl;
    } else {
        cout << "Tanggal Tidak Valid" << endl;
    }
    if (bulan >=1 && bulan <=12){
        cout << "Bulan Valid" << endl;
    } else {
        cout << "Bulan Tidak Valid" << endl;
    }*/

    int day;
    cin >> day;

    switch (day){
    case 1:
        cout << "Satu";
        break;
    case 2:
        cout << "Dua";
        break;
    default:
        cout << "Undefined";
        break;
    }
    int x;
    //init //cond limit
    for(x = 0; x <= 9001; x++){
        cout << x << " Saya Tidak Terlambat" << endl;
    }
}

