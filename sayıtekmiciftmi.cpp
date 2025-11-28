#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Bir sayi gir: ";
    cin >> s;
    if(s % 2 == 0)
        cout << "Sayi cift";
    else
        cout << "Sayi tek";
    return 0;
}
