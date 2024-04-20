


#include <iostream>
#include <string>
using namespace std;

// Khai bao mang chua MSSV
string danhsachMSSV[5] = { "", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002" };

// Phan 2: Nhap MSSV cua nguoi dung vao phan tu dau tien cua mang
void nhapMSSV() {
    cout << "Nhap ma so sinh vien cua ban: ";
    getline(cin, danhsachMSSV[0]);
}

// Phan 3: In mang ra man hinh
void inMSSV() {
    cout << "\nDanh sach MSSV:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Sinh vien " << i << ": " << danhsachMSSV[i] << endl;
    }
}

// Phan 4: Sap xep mang theo thu tu tu thap den cao
void sapXepMSSV() {
    string temp;
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (danhsachMSSV[j] > danhsachMSSV[j + 1]) {
                temp = danhsachMSSV[j];
                danhsachMSSV[j] = danhsachMSSV[j + 1];
                danhsachMSSV[j + 1] = temp;
            }
        }
    }
}

// Phan 5: Tim dia chi cua phan tu chua MSSV lon nhat
void timDiaChiMax() {
    string* ptrArrayMSSV = danhsachMSSV;
    string* maxMSSV = danhsachMSSV;
    for (int i = 1; i < 5; ++i) {
        if (*ptrArrayMSSV < danhsachMSSV[i]) {
            maxMSSV = &danhsachMSSV[i];
        }
    }
    cout << "Dia chi cua phan tu chua MSSV lon nhat la: " << maxMSSV << endl;
    cout << "MSSV lon nhat la: " << *maxMSSV << endl;
}

// Ham main de kiem tra
int main() {
    nhapMSSV();
    inMSSV();

    string danhsachMSSV_truoc[5];
    for (int i = 0; i < 5; ++i) {
        danhsachMSSV_truoc[i] = danhsachMSSV[i];
    }

    sapXepMSSV();

    cout << "\nMang truoc khi sap xep:\n";
    inMSSV();

    cout << "\nMang sau khi sap xep:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Sinh vien " << i << ": " << danhsachMSSV[i] << endl;
    }

    cout << endl;
    timDiaChiMax();

    return 0;
}
