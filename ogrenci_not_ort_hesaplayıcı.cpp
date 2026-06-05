#include <iostream>
#include <string>

std::string harfNotuHesapla(double ortalama) {
    if (ortalama >= 90) return "AA";
    else if (ortalama >= 80) return "BA";
    else if (ortalama >= 70) return "BB";
    else if (ortalama >= 60) return "CB";
    else if (ortalama >= 50) return "CC";
    else return "FF";
}

int main() {
    std::string ogrenciAdi;
    double vizeNotu, finalNotu, ortalama;

    std::cout << "--- OGRANCI NOT HESAPLAMA SISTEMI ---\n";
    
    std::cout << "Ogrencinin Adini Giriniz: ";
    std::getline(std::cin, ogrenciAdi);

    std::cout << "Vize Notunu Giriniz (%%40): ";
    std::cin >> vizeNotu;

    std::cout << "Final Notunu Giriniz (%%60): ";
    std::cin >> finalNotu;

    ortalama = (vizeNotu * 0.4) + (finalNotu * 0.6);

    std::cout << "\n===============================\n";
    std::cout << "Ogrenci: " << ogrenciAdi << "\n";
    std::cout << "Ortalama: " << ortalama << "\n";
    std::cout << "Harf Notu: " << harfNotuHesapla(ortalama) << "\n";
    
    if (ortalama >= 50) {
        std::cout << "Durum: GECTI\n";
    } else {
        std::cout << "Durum: KALDI\n";
    }
    std::cout << "===============================\n";

    return 0;
}
