#include <iostream>

using namespace std;

const int N = 4;
int arr[N] = {3, 7, 6, 8};

bool check(int a[N]);
void print_arr(int a[N]);

int main() {
    int temp;
    int t = 0;

    print_arr(arr);

    while (!check(arr)){
        cout << "Swap " << t+1 << endl;
        for (int i=0; i<N; i++){
            if (i>0 && arr[i-1]>arr[i]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
    }

    print_arr(arr);
}

bool check(int a[N]){
    bool stat = true;
    for (int i=0; i<N; i++){
        if (i>0 && a[i-1]>a[i]){
            stat = false;
        }
    }
    return stat;
}

void print_arr(int a[N]){
    for (int i=0; i<N; i++){
        cout << " " << a[i];
    }
    cout << endl;
}