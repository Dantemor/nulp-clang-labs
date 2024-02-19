//
//  main.cpp
//  lab1bartoshko
//
//  Created by Santa Morina on 19.02.2024.
//

#include <iostream>

using namespace std;

int func(int* arr, int length);
double func(double * arr, int length);
void bubbleSort(int arr[], int n);
void bubbleSort(double arr[], int n);

int main() {
    int n;
    cout<<"Введіть кількість елементів масиву типу int: ";
    cin>>n;
    int arrInt[n];
    for(int i=0; i<n; i++){
        cout<<"Введіть "<<i+1<<" елемент масиву: ";
        cin>>arrInt[i];
    }
    int d;
    cout<<"Введіть кількість елементів масиву типу double: ";
    cin>>d;
    double arrDouble[d];
    for(int i=0; i<d; i++){
        cout<<"Введіть "<<i+1<<" елемент масиву: ";
        cin>>arrDouble[i];
    }
    func(arrInt, n);
    func(arrDouble, d);
    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void bubbleSort(double arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int func(int* arr, int length){
    int max;
    bubbleSort(arr, length);
    cout<<"Найбільше число масиву типу int: "<<arr[length-1]<<endl;
    return max=arr[length-1];
}

double func(double * arr, int length){
    int max;
    bubbleSort(arr, length);
    cout<<"Найбільше число масиву типу double: "<<arr[length-1]<<endl;
    return max=arr[length-1];
}
