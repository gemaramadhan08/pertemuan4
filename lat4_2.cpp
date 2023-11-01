#include<iostream>
using namespace std;

int main(){

    char kode;

    cout << "Menghitung luas dan keliling segitiga, persegi panjang, lingkaran\n" << endl;
    cout << "Masukkan kode[s,p,l] : "; cin >> kode;

    switch(kode){
        case 's':
            int a, t, s, luas, keliling;

            cout << "\nIni adalah program penghitungan luas dan keliling segitiga" << endl;
            cout << "Masukkan alas: "; cin >> a;
            cout << "Masukkan tinggi: "; cin >>t;
            cout << "Masukkan sisi : "; cin >> s;

            luas = 0.5 * a * t;
            keliling = s * s * s;

            cout << "\nMaka luas segitiga adalah : " << luas << endl;
            cout << "Maka keliling segitiga adalah : " << keliling << endl;
            break;

        case 'p':
            int p, l;

            cout << "\nIni adalah program penghitungan luas dan keliling persegi panjang" << endl;
            cout << "Masukkan panjang : "; cin >> p;
            cout << "Masukkan lebar : "; cin >> l;

            luas = p * l;
            keliling = 2 * (p + l);

            cout << "\nMaka luas persegi panjang adalah : " << luas << endl;
            cout << "Maka keliling persegi panjang adalah : " << keliling << endl;
            break;

        case 'l':
            int r;

            cout << "\nIni adalah program penghitungan luas dan keliling lingkaran" << endl;
            cout << "Masukkan jari-jari : "; cin >> r;

            luas = 3.14 * r * r;
            keliling = 2 * 3.14 * r;
            
            cout << "\nMaka luas lingkaran adalah : " << luas << endl;
            cout << "Maka keliling lingkaran adalah : " << keliling << endl;
            break;

        default:
            cout << "Kode tidak tersedia" << endl;
            break;
    }


    return 0;
}