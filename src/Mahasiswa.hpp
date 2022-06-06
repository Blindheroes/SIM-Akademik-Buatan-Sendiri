#ifndef __MAHASISWA
#define __MAHASISWA


#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>


using namespace std;

class Mahasiswa{

    private:
    string NRP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    int tahunMasuk;
    int semester;
    float IPK;



    public:
    Mahasiswa(string NRP, string name, string TTL, string gender, string jurusan,
                int tahunMasuk, int semester, float IPK);
    
    void displayAll(int n);


};


Mahasiswa tambah_mahasiswa();

#endif