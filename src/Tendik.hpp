#ifndef __TENDIK
#define __TENDIK


#include <iostream>
#include <string> // string bisa di ganti pakai const char*
#include <vector>


using namespace std;

class Tendik{

    private:
    string NIP;
    string name;
    string TTL;
    string gender;
    string jurusan;
    string jobdesk;



    public:
    Tendik(string NIP, string name, string TTL, string gender, string jurusan,
                string jobdesk);
    
    void displayAll(int n);


};


Tendik tambah_tendik();

#endif