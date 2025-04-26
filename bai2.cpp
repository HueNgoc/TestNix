#include <iostream>
#include <cmath>
using namespace std;
// check
int soLonNhatchia(int arr[], int n) {
	int maxChiaHetCho3 = -1e9;
	bool find = false;
	for(int i = 0 ; i<n; i++) {
		if(arr[i]%3 == 0) {
			if (!find || (arr[i] > maxChiaHetCho3)) {
                maxChiaHetCho3 = arr[i];
                find = true;
            }
		}
	}
	// tìm 
	if (find)
	return maxChiaHetCho3;
	else 
	return -1;
}
int main() {
	//Nhập
	int N;
	cout<< "Nhap vao N so nguyen: ";
	cin>> N;
	int arr[N];
	for (int i = 0; i<N; i++) {
		cout << "Nhap vao phan tu thu "<<i<<": ";
		cin>> arr[i];
	}
	// gọi hàm
	int result = soLonNhatchia(arr, N);
	  if (result != -1) {
        cout << "So lon nhat chia het cho 3 la: " << result << endl;
    } else {
        cout << "Khong co";
    }
	return 0;
}