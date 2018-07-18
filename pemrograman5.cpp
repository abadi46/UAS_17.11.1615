#include <iostream>
#include <string>
using namespace std;
class Kalkulator
{
    protected :
    float Bil1;
    float Bil2;
    float Hasil;
    float Jumlah;
};
class Kalkulator_Science : public Kalkulator
{
private :
    float Bil3;
    public :
    void input()
    {
        cout<<"Kalkulator Science"<<endl;
        cout<<"Masukkan Bilangan Pertama : "; cin>>Bil1;
        cout<<"Masukkan Bilangan Kedua : "; cin>>Bil2;
    }
    void output()
    {
       cout<<"kalkulator science"<<endl;
        Hasil=Bil1 *Bil1 ;
        cout<<"Kuadrat= " <<Bil3<<endl;
        Hasil= Bil1 + Bil2 / 2;
        cout<<"Hitung Rata-Rata= "<<Bil3<<endl;
    }
};

class Kalkulator_Dagang: public Kalkulator
{

    private :
    public:
        void input()
        {
            cout<<"Kalkulator Dagang"<<endl;
            cout<<"Masukkan Bilangan pertama: "; cin>>Bil1;
            cout<<"Masukkan Bilangan Kedua : "; cin>>Bil2;
        }
        void output()
        {
            Hasil=Bil1 - Bil2 ;
            cout<<"Kurang = "<<Hasil<<endl;
            Hasil=Bil1 * Bil2;
            cout<<"Kali = "<<Hasil<<endl;
            Hasil=Bil1 / Bil2;
            cout<<"Bagi = "<<Hasil<<endl;
        }
};
    int main()
    {
        Kalkulator_Science Ks;
        Kalkulator_Dagang Kd;
        int pil;
        cout<<"Kalkulator"<<endl;
        cout<<"1. Kalkulator Science"<<endl;
        cout<<"2. Kalkulator Dagang"<<endl;
        cout<<"pilih : "; cin>>pil;
        if(pil==1)
        {
            Ks.input();
            Ks.output();
            cout<<endl;
        }
        if (pil==2)
        {
            Kd.input();
            Kd.output();
            cout<<endl;
        }
        return 0;
    }