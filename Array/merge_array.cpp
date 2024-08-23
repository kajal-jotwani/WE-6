#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){

    int j = 0, i = 0, k = 0;

    while(i < n1 && j < n2){
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    }

    while (i < n1) 
        arr3[k++] = arr1[i++]; 

    while (j < n2) 
        arr3[k++] = arr2[j++];
}

int main(){
    int array1[5] = {1, 3, 5, 7, 9};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int array2[5] = {2, 4, 6, 8, 10};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int array3[n1 + n2];

    merge(array1, array2, n1, n2, array3);

    cout << "The merged array is: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << array3[i] << " ";
    }

    return 0;
}
