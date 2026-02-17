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
	
	//Algorithm runtime O(n²)
	int min, posmenor, temp;
	for (int i=0; i<N; i++){
		min = arr[i], posmenor = i;
		
		//Check for minor
		for (int j=i; j<N; j++){
			if (min > arr[j]){
				min = arr[j], posmenor = j;
				cout << min << " " << posmenor << endl;
			}
		}
		
		//Swap
		temp = arr[i];
		arr[i] = arr[posmenor];
		arr[posmenor] = temp;
		
	}

	printarr(N, arr);
}


void printarr(int n, int a[]){
	for (int i=0; i<n; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
}
