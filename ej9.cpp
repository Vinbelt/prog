#include <iostream>

using namespace std;

int factorial(int n);

int main() {
    int i;
    cout << "Que factorial quieres?" << endl;
    cin >> i;
    cout << factorial(i) << endl;
}

int factorial(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}