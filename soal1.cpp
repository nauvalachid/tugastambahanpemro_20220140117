#include <iostream>
using namespace std;

class Segitiga {
private:
    float alas, tinggi, sisi1, sisi2, sisi3;

    float hitungLuas() {
        return 0.5 * alas * tinggi;
    }

    float hitungKeliling() {
        return sisi1 + sisi2 + sisi3;
    }

public:
    void inputLuas() {
        do {
        cout << "Masukkan alas segitiga (1-50): ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga (1-50): ";
        cin >> tinggi;
        if (alas,tinggi > 50){
            cout << "Input tidak valid.Silakan masukkan angka 1-50."<<endl;
        }
    } while (alas,tinggi > 50);
        cout << "Luas segitiga = " << hitungLuas() << "cm2" << endl;
    }

    void inputKeliling() {
        do {
        cout << "Masukkan sisi pertama segitiga (1-50): ";
        cin >> sisi1;
        cout << "Masukkan sisi kedua segitiga (1-50): ";
        cin >> sisi2;
        cout << "Masukkan sisi ketiga segitiga (1-50): ";
        cin >> sisi3;
        if (sisi1,sisi2,sisi3 > 50){
            cout << "Input tidak valid.Silakan masukkan angka 1-50."<<endl;
        }
    } while (sisi1,sisi2,sisi3 > 50);
        cout << "Keliling segitiga = " << hitungKeliling() << "cm" << endl;
    }
};

int main() {
    Segitiga segitiga;
    int pilihan;

    do {
        cout << "=== Menu ==="<<endl;
        cout << "1. Hitung Luas Segitiga"<<endl;
        cout << "2. Hitung Keliling Segitiga"<<endl;
        cout << "3. Keluar"<<endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                segitiga.inputLuas();
                break;
            case 2:
                segitiga.inputKeliling();
                break;
            case 3:
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    } while (pilihan != 3);
}
