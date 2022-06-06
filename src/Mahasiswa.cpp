#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>

#include "Mahasiswa.hpp"

using namespace std;



    Mahasiswa::Mahasiswa(string NRP, string name, string TTL, string gender, string jurusan,
                int tahunMasuk, int semester, float IPK){
        this->NRP = NRP;
        this->name = name;
        this->TTL = TTL;
        this->gender = gender;
        this->jurusan = jurusan;
        this->tahunMasuk = tahunMasuk;
        this->semester = semester;
        this->IPK = IPK;
    }
    
    void Mahasiswa::displayAll(int n){
    cout << "\nDATA MAHASISWA ABSEN KE-" << n+1 << endl;
    cout << "NRP                  : " << this->NRP << endl;
    cout << "nama                 : " << this->name << endl;
    cout << "tempat, tanggal lahir: " << this->TTL << endl;
    cout << "gender               : " << this->gender << endl;
    cout << "jurusan              : " << this->jurusan << endl;
    cout << "tahun masuk          : " << this->tahunMasuk << endl;
    cout << "semester             : " << this->semester << endl;
    cout << "IPK                  : " << this->IPK << endl;

    }





Mahasiswa tambah_mahasiswa(){

    //atribut Mahasiswa
    string NRP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    int tahunMasuk;
    int semester;
    float IPK ;

    cout << "\nMASUKAN DATA MAHASISWA" << endl;
    cout << "Masukan NRP                  : ";
    cin >> NRP;
    cout << "Masukan nama                 : ";
    cin >> name;
    cout << "Masukan tempat, tanggal lahir: ";
    cin >> TTL;
    cout << "Masukan gender               : ";
    cin >> gender;
    cout << "Masukan jurusan              : ";
    cin >> jurusan;
    cout << "Masukan tahun masuk          : ";
    cin >> tahunMasuk;
    cout << "Masukan semester             : ";
    cin >> semester;
    cout << "Masukan IPK                  : ";
    cin >> IPK;
    Mahasiswa mahasiswa(  NRP, name,  TTL,  gender,  jurusan,
         tahunMasuk,  semester,  IPK);

    return mahasiswa;

}
