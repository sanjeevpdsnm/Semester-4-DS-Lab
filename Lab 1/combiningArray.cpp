#include <iostream>
using namespace std;

int main() {
    int size1;
    int size2;
    cout << "Enter size of array1 : ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of array1:";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < size1; i++) {
        cout << "Array1 : " << arr1[i] << " ";
    }
    cout << endl;
    cout << "Enter size of array2 : ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of array2:";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    cout << endl;
    for (int i = 0; i < size2; i++) {
        cout << "Array2 : " << arr2[i] << " ";
    }
    cout << endl;
    
    int size3 = size1 + size2;
    int arr3[size3];
    
    for (int i = 0; i < size3; i++) {
        if(i < size1) {
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i - size1];
        }
    }
    cout << endl;
    for (int i = 0; i < size3; i++) {
        cout << "Final array : ";
        cout << arr3[i] << " ";
    }
    

}