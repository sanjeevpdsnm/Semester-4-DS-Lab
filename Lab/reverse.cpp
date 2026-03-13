#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size/2; i++) {
        swap(arr[i], arr[size -1 - i]);
    }
    for( int i = 0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
}

