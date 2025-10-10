#include <iostream>
using namespace std;


int main(){
    cout << " =================================================================================== " << endl;
    cout << "                                   SELAMAT DATANG DI                                 " << endl;
    cout << "                                     TOKO SEMBAKO                                    " << endl;
    cout << " =================================================================================== " << endl;

    cout << " DAFTAR HARGA SEMBAKO  HASIL INDUSTRI : " << endl << endl;

    cout << " Beras Premium               : Rp17000/kg " << endl;
    cout << " Beras Bulog                 : Rp12000/kg " << endl;
    cout << " Minyak Goreng Bimoli        : Rp22600/liter " << endl;
    cout << " Minyak Goreng KITA          : Rp15000/liter " << endl;
    cout << " Gula Pasir                  : Rp18000/kg " << endl;
    cout << " Tepung terigu               : Rp12000/kg " << endl;
    cout << " Tepung Terigu Segitiga Biru : Rp14000/kg " << endl;
    cout << " Garam Kasar                 : Rp4500/bungkus " << endl;
    cout << " Garam Halus                 : Rp3000/bungkus " << endl;
    cout << " Blue Band Margarine         : Rp15000/sachet " << endl;
    cout << " Telur                       : Rp58000/piring " << endl;
    cout << " Daging Ayam                 : Rp48000/kg " << endl;
    cout << " Daging Sapi                 : Rp150000/kg " << endl;
    cout << " Cabe Merah                  : Rp45500/kg " << endl;
    cout << " Cabe Merah Keriting         : Rp43000/kg " << endl;
    cout << " Cabe Rawit Merah            : Rp45000/kg " << endl;
    cout << " Cabe Rawit Hijau            : Rp40000/kg " << endl;
    cout << " Cabe Rawit Hijau            : Rp40000/kg " << endl;
    cout << "====================================================================================" <<endl;

    string sembako[19] = {"Beras Premium", "Beras Bulog", "Minyak Goreng Bimoli", "Minyak Goreng KITA",
                        "Gula Pasir", "Tepung Terigu", "Tepung Terigu Segitiga Biru", "Garam Kasar",
                        "Garam Halus", "Blue Band Margarin", "Telur", "Daging Ayam", "Daging Sapi",
                        "Cabe Merah", "Cabe Merah Keriting", "Cabe Rawit Merah", "Cabe Rawit Hijau,
                        "Bawang Putih", "Bawang Merah"};

    int harga[19] = {17000, 12000, 22000, 15000, 18000, 12000, 14000, 4500, 3000, 15000,
                    58000, 48000, 150000, 45500, 43000, 45000, 40000, 35000, 20000};

    int jumlah_beli;
    cout << "Jumlah produk yang anda beli : ";
    cin >> jumlah_beli;

    int nomor = sizeof (sembako)/sizeof(sembako[0]);

    int pilihan;
    cout << "Kode produk yang anda beli : ";

    int total_harga = 0;
    



}
