#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat
int hitungVokal(const string &kalimat)
{
    int jumlahVokal = 0;
    string vokal = "aeiouAEIOU";

    for (char c : kalimat)
    {
        if (vokal.find(c) != string::npos)
        {
            jumlahVokal++;
        }
    }

    return jumlahVokal;
}

int main()
{
    string kalimatInput;

    // Mengambil input dari pengguna
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimatInput);

    // Menghitung jumlah huruf vokal
    int jumlahVokal = hitungVokal(kalimatInput);

    // Menampilkan hasil
    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;

    return 0;
}
