//1. int nilai , double rerata , string alamat. 
//2. implementasi  dari conditional statement untuk jika suatu kondisi terpenuhi akan menjalankan perintah seperti menggunakan if jika nilai matematika 80 maka dinyatakan lulul
//3. implementasi dari  struct untuk mengelompokkan beberapa variabel seperti nama mahasiswa, nim, alamat dipadukan menjadi struct mahasiswa
//4. implementasi prosedur dan fungsi untuk memberikan suatu perintah seperti nilai a + nilai b. bedanya prosedur dan fungsi adalah prosedur tidak mengembalikan nilai sedangkan fungsi mengembalikan nilai.
//5. implementasi looping untuk mengulang suatu perintah jika suatu kondisi terpenuhi seperti jika angka yang muncul kurang dari 9 maka mengulang perintah


#include <iostream>
using namespace std;

int nama;
int mat;
int bing;
double nRerata;

int main()
{
    string nama;
    int mat, bing, ulang, i;
    double nRerata;
    string status;

    for (i = 0; i < 20; i++)
    {
        cout << "Masukkan Nama Anda : ";
        cin >> nama;
        cout << "Masukkan Nilai Matematika = ";
        cin >> mat;
        cout << "Masukkan Nilai Bahasa Inggris = ";
        cin >> bing;

        nRerata = (mat + bing) / 2;

        if (nRerata > 70)
        {
            status = "Diterima";
        }
        else if (mat > 80)
        {
            status = "Diterima";
        }
        else
        {
            status = "Ditolak";
        }

        cout << nama << " " << status << endl;
        cout << "ketik 1 untuk mengulang atau ketik 2 untuk keluar ";
        cin >> ulang;
        if (ulang == 2)
        {
            break;
        }
    }
}
