#include <iostream>
using namespace std;

const int N = 4;

int main() {
    int arr[N];
    /*Hay que tener en cuenta de que si no se dan valores al array se daran valores basura*/
    int sum = 0;
    
    for (int i=0; i<N; i++){
        sum += arr[i];
    }
    sum /= N;

    cout << "Media: " << sum <<endl;
}