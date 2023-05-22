#include<iostream>
using namespace std;

int main (){
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do 
    {
    cout<<"               TOKO GROSIR              "<<endl;
    cout<<"            GROSIR MAJU MUNDUR            "<<endl;
    cout<<"        Aplikasi kasir TOKO GROSIR       "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    cout<<"HAGA BARAMG        Harga"<<endl;
    cout<<"1. BERAS 1 LITER   Rp. 10.000"<<endl;
    cout<<"2. TELOR 1 KILO    Rp.  8.000"<<endl;
    cout<<"3. TEPUNG 1 KILO   Rp. 10.000"<<endl;
    cout<<"4. BERAS MERAH 1LT Rp. 12.000"<<endl;
    cout<<"5. BAWANG MERAH 1KGRp.  8.000"<<endl;
    cout<<"6. BAWANG PUTIH 1KGRp.  6.000"<<endl;
    cout<<"7. MINYAK GORENG 1 Rp. 28.000"<<endl;
    cout<<'n'<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'n'<<"BERAS1LITER"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<'n'<<"TELOR 1 KILO"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<'n'<<"TEPUNG 1 KILO"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<'n'<<"BERAS MERAH 1LT"<<endl;
            pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<'n'<<"BAWANG MERAH 1KG"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<'n'<<"BAWANG PUTIH 1KG"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<'n'<<"MINYAK GORENG 1 LT"<<endl;
            pri=28000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
        cout<<"KEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode yang anda masukkan tidak ada";
    }
    } 
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda TOKO GROSIR MAJU MUNDUR";
    return 0;
}

