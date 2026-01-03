#include <iostream>

using namespace std;
void sumProduct(){
    int n;
    cin >> n;
    cout << "Enter size of Array" << endl;
    int arr[n];
    int sum = 0;
    int product = 1;

    cout << "Enter the numbers in the Array" << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];

    }
    for(int j = 0; j<n;j++){
        sum = sum + arr[j];
        
    }
    cout << "Sum of Array " << sum << endl ;
    for(int k = 0; k<n; k++){
        product = product * arr[k];
    }
    cout << "Product of Array "<<product;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sumProduct();

    

}