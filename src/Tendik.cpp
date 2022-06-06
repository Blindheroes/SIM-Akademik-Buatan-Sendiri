#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>

#include "Tendik.hpp"

using namespace std;



    Tendik::Tendik(string NIP, string name, string TTL, string gender, string jurusan,
                string jobdesk){
        this->NIP = NIP;
        this->name = name;
        this->TTL = TTL;
        this->gender = gender;
        this->jurusan = jurusan;
        this->jobdesk = jobdesk;
    }
    
    void Tendik::displayAll(int n){
    cout << "\nDATA TENDIK ABSEN KE-" << n+1 << endl;
    cout << "NIP                 : " << this->NIP << endl;
    cout << "nama                 : " << this->name << endl;
    cout << "tempat, tanggal lahir: " << this->TTL << endl;
    cout << "gender               : " << this->gender << endl;
    cout << "jurusan              : " << this->jurusan << endl;
    cout << "jobdesk              : " << this->jobdesk << endl;

    }





Tendik tambah_tendik(){

    //atribut Tendik
    string NIP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    string jobdesk;
    cout << "\nMASUKAN DATA TENDIK" << endl;
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
    cout << "Masukan jobdesk              : ";
    cin >> jobdesk;

    Tendik tendik(NIP, name,  TTL,  gender,  jurusan, jobdesk);

    return tendik;

}
