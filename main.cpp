#include<iostream>

using namespace std;

struct database
{
    string nama;
    int umur;
    string npm;
};

int main()
{
    database indy;
    indy.nama = "Indy Adira Khalfani";
    indy.umur = 19;
    indy.npm = "06.2021.1.07434";

    cout<<indy.nama <<endl;
    cout<<indy.umur <<endl;
    cout<<indy.npm <<endl;
}
