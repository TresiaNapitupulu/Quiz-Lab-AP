#include <iostream>        
using namespace std;

int algoritma_euclidean(int a, int b) {         //deklarasi fungsi
   
    if (a < b) {                               //memeriksa apakah a>b,jika ternyata nilai a<b maka nilainya akan di swap (tukar)
        swap(a,b); }

    int q, s, temp_a, temp_b;                  //deklarasi variabel
    while (b != 0) {                           //jika nilai b tidak sama dengan 0, maka loop akan dieksekusi
        temp_a = a;                            //temp_a dan temp_b = tempat menyimpan nilai sementara
        temp_b = b;                            
        q = temp_a / temp_b;                   //sisa bagi dari a dan b
        s = temp_a % temp_b;                   //sisa perkalian dari b  dan q
        a = temp_b;                            //nilai di perbaharui dengan nilai temp_b
        b = s;                                 //nilai b diperbaharui dengan nilai s 
        
        // menampilkan rumus a = b * q + s
        cout << temp_a << " = " << temp_b << " * " << q << " + " << s << endl;}
    return a;

}

int main() {
    char pilih;
    do {
        system("cls");
        int a, b;
        cout << "masukkan nilai a = ";
        cin >> a;
        cout << "masukkan nilai b = ";
        cin >> b;

        int fpb = algoritma_euclidean(a, b);    //memanggil fungsi
        cout << "FPB dari " << a << " dan " << b << " adalah = " << fpb << endl;
        cout << "apakah anda ingin mencoba lagi ? (y/n)";
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');
    
    return 0;
}



//penjelasan: 
// a dan b adalah b.bulat dengan ketentuan a>b, jika a<b maka akan dilakukan sistem swap(tukar)
// nilai fpb akan didapatkan apabila s=0, jika s != 0, maka perhitungan akan berlanjut hingga s=0
// adapun rumus pada kode diatas adalah: 
// a = b * q + s  (b = pembagi, q = hasil bagi, s = sisa bagi)
// penerapan rumus:
// a = b * q1 + s1 (jika hasil != 0, maka...)
// b = s1 * q2 + s2 (q2 = b:s1, s2 = sisa perkalian dari s1 * s2)
// s1 = s2 * q3 + s3 (dilanjut sampai Sn-1 = Sn * Qn+1 + 0) if s=0 perhitungan akan dihentikan, dan nilai fpb adalah Sn