#include <iostream>
#include <set>
using namespace std;
int main() {
	//Nhap phan tu cho mang
	int N;
	cout << "Nhap so luong phan tu mang: ";
	cin>>N;
	int arr[N];
	for(int i =0 ; i<N;i++ ) {
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>> arr[i];
	}
	// Dung set de loai cac gia tri trung lap
	set<int> uniqueValues;
    for (int i = 0; i < N; i++) {
    	// Chèn vào set, tự động loại bỏ các giá trị trùng
        uniqueValues.insert(arr[i]); 
    }
    // In ra số lượng giá trị khác biệt
    cout << "So luong gia tri khac biet trong mang la: " << uniqueValues.size() << endl;

}