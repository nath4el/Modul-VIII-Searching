#include <iostream>
#include <algorithm>
using namespace std;

// Fungsi untuk melakukan Binary Search
bool binarySearch(const string &sortedStr, char target)
{
    int left = 0;
    int right = sortedStr.length() - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if (sortedStr[middle] == target)
        {
            return true; // Huruf ditemukan
        }
        else if (sortedStr[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return false; // Huruf tidak ditemukan
}

int main()
{
    string inputStr;
    char targetChar;

    // Mengambil input dari pengguna
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, inputStr);

    // Mengurutkan kalimat
    sort(inputStr.begin(), inputStr.end());

    // Mengambil input huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> targetChar;

    // Mencari huruf menggunakan Binary Search
    if (binarySearch(inputStr, targetChar))
    {
        cout << "Huruf '" << targetChar << "' ditemukan dalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf '" << targetChar << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
