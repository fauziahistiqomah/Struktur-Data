#include <iostream>
#include <string>
using namespace std;
 
struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};
 
float hitungNilai(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}
 
int main() {
    Mahasiswa data[10];
    int jumlah;
 
    cout << "Jumlah mahasiswa (max 10) : ";
    cin >> jumlah;
 
    if (jumlah < 1 || jumlah > 10) {
        cout << "Jumlah harus 1 sampai 10!" << endl;
        return 0;
    }
 
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama   : ";
        cin >> ws;
        getline(cin, data[i].nama);
        cout << "NIM    : ";
        cin >> data[i].nim;
        cout << "UTS    : ";
        cin >> data[i].uts;
        cout << "UAS    : ";
        cin >> data[i].uas;
        cout << "Tugas  : ";
        cin >> data[i].tugas;
 
        data[i].nilaiAkhir = hitungNilai(data[i].uts, data[i].uas, data[i].tugas);
    }
 
    cout << "\n===== HASIL =====" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << data[i].nama << " (" << data[i].nim << ")" << endl;
        cout << "   UTS: " << data[i].uts << ", UAS: " << data[i].uas
             << ", Tugas: " << data[i].tugas << endl;
        cout << "   Nilai Akhir: " << data[i].nilaiAkhir << endl;
    }
 
    return 0;
}

