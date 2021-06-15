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
    cout << octal;
}

void decmail(int dnumber)
{
    cout << dnumber;
}
void hex(int n)
{
    char hexnumber[100];
    int i = 0;
    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            hexnumber[i] = temp + 48;
            i++;
        }
        else
        {
            hexnumber[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexnumber[j];
    }
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
    cout << "enter the type to convert\n1- octal\n2- binary\n3-decmail\n4-hex\n5-select all : ";
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
    else if (type == "hex")
    {
        hex(number);
    }
    else if (type == "select")
    {
        cout << "the " << number
             << " = ";
        octal(number);
        cout << "  Octal\n";
        cout << "the " << number
             << " = ";
        binary(number);
        cout << "  Binary\n";
        cout << "the " << number
             << " = ";
        decmail(number);
        cout << "  dicmail\n";
        cout << "the " << number
             << " = ";
        hex(number);
        cout << "  hex\n";
    }
    else
    {
        cout << "return again";
    }
    return 0;
}
