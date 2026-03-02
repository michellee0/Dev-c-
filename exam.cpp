#include <iostream>
using namespace std;

const int exam = 2, student = 4;

int main()
{
    int score[exam][student];
    cout << "Her bir ogrencinin sinavina ait degerlerini giriniz.\n";

    for (int i = 0; i < exam; ++i) // row
    {
        for (int j = 0; j < student; ++j) // column
        {
            cout << "Exam[" << i + 1 << "] Student[" << j + 1 << "]: ";
            cin >> score[i][j];
        }
    }

    cout << "\nHer bir ogrencinin sinavina ait degerler gosteriliyor:\n";

    for (int i = 0; i < exam; ++i) // row
    {
        for (int j = 0; j < student; ++j) // column
        {
            cout << "Exam[" << i + 1 << "], Student[" << j + 1 << "] = "
                 << score[i][j] << endl;
        }
    }

    return 0;
}
