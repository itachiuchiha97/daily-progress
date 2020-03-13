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

void BubbleSort(int A[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
            }
        }
    }

}


int main(){
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = 10;
    BubbleSort(A,n);
    printResults(A,n);
}