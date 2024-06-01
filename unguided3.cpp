#include <iostream>
using namespace std;

// Fungsi untuk menghitung berapa banyak angka 4 menggunakan Sequential Search
int hitungAngka4(const int data[], int ukuran)
{
    int jumlah4 = 0;

    for (int i = 0; i < ukuran; ++i)
    {
        if (data[i] == 4)
        {
            jumlah4++;
        }
    }

    return jumlah4;
}

int main()
{
    // Data yang diberikan
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int ukuran = sizeof(data) / sizeof(data[0]);

    // Menghitung jumlah angka 4
    int jumlah4 = hitungAngka4(data, ukuran);

    // Menampilkan hasil
    cout << "Jumlah angka 4 dalam data adalah: " << jumlah4 << endl;

    return 0;
}
