#include <iostream>
using namespace std;


void hitungEnergiKinetik(double massa, double beratAndika, double kecepatan) {

    double massaSepedaKg = massa / 1000.0;


    double massaTotal = massaSepedaKg + beratAndika;


    double energiKinetik = 0.5 * massaTotal * (kecepatan * kecepatan);


    cout << "Energi Kinetik Andika saat mengendarai sepeda adalah " << energiKinetik << " Joule" << endl;
}

int main() {

    double massaSepeda = 1500;
    double beratAndika = 47.5;
    double kecepatan = 4;


    hitungEnergiKinetik(massaSepeda, beratAndika, kecepatan);

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double beratApel, beratJeruk, beratSemangka, totalBerat, totalHarga, diskon;
    const double hargaApel = 24000, hargaJeruk = 16250, hargaSemangka = 8000;


    cout << "Masukkan berat apel (kg): ";
    cin >> beratApel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> beratJeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> beratSemangka;


    totalBerat = beratApel + beratJeruk + beratSemangka;
    totalHarga = (beratApel * hargaApel) + (beratJeruk * hargaJeruk) + (beratSemangka * hargaSemangka);


    if (totalBerat > 10) {
        diskon = 0.05;
    }
    else if (totalBerat > 8) {
        diskon = 0.02;
    }
    else {
        diskon = 0;
    }


    double totalBayar = totalHarga - (totalHarga * diskon);


    cout << fixed << setprecision(2);
    cout << "Total yang harus dibayar: Rp " << totalBayar << endl;

    return 0;
}

