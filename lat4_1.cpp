#include<iostream>
using namespace std;

int main(){

    int kode;

    cout << "Masukkan kode hari[1-7] : "; cin >> kode;

    switch(kode){
        case 1:
            cout << "Hari Senin" << endl;
            break;

        case 2:
            cout << "Hari Selasa" << endl;
            break;

        case 3:
            cout << "Hari Rabu" << endl;
            break;

        case 4:
            cout << "Hari Kamis" << endl;
            break;

        case 5:
            cout << "Hari Jumat" << endl;
            break;

        case 6:
            cout << "Hari Sabtu" << endl;
            break;

        case 7:
            cout << "Hari Minggu" << endl;
            break;

        default:
            cout << "Kode Tidak ada" << endl;
    }
    return 0;
}