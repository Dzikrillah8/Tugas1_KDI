#include <iostream>
using namespace std;

// menghitung gcd
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// mencari modular inverse (nilai d)
int modInverse(int e, int phi) {
    for (int d = 1; d < phi; d++) {
        if ((d * e) % phi == 1)
            return d;
    }
    return -1;
}

// modular exponentiation
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;

    for (long long i = 0; i < exp; i++) {
        result = (result * base) % mod;
    }

    return result;
}

int main() {

    int p, q;

    cout << "Masukkan bilangan prima p: ";
    cin >> p;

    cout << "Masukkan bilangan prima q: ";
    cin >> q;

    int n = p * q;
    int phi = (p - 1) * (q - 1);

    cout << "\nNilai n = " << n << endl;
    cout << "Nilai phi(n) = " << phi << endl;

    // menampilkan pilihan e
    cout << "\nPilihan nilai e yang relatif prima dengan phi:\n";

    for (int i = 2; i < phi; i++) {
        if (gcd(i, phi) == 1) {
            cout << i << " ";
        }
    }

    cout << "\n\nPilih salah satu nilai e: ";
    int e;
    cin >> e;

    // validasi
    while (gcd(e, phi) != 1) {
        cout << "Nilai e tidak valid. Masukkan lagi: ";
        cin >> e;
    }

    int d = modInverse(e, phi);

    cout << "\nPublic Key (e,n) = (" << e << "," << n << ")" << endl;
    cout << "Private Key (d,n) = (" << d << "," << n << ")" << endl;

    long long M;

    cout << "\nMasukkan plaintext (angka): ";
    cin >> M;

    // enkripsi
    long long C = modPow(M, e, n);
    cout << "Ciphertext = " << C << endl;

    // dekripsi
    long long decrypt = modPow(C, d, n);
    cout << "Hasil dekripsi = " << decrypt << endl;

    return 0;
}