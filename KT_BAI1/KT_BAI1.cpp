// KT_BAI1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Nguyen Trong Tin

#include <iostream>
using namespace std;
int main()
{
    float chieudai, chieurong, dientich, chuvi;
    cout << "Nhap chieu dai HCN: "; cin >> chieudai;
    cout << "Nhap chieu rong HCN: "; cin >> chieurong;
    dientich = chieudai * chieurong;
    cout << "Dien tich cua HCN là:\n" << dientich << endl;
    cout << "Nhap chieu dai HCN: "; cin >> chieudai;
    cout << "Nhap chieu rong HCN: "; cin >> chieurong;
    chuvi = (chieudai + chieurong)*2; 
    cout << "Chu vi cua HCN là:\n" << chuvi << endl;
    return 0;
}

