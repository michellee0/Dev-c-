#include <iostream>
using namespace std;

int function_mul()
{
    int x, y;
    cout << "Sirasiyla iki sayi giriniz: ";
    cin >> x >> y;
    return x * y;
}

int main()
{
    cout << "\nSayilarin carpimi: \"" << function_mul() << "\"." << endl;
    return 0;
}
