#include <iostream>
#include <cmath>
using namespace std;

struct SinhVien {
	string ten;
	double toan;
	double ly;
	double hoa;
	double dtb;
};
int main() {
	int N;
	cout<< "Nhap so luong sinh vien:  ";
	cin>> N;
	cin.ignore();
	
	SinhVien ds[N];
	for (int i = 0; i<N;i++) {
		cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        getline(cin, ds[i].ten);
        cout << "Diem Toan: ";
        cin >> ds[i].toan;
        cout << "Diem Ly: ";
        cin >> ds[i].ly;
        cout << "Diem Hoa: ";
        cin >> ds[i].hoa;
        cin.ignore(); 
        ds[i].dtb = (ds[i].toan + ds[i].ly + ds[i].hoa) / 3;
	}
	
	  cout << "\nDanh sach sinh vien:"<<endl;
	  // Danh sach sinh vien vua nhap
    for (int i = 0; i < N; i++) {
        cout << "Sinh vien " << i + 1 << ": " << ds[i].ten <<" "
             << "Toan: " << ds[i].toan << " "
             << "Ly: " << ds[i].ly<< " "
             << "Hoa: " << ds[i].hoa << endl;
    }
    // Sinh vien co diem trung binh>=8
    bool coSinhVien = false;
    for (int i = 0; i < N; i++) {
        if (ds[i].dtb >= 8) {
            coSinhVien = true;
             cout << "Nhung sinh vien co diem trung binh >=8 la: "<<endl;
            cout << "Ten: " << ds[i].ten<<" " << "DTB: " << ds[i].dtb << endl;
        } 
    }
    if (!coSinhVien) {
        cout << "Khong co sinh vien nao co diem trung binh >= 8.\n";
    }
    
    return 0;
}