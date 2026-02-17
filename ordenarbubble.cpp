#include <iostream>
using namespace std;

void printarr(int n, int a[]);

int main(void){
	int N;
	cout << "Numeros: ";
	cin >> N;
	cout << endl;

	int arr[N];
	
	for (int i=0; i<N; i++){
		cout << "N" << i+1 << " >> ";
		cin >> arr[i];
	}
	
	printarr(N, arr);
	
	//Algorithm runtime O(n²) Ω(1)
    int temp;
    bool cambio;
	do{
        cambio = false;
        for (int i=1; i<N; i++){
            if (arr[i-1] > arr[i]){
                temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                cambio = true;
                
            }
        }
    } while (cambio);
	

	printarr(N, arr);
}


void printarr(int n, int a[]){
	for (int i=0; i<n; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
}

