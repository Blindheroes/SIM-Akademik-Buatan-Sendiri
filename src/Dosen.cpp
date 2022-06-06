#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>

#include "Dosen.hpp"

using namespace std;



    Dosen::Dosen(string NIP, string name, string TTL, string gender, string jurusan,
                string mataKuliah, int semester){
        this->NIP = NIP;
        this->name = name;
        this->TTL = TTL;
        this->gender = gender;
        this->jurusan = jurusan;
        this->mataKuliah = mataKuliah;
        this->semester = semester;
    }
    
    void Dosen::displayAll(int n){
    cout << "\nDATA DOSEN ABSEN KE-" << n+1 << endl;
    cout << "NIP                 : " << this->NIP << endl;
    cout << "nama                 : " << this->name << endl;
    cout << "tempat, tanggal lahir: " << this->TTL << endl;
    cout << "gender               : " << this->gender << endl;
    cout << "jurusan              : " << this->jurusan << endl;
    cout << "mata kuliah          : " << this->mataKuliah << endl;
    cout << "semester             : " << this->semester << endl;

    }





Dosen tambah_dosen(){

    //atribut Dosen
    string NIP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    string mataKuliah;
    int semester;

    cout << "\nMASUKAN DATA DOSEN" << endl;
    cout << "Masukan NIP                  : ";
    cin >> NIP;
    cout << "Masukan nama                 : ";
    cin >> name;
    cout << "Masukan tempat, tanggal lahir: ";
    cin >> TTL;
    cout << "Masukan gender               : ";
    cin >> gender;
    cout << "Masukan jurusan              : ";
    cin >> jurusan;
    cout << "Masukan tahun masuk          : ";
    cin >> mataKuliah;
    cout << "Masukan semester             : ";
    cin >> semester;
    Dosen dosen(NIP, name,  TTL,  gender,  jurusan,
         mataKuliah,  semester );

    return dosen;

}
