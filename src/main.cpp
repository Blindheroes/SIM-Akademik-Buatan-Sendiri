// cara run task buat save, compile, dan run rogram press [ctlr + shift + B]

#include <iostream>
#include <stdlib.h>
#include <string> // string bisa di ganti pakai const char*
#include <vector>

#include "Mahasiswa.hpp"
#include "Dosen.hpp"
#include "Tendik.hpp"


using namespace std;


int main()
{
    system("color 70");

    vector <Mahasiswa> absenMahasiswa;
    vector <Dosen> absenDosen;
    vector <Tendik> absenTendik;

    int select;

    while (1)
    {
        cout << "\n\nMENU =================" << endl;
        cout << "1.tambah Mahasiswa" << endl;
        cout << "2.tambah Dosen" << endl;
        cout << "3.tambah Tendik" << endl;
        cout << "4.tampilkan Mahasiswa" << endl;
        cout << "5.tampilkan Dosen" << endl;
        cout << "6.tampilkan Tendik" << endl;
        cout << "7. close" << endl;
        cout << "PILIHAN ANDA: " ;
        cin>> select ;
        cout << endl;


        switch (select)
        {
        case 1:
            absenMahasiswa.push_back(tambah_mahasiswa());
            break;
        case 2:
            absenDosen.push_back(tambah_dosen());
            break;
        case 3:
            absenTendik.push_back(tambah_tendik());
            break;
        case 4: 
            for (long unsigned int i = 0; i < absenMahasiswa.size(); i++)
            {
                /* code */
            absenMahasiswa[i].displayAll(i);
            }
            break;
        case 5: 
            for (long unsigned int i = 0; i < absenDosen.size(); i++)
            {
                /* code */
            absenDosen[i].displayAll(i);
            }
            break;
        case 6: 
            for (long unsigned int i = 0; i < absenTendik.size(); i++)
            {
                /* code */
            absenTendik[i].displayAll(i);
            }
            break;
        case 7: 
            return 0;
        
        default:
            return 0;
        }


    }
    

    return 0;
}

