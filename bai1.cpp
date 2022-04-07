//Phần A
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Nhap so n = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to\n";
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " chinh la so nguyen to\n";
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
}

//Phần B
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int soTemp;
    int tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    soTemp = n;
    while (soTemp != 0) {
        tong += soTemp % 10;
        soTemp /= 10;
    }
    cout << "Tong cac chu so cua so " << n << " la " << tong << endl;
    return 0;
}

//Phần C
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n;
    cout << "Nhap so n = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to\n";
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to\n";
        int soTemp;
    	int tong = 0;
    	soTemp = n;
    	while (soTemp != 0) {
        	tong += soTemp % 10;
        	soTemp /= 10;
   		}
    	cout << "Tong cac chu so cua so " << n << " la " << tong << endl;
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
}
