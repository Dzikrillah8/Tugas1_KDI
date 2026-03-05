# Enkripsi Asimetris RSA

Implementasi sederhana dari algoritma enkripsi RSA menggunakan bahasa C++ 
di mana program melakukan proses utama berupa:
1. Key Generation (public key & private key)
2. Enkripsi plaintext
3. Dekripsi ciphertext

Cara Menjalankan Program:
pengguna akan diminta memasukkan beberapa nilai yaitu

1. Memasukkan dua bilangan prima (p dan q)
   
2. Selanjutnya program akan menghitung
   n = p × q
   phi(n) = (p-1)(q-1)
  
3. Pilih nilai eksponen publik (e)
   Program akan menampilkan daftar nilai e yang relatif prima dengan phi(n).
   pilih salah satu dari daftar nilai e yang ditampilkan.
   
4. Memasukkan plaintext
   Masukkan pesan dalam bentuk angka yang lebih kecil dari nilai n.

Program akan menampilkan:
  1. Public Key (e,n)
  2. Private Key (d,n)
  3. Ciphertext hasil enkripsi
  4. Hasil dekripsi

Jika hasil dekripsi sama dengan plaintext, berarti proses RSA berhasil.
   
