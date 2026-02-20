#include <iostream>
using namespace std;

int investigate_liner(int *investigate_array, int array_size, int key)
{
    int i;
    for (i = 0; i < array_size; i++)
    {
        if (key == investigate_array[i])
            return i;
    }
    return -1;
}

int main()
{
    int array[10] = { 0,25,32,65,40,84,56,14,74,93 };
    int investigate;
    int key;

    cout << "aranacak elemani giriniz\n";
    cin >> key;

    investigate = investigate_liner(array, 10, key);

    if (investigate != -1)
        cout << "aranan eleman listenin " << investigate << ". indisindedir";
    else
        cout << "aranan eleman listede yok";

    return 0;
}
