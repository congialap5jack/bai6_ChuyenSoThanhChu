// bai6_ChuyenSoThanhChu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//





#include <iostream>
using namespace std;

int main() {
    cout << "CHUONG TRINH GIAI PHUONG TRINH BAC 2\n";
    double a, b, c, delta, x1, x2;

    cout << "Nhap a:"; cin >> a;
    cout << "Nhap b:"; cin >> b;
    cout << "Nhap c:"; cin >> c;
    if (a == 0) {
        // Giai pt bac 1: bx + c = 0
        if (b != 0)
        {
            cout << "Phuong trinh co nghiem duy nhat x=" << -c / b << endl;
        }
        else {
            if (c != 0)
            {
                cout << "Phuong trinh vo nghiem\n";
            }
            else {
                cout << "Phuong trinh vo so nghiem\n";
            }
        }
    }
    else {
        // Giai pt bac 2
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem\

    


