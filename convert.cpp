#include <cmath>
#include <iostream>
using namespace std;
void octal(int dnumber)
{
    int octal = 0;
    int placevalue = 1;
    while (dnumber != 0)
    {
        octal += (dnumber % 8) * placevalue;
        dnumber /= 8;
        placevalue *= 10;
    }
    cout << octal << endl;
}

void decmail(int dnumber)
{
    cout << dnumber << endl;
}

void binary(int dnumber)
{
    for (int i = 11; i >= 0; i--)
    {
        int k = dnumber >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
    // cout << dnumber << endl;
    // if (dnumber >= 1)
    // {
    //     floor(dnumber / 2);
    // }
    // cout << dnumber % 2;
}

int main()
{
    string type;
    int number;
    cout << "enter the type to convert\n1- octal\n2- binary\n3-decmail : ";
    cin >> type;
    cout << "enter the value : ";
    cin >> number;
    if (type == "octal")
    {
        octal(number);
    }
    else if (type == "binary")
    {
        binary(number);
    }
    else if (type == "decimal")
    {
        decmail(number);
    }
    return 0;
}
