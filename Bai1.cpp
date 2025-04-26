#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool soNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
	//Nhập
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;
    // check và in
	if (N<=2) {
		cout << "Khong co so nguyen to";
	} else {
		  cout << "Cac so nguyen to nho hon " << N << " la:";
    for (int i = 2; i < N; i++) {
        if (soNguyenTo(i)) {
            cout << i << " ";
        } 
    }
	}
  
    return 0;
}
