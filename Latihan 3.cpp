#include <iostream>
using namespace std;
int totalHadir = 0;

int kehadiran(int pertemuan) {
    totalHadir = totalHadir + pertemuan;
    return totalHadir;
}
double rasio(int jumlahmahasiswa, int totalpertemuan) {
    int totalmaksimal = jumlahmahasiswa * totalpertemuan;
    double rasio = (double) totalHadir / totalmaksimal * 100;
    return rasio;
}
void hasil(int jumlahmahasiswa, int totalpertemuan) {
    int totalmaksimal = jumlahmahasiswa * totalpertemuan;
    double persentase = rasio(jumlahmahasiswa, totalpertemuan);
    cout << "Total kehadiran kelas : " << totalHadir << " dari " << totalmaksimal << endl;
    cout << "Persentase kehadiran  : " << persentase << " %" << endl;
}
int main() {
    int x;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> x;
    int mahasiswa[x];
    int totalpertemuan;
    cout << "Masukkan total pertemuan: ";
    cin >> totalpertemuan;
for (int i = 0; i < x; i++) {
        cout << "Kehadiran mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i];
      kehadiran(mahasiswa[i]);
    }

hasil(x, totalpertemuan);

    return 0;
}

