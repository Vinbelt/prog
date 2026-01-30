#include <iostream>
using namespace std;

const int N = 4;

int main() {
    int arr[N];
    /*Hay que tener en cuenta de que si no se dan valores al array se daran valores basura*/
    int min = arr[0];
    int max = arr[0];
    
    for (int i=0; i<N; i++){
        if (arr[i]<min){
            min = arr[i];
        }
        if (arr[i]>max){
            max = arr[i];
        }
    }

    cout << "Max: " << max << "  Min: " << min << endl;
}