#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Enter Size of the array: ";
    cin >> size;
    int k;
    cout << "Position of roatation: ";
    cin >> k;

    vector<int> arr(size);
    cout << "Enter the elements of an array :";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    k = k % size;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}