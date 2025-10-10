#include <iostream>
using namespace std;


int main(){
    cout << " =================================================================================== " << endl;
    cout << "                                   SELAMAT DATANG DI                                 " << endl;
    cout << "                                     TOKO SEMBAKO                                    " << endl;
    cout << " =================================================================================== " << endl;

    cout << " DAFTAR HARGA SEMBAKO  HASIL INDUSTRI : " << endl << endl;

    cout << " 1. Beras Premium                : Rp17000/kg " << endl;
    cout << " 2. Beras Bulog                  : Rp12000/kg " << endl;
    cout << " 3. Minyak Goreng Bimoli         : Rp22600/liter " << endl;
    cout << " 4. Minyak Goreng KITA           : Rp15000/liter " << endl;
    cout << " 5. Gula Pasir                   : Rp18000/kg " << endl;
    cout << " 6. Tepung terigu                : Rp12000/kg " << endl;
    cout << " 7. Tepung Terigu Segitiga Biru  : Rp14000/kg " << endl;
    cout << " 8. Garam Kasar                  : Rp4500/bungkus " << endl;
    cout << " 9. Garam Halus                  : Rp3000/bungkus " << endl;
    cout << " 10. Blue Band Margarine         : Rp15000/sachet " << endl;
    cout << " 11. Telur                       : Rp58000/piring " << endl;
    cout << " 12. Daging Ayam                 : Rp48000/kg " << endl;
    cout << " 13. Daging Sapi                 : Rp150000/kg " << endl;
    cout << " 14. Cabe Merah                  : Rp45500/kg " << endl;
    cout << " 15. Cabe Merah Keriting         : Rp43000/kg " << endl;
    cout << " 16. Cabe Rawit Merah            : Rp45000/kg " << endl;
    cout << " 17. Cabe Rawit Hijau            : Rp40000/kg " << endl;
    cout << " 18. Cabe Rawit Hijau            : Rp40000/kg " << endl;
    cout << "====================================================================================" <<endl;

    string sembako[19] = {"Beras Premium", "Beras Bulog", "Minyak Goreng Bimoli", "Minyak Goreng KITA",
                        "Gula Pasir", "Tepung Terigu", "Tepung Terigu Segitiga Biru", "Garam Kasar",
                        "Garam Halus", "Blue Band Margarin", "Telur", "Daging Ayam", "Daging Sapi",
                        "Cabe Merah", "Cabe Merah Keriting", "Cabe Rawit Merah", "Cabe Rawit Hijau",
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
