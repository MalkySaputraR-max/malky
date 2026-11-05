#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_doi, jawaban;
    int pilihan_tempat;

    cout << "========================================" << endl;
    cout << "   GAME SIMULATOR DECLARE LOVE (CONFESS) " << endl;
    cout << "========================================" << endl << endl;

    // 1. Input Nama Orang yang Disukai
    cout << "Masukkan nama orang yang kamu sukai: ";
    getline(cin, nama_doi);

    cout << "\nKamu sedang duduk bersama " << nama_doi << "..." << endl;
    cout << "Pilih lokasi untuk menyatakan perasaanmu:" << endl;
    cout << "1. Taman Kota (Suasana Romantis)" << endl;
    cout << "2. Kafe Favorit (Suasana Santai)" << endl;
    cout << "3. Pinggir Jalan (Suasana Spontan)" << endl;
    cout << "Pilih tempat (1/2/3): ";
    cin >> pilihan_tempat;

    cout << "\n----------------------------------------" << endl;
    if (pilihan_tempat == 1) {
        cout << "Di bawah lampu taman yang temaram, kamu menatap " << nama_doi << "..." << endl;
    } else if (pilihan_tempat == 2) {
        cout << "Sambil meminum kopi, suasana mendadak hening..." << endl;
    } else {
        cout << "Di tengah bisingnya jalanan, kamu memberanikan diri..." << endl;
    }

    // 2. Momen Ungkapan Perasaan
    cout << "\"Sebenarnya... aku suka sama kamu, " << nama_doi << ". Kamu mau nggak jadi pacarku?\"" << endl;
    cout << "----------------------------------------" << endl;

    // 3. Respon dari Doi
    cout << "\nApa jawaban dari " << nama_doi << "? (ketik 'mau' atau 'tidak'): ";
    cin >> jawaban;

    cout << endl;
    // 4. Penentuan Ending Game
    if (jawaban == "mau" || jawaban == "MAU" || jawaban == "Mau") {
        cout << "========================================" << endl;
        cout << "CONGRATULATIONS! HAPPY ENDING!" << endl;
        cout << nama_doi << " tersenyum dan menjawab: \"Aku juga suka sama kamu!\"" << endl;
        cout << "========================================" << endl;
    } else {
        cout << "========================================" << endl;
        cout << "GAME OVER / SAD ENDING..." << endl;
        cout << nama_doi << " menjawab: \"Maaf ya, kamu terlalu baik buat aku...\"" << endl;
        cout << "Tetap semangat! Masih banyak ikan di laut!" << endl;
        cout << "========================================" << endl;
    }

    return 0;
}