#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Numero de elementos: ";
    cin >> n;

    int arr[n];
    int temp;
    for (int i=0; i<n; i++){
        cin >> temp;
        arr[i]=temp;
    }
}