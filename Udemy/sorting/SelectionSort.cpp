#include <iostream>
using namespace std;

void printResults(int A[], int n){
    for(int i=0; i<n; i++){
        cout << A[i] << endl;
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int A[], int n){
    for(int i=0; i<n; i++){
        int k;
        for(int j=k=i; j<n; j++){
            if(A[j]<A[k]){
                 k = j;
            }
        }
        swap(&A[i], &A[k]);
    }

}

int main(){
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = 10;
    SelectionSort(A,n);
    printResults(A,n);

}