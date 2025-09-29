#include <iostream>
#include <string>
using namespace std;

// Fungsi user-defined untuk reverse string
string myReverse(string text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
        // tukar menggunakan kode ASCII
        int asciiTemp = (int)text[i]; 
        text[i] = text[n - i - 1]; 
        text[n - i - 1] = (char)asciiTemp; 
    }
    return text;
}

int main() {
    string kata;
    cout << "Masukkan kata sandi: ";
    cin >> kata;

    // Enkripsi (dibalik)
    string sandi = myReverse(kata);
    cout << "Hasil enkripsi (dibalik): " << sandi << endl;

    // Dekripsi (dibalik lagi)
    string asli = myReverse(sandi);
    cout << "Kata asli: " << asli << endl;

    return 0;
}
