#include <iostream>
using namespace std;

int beli(int jumlah_beli) {

    string sembako[19] = {"Beras Premium", "Beras Bulog", "Minyak Goreng Bimoli", "Minyak Goreng KITA",
                        "Gula Pasir", "Tepung Terigu", "Tepung Terigu Segitiga Biru", "Garam Kasar",
                        "Garam Halus", "Blue Band Margarin", "Telur", "Daging Ayam", "Daging Sapi",
                        "Cabe Merah", "Cabe Merah Keriting", "Cabe Rawit Merah", "Cabe Rawit Hijau",
                        "Bawang Putih", "Bawang Merah"};

    int harga[19] = {17000, 12000, 22000, 15000, 18000, 12000, 14000, 4500, 3000, 15000,
                    58000, 48000, 150000, 45500, 43000, 45000, 40000, 35000, 20000};

    int nomor = sizeof (sembako)/sizeof(sembako[0]);

    int pilihan;
    cout << "Kode produk yang anda beli : ";

    int total_harga = 0;

    for (int i = 1; i <= jumlah_beli; i++){
        cin >> pilihan;
        cout << endl;

        for (int j = 0; j < nomor; j++){
            if (j == pilihan){
                cout  << sembako[j]<< " : Rp" << harga[j];

                total_harga += harga[j];
             }
    
        }
    }
    cout << endl;
    
    cout << "===================================================================================" << endl;
    
    cout << "Total harga produk yang anda beli : Rp " << total_harga << endl;
    
    cout << "===================================================================================" << endl;

    int jumlah_uang;
    cout << "Jumlah uang yang anda bayarkan : Rp ";
    cin >> jumlah_uang;

    int kembalian = jumlah_uang - total_harga;

    return kembalian;
}

int main(){
    cout << "====================================================================================" << endl;
    cout << "                                   SELAMAT DATANG DI                                " << endl;
    cout << "                                     TOKO SEMBAKO                                   " << endl;
    cout << "====================================================================================" << endl;
    cout << "|  KODE          |          DAFTAR HARGA SEMBAKO  HASIL INDUSTRI                   |" << endl;
    cout << "====================================================================================" << endl;
    cout << "|   [Kode 0]     |      Beras Premium                     : Rp17000/kg             |" << endl;
    cout << "|   [Kode 1]     |      Beras Bulog                       : Rp12000/kg             |" << endl; 
    cout << "|   [Kode 2]     |      Minyak Goreng Bimoli              : Rp22600/liter          |" << endl;
    cout << "|   [Kode 3]     |      Minyak Goreng KITA                : Rp15000/liter          |" << endl;
    cout << "|   [Kode 4]     |      Gula Pasir                        : Rp18000/kg             |" << endl;
    cout << "|   [Kode 5]     |      Tepung terigu                     : Rp12000/kg             |" << endl;
    cout << "|   [kode 6]     |      Tepung Terigu Segitiga Biru       : Rp14000/kg             |" << endl;
    cout << "|   [Kode 7]     |      Garam Kasar                       : Rp4500/bungkus         |" << endl;
    cout << "|   [Kode 8]     |      Garam Halus                       : Rp3000/bungkus         |" << endl;
    cout << "|   [Kode 9]     |      Blue Band Margarine               : Rp15000/sachet         |" << endl;
    cout << "|   [Kode 10]    |      Telur                             : Rp58000/piring         |" << endl;
    cout << "|   [Kode 11]    |      Daging Ayam                       : Rp48000/kg             |" << endl;
    cout << "|   [Kode 12]    |      Daging Sapi                       : Rp150000/kg            |" << endl;
    cout << "|   [Kode 13]    |      Cabe Merah                        : Rp45500/kg             |" << endl;
    cout << "|   [Kode 14]    |      Cabe Merah Keriting               : Rp43000/kg             |" << endl;
    cout << "|   [Kode 15]    |      Cabe Rawit Merah                  : Rp45000/kg             |" << endl;
    cout << "|   [Kode 16]    |      Cabe Rawit Hijau                  : Rp40000/kg             |" << endl;
    cout << "|   [Kode 17]    |      Cabe Rawit Hijau                  : Rp40000/kg             |" << endl;
    cout << "|   [Kode 18]    |      Bawang Putih                      : Rp35000/kg             |" << endl;
    cout << "|   [Kode 19]    |      Bawang Merah                      : Rp20000/kg             |" << endl;
    cout << "====================================================================================" << endl;
    
    int jumlah_beli;
    cout << "Jumlah produk yang anda beli : ";
    cin >> jumlah_beli;

    cout << "Kembali : Rp :" << beli(jumlah_beli) << endl;

    return 0;
}
