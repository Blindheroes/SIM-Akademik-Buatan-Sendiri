#ifndef __DOSEN
#define __DOSEN


#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>


using namespace std;

class Dosen{

    private:
    string NIP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    string mataKuliah;
    int semester;
    



    public:
    Dosen(string NIP, string name, string TTL, string gender, string jurusan,
                string mataKuliah, int semester );
    
    void displayAll(int n);


};


Dosen tambah_dosen();

#endif