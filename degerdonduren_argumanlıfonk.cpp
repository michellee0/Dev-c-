#include <iostream>
using namespace std;
float function_mean(int, int);

int main() {
    int x, y;
    cout << "Sirasiyla iki sayi giriniz: ";
    cin >> x >> y;
    cout << "\n \"" << x << " ve " << y << "\" sayilarinin ortalamasi = "
<< function_mean(x, y) << endl;
    return 0; }

float function_mean(int a, int b)
{
    return (a + b) / 2.0f; // 2.0f ile float bölme yap
}
