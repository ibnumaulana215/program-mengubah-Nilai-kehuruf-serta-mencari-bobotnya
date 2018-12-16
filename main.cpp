#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string nama,kelas;
    int nilai;
    cout<<"program mengubah nilai ke huruf(A,B,C,D,E)"<<endl;
    cout<<endl;

    cout<<"data mahasiswa STT"<<endl;
    cout<<"nama mahasiswa : ";    cin>>nama;
    cout<<" kelas : "  ;          cin>>kelas;
    cout<<"nilai : ";             cin>>nilai;
    cout<<endl;

    {
        if ((nilai >=85)&&(nilai <=100))
        cout<<" nilai mahasiswa : A";

        else if ((nilai >=75)&&(nilai <=84))
        cout<<"nilai mahasiswa : B";

        else if ((nilai >=65)&&(nilai<=74))
        cout<<"nilai mahasiswa : C";

        else if ((nilai >=55)&&(nilai <=64))
        cout<<"nilai mahasiswa : D";

        else if ((nilai >=0)&&(nilai <=54))
        cout<<"nilai mahasiswa : E";

        else
        cout<<"maaf nilai antara 0-100 "<<endl;
        }
        cout<<endl<<endl<<endl;

        char huruf;

        cout<<"mengubah nilai huruf ke kebobotnya "<<endl;
        cout<<"Masukan nilai huruf = "; cin>>huruf;
        cout<<endl;

        switch(huruf)
        {
            case 'A':
            case 'a':
            cout<<"A untuk nilai angka 85-100"<<endl;
            break;

            case 'B':
            case 'b':
            cout<<"B untuk nilai angka 75-84"<<endl;
            break;

            case 'C':
            case 'c':
            cout<<"C untuk nilai angka 65-74"<<endl;
            break;

            case 'D':
            case 'd':
            cout<<"D untuk nilai angka 55-64"<<endl;
            break;

            case 'E':
            case 'e':
            cout<<"E untuk nilai angka 0-54"<<endl;
            break;

            default :
                cout<<"maaf pilihan hanya ada di huruf A,B,C,D dan E "<<endl;

    }
    getch();
    return 0;


}
