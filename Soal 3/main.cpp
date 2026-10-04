#include <iostream>
using namespace std;
 
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
 
void tukarArray(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}
 
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
 
int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int baris, kolom;
 
    cout << "=== Array A (sebelum) ===" << endl;
    tampilArray(A);
    cout << "\n=== Array B (sebelum) ===" << endl;
    tampilArray(B);
 
    cout << "\nMasukkan posisi yang ditukar (baris kolom, 0-2): ";
    cin >> baris >> kolom;
    tukarArray(A, B, baris, kolom);
 
    cout << "\n=== Array A (sesudah tukar posisi [" << baris << "][" << kolom << "]) ===" << endl;
    tampilArray(A);
    cout << "\n=== Array B (sesudah tukar posisi [" << baris << "][" << kolom << "]) ===" << endl;
    tampilArray(B);
 
    cout << "\nSebelum tukar pointer : x = " << x << ", y = " << y << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar pointer : x = " << x << ", y = " << y << endl;
 
    return 0;
}
