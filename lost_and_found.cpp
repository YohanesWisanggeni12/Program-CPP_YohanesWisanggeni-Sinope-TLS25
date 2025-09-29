#include <iostream>
#include <string>
using namespace std;


string myReverse(string text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
       
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

    
    string sandi = myReverse(kata);
    cout << "Hasil enkripsi (dibalik): " << sandi << endl;

    
    string asli = myReverse(sandi);
    cout << "Kata asli: " << asli << endl;

    return 0;
}
