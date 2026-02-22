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
    
    if (max - min <= 1){
        if (a[max]<a[min]){
            temp = a[max];
            a[max] = a[min];
            a[min] = temp;
        }
        return;
    }

    int pivot;
    pivot = a[min];

    int p=min;
    for (int i=min; i<=max; i++){
        if (a[i] < pivot){
            temp = a[p];
            a[p] = a[i];
            a[i] = temp;
            p++;
        }
    }

    if (p == min){
        return;
    }

    quicksort(min, p-1, a);
    quicksort(p, max, a);
}

