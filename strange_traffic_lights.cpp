#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Masukkan jumlah detik/urutan: ";
    cin >> n;

    string lampu[] = {"Merah", "Kuning", "Hijau"};

    for (int i = 0; i < n; i++) {
        cout << "Detik " << i+1 << ": " << lampu[i % 3] << endl;
    }

    return 0;
}
