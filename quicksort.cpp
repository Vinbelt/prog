#include <iostream>
using namespace std;

void printarr(int n, int a[]);
void quicksort(int min, int max, int a[]);

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
    
	quicksort(0, N-1, arr);

	printarr(N, arr);
}


void printarr(int n, int a[]){
	for (int i=0; i<n; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
}

void quicksort(int min, int max, int a[]){
    int temp;
    
    if (min >= max){
        return;
    }

    int pivot;
    pivot = a[min];

    int p=min+1;
    for (int i=min+1; i<=max; i++){
        if (a[i] < pivot){
            temp = a[p];
            a[p] = a[i];
            a[i] = temp;
            p++;
        }
    }

    a[min] = a[p-1];
    a[p-1] = pivot;

    quicksort(min, p-1, a);
    quicksort(p+1, max, a);
}

