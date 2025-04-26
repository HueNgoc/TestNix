#include <iostream>
#include <cmath>
using namespace std;
// d? quy
int soFibo(int n) {
	if(n<=1) 
		return n; 
	return soFibo(n-1) + soFibo(n-2);
}
int main() {
	int n;
    cout << "Nhap so n: ";
    cin >> n;
    // gi?i h?n 
	if(n> 30) cout<< "Khong tinh nua";
    else 
    cout << "So Fibonacci thu " << n << " la: " << soFibo(n) << endl;

    return 0;
}