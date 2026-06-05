#include <iostream>
#include <cstdlib> // rand() ve srand() icin
#include <ctime>   // time() icin

int main() {
    // Rastgele sayı generator'ını her seferinde farklı çalıştırmak için zamanı kullanıyoruz
    srand(time(0)); 
    
    int rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasında sayı üretir
    int tahmin = 0;
    int tahminSayisi = 0;

    std::cout << "--- SAYI TAHMIN OYUNUNA HOS GELDINIZ ---\n";
    std::cout << "1 ile 100 arasinda bir sayi tuttum. Tahmin etmeye calis!\n\n";

    // Kullanıcı doğru tahmin edene kadar dönecek döngü
    while (tahmin != rastgeleSayi) {
        std::cout << "Tahmininiz: ";
        std::cin >> tahmin;
        tahminSayisi++;

        if (tahmin > rastgeleSayi) {
            std::cout << "Daha KUCUK bir sayi girmelisiniz.\n";
        } else if (tahmin < rastgeleSayi) {
            std::cout << "Daha BUYUK bir sayi girmelisiniz.\n";
        } else {
            std::cout << "\nTebrikler! Dogru tahmin.\n";
            std::cout << "Tuttugum sayi: " << rastgeleSayi << "\n";
            std::cout << tahminSayisi << " denemede buldunuz.\n";
        }
    }

    return 0;
}
