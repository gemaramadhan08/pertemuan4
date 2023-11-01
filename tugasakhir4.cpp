#include<iostream>
using namespace std;

int main(){
    int beli, kode;
    string bonus;

    cout << "Masukkan pembelian : "; cin >> beli;

    if(beli >= 100000 && beli <= 200000){
        kode = 1;
    }else if(beli >= 200000 && beli <= 300000){
        kode = 2;
    }else if(beli >= 300000 && beli <= 400000){
        kode = 3;
    }else if(beli >= 400000 && beli <= 500000){
        kode = 4;
    }else if(beli > 500000){
        kode = 5;
    }

    switch(int(kode)){
        case 1:
            bonus = "Diskon 5%";
            break;
        case 2:
            bonus = "Tiket ke Yogya";
            break;
        case 3:
            bonus = "Tiket ke bali";
            break;
        case 4:
            bonus = "Jam tangan rolex";
            break;
        case 5:
            bonus = "Tiket ke swiss";
            break;
        default:
            bonus = "Tidak mendapatkan bonus";
            break;
        
    }

    cout << "Anda mendapatkan bonus " << bonus << endl;
}