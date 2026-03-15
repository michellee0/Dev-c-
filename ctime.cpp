#include <iostream>
#include <ctime>
#include <thread>
using namespace std;

int main() {
    while (true) {
        time_t now = time(NULL);        // Þu anki zaman
        tm* z = localtime(&now);        // Yerel zamana çevir
        
        cout << "Saat: " 
             << z->tm_hour << ":"
             << z->tm_min  << ":"
             << z->tm_sec  << "\r";     // Ayný satýrý güncellemek için \r kullanýlýr
             
        cout.flush();                   // Anýnda yazdýr
        
        this_thread::sleep_for(std::chrono::seconds(1));   // 1 saniye bekle
    }
    
    return 0; 
}
