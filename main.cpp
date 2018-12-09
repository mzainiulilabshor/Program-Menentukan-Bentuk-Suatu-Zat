#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int suhu; // int untuk mendelarasi bahwa suhu menggunakan type data integer ( bilangan bulat )
    cout << "\n\n  Program untuk mengetahui suatu zat beku atau tidak\n\n ";
    cout << " Masukan suhu suatu zat dalam derajat celcius : " ; cin>>suhu; cout << endl;
    cout << "  Suhu zat yang anda masukan adalah " << suhu << " derajat celsius " << endl <<endl;

    if(suhu <= 0 )
    {
        cout << "  Maka zat tersebut adalah zat beku ";
    }
    else
    {
        cout << "  Maka zat tersebut adalah zat cair ";
    }

    getch();

    return 0;






}
