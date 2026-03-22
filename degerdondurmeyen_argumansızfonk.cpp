#include <iostream>
using namespace std;

void my_function() {
string isim;
    cout << "Merhaba, isminiz nedir?" << endl;
    cin >> isim;
    cout << "\nHosgeldin \"" << isim << "\", bugun harikasin!\n" << endl;
}

int main()
{
    my_function();
    return 0;
}
