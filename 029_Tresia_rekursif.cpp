#include <iostream>
using namespace std;

int algoritma_euclidean_rekursif(int a, int b) {        //deklarasi fungsi 
    //pengecekan kondisi jika salah satu bilangan bernilai 0
    if (b == 0) { 
        return a;                                       // jika b = 0 maka yang ditampilkan = a
    } 
    else if (a == 0) {
        return b;                                       // jika a = 0 maka yang ditampilkan = b
    }

    else if (a == b) {                                  //jika sama berarti itulah fpbnya
        return b;       
    }
    else if (a > b) {                                   // jika a > b maka akan di lakukan (a - b, b)
        return algoritma_euclidean_rekursif(a - b, b);
    }
    else {
        return algoritma_euclidean_rekursif(a, b - a);  // jika a > b maka akan di lakukan (a, b - a)
    }
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

        int fpb = algoritma_euclidean_rekursif(a, b);
        cout << "FPB dari " << a << " dan " << b << " adalah = " << fpb << endl;
        cout << "apakah anda ingin mencoba lagi ? (y/n)";
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');
    
    return 0;
}
