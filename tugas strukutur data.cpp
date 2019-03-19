#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int x=1,y=1;
int nilai1,nilai2,nilai3;
int cari;
int jumlah;



struct Mahasiswa
{
    string nama;
    int nim;
    char jk[10];
    char alamat[30];
    string jurusan;
    float ratarata;
}mhs[99];


void tambah_mhs(Mahasiswa)

{
        cout<<endl;
        cout<<"-------------------"<<endl;
        cout<<"Masukkan nama Mahasiswa :";cin>>mhs[x].nama;
        cout<<"Masukkan NIM :";cin>>mhs[x].nim;
        cout<<"Masukkan Jurusan:";cin>>mhs[x].jurusan;
        cout<<"Masukkan Jenis kelamin  (Laki-laki/Perempuan):";cin>>mhs[x].jk;
        cout<<"Alamat :";cin>>mhs[x].alamat;
        cout<<"Masukkan nilai 1:";cin>>nilai1;
        cout<<"Masukkan nilai 2:";cin>>nilai2;
        cout<<"Masukkan nilai 3:";cin>>nilai3;
        cout<<"-------------------"<<endl;

      jumlah=nilai1+nilai2+nilai3;
      mhs[x].ratarata=jumlah/3;
}

void cari_data(Mahasiswa){
    int pilih;
            cout<<"Masukkan NIM mahasiswa yang akan dicari= ";cin>>pilih;
    if(pilih==mhs[x].nim)

        {
            cout<<"NIM : "<<mhs[x].nim<<" "<<endl;
            cout<<"Nama : "<<mhs[x].nama<<" "<<endl;
            cout<<"Jurusan : "<<mhs[x].jurusan<<" "<<endl;
            cout<<"Jenis Kelamin : "<<mhs[x].jk<<" "<<endl;
            cout<<"Alamat :"<<mhs[x].alamat<<" "<<endl;
            cout<<" nilai1 : "<<nilai1<<" "<<endl;
            cout<<" nilai2 : "<<nilai2<<" "<<endl;
            cout<<" nilai3 : "<<nilai3<<" "<<endl;
            }
    else if(pilih!=mhs[x].nim){
            cout<<"data tidak ada"<<endl;
    }
    x++;
}


void rata_mhs(Mahasiswa)
{
    cout<<endl;
    cout<<"---------------- "<<endl;
    cout<<"Nilai Rata-rata Mahasiswa"<<endl;
    cout<<mhs[x].ratarata<<endl;
    cout<<endl;
    cout<<"----------------"<<endl;
    system("pause");
}


int main(){
    int pilih=0;
    do {system ("cls");
        cout<<"Daftar menu :"<<endl;
        cout<<"1. Masukan Data Mahasiswa"<<endl;
        cout<<"2. Nilai Rata-rata"<<endl;
        cout<<"3. Cari Berdasarkan NIM"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"---------------"<<endl;
    cout<<"Pilih menu: ";cin>>pilih;
    switch(pilih)
    {   case 1:{if(y==10){cout<<"Kelas sudah penuh"<<endl;} else{tambah_mhs(mhs[99]);};break;}
        case 2:{if(y==10){cout<<"Kelas sudah penuh"<<endl;} else{rata_mhs(mhs[99]);};break;}
        case 3:{if(y==10){cout<<"Kelas sudah penuh"<<endl;} else{cari_data(mhs[99]);};break;}
        case 0:{cout<<"terimakasih "<<endl;break;}
        default:cout<<"Salah pilih menu "<<endl;
         }
    system("pause");
    }
    while(pilih!=0);
    return 0;

}



