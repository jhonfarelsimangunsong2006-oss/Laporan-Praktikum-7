#include <iostream>
using namespace std;
double hitungrata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total = total + nilai[i];
    }
    return total / jumlah;
}
void hasil(double rata) {
    cout << "Rata-rata: " << rata << endl;
    if (rata >= 70)
        cout << "Status   : LULUS" << endl;
    else
        cout << "Status   : TIDAK LULUS" << endl;
}
int main() {
    int jumlah;
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlah;

    int nilai[jumlah];
    for (int i = 0; i < jumlah; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
}
double rata = hitungrata(nilai, jumlah);
    hasil(rata);

return 0;
}
