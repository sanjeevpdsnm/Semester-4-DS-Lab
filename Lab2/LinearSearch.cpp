#include <iostream>
#include <vector>
using namespace std;

int main() {
    int target;
    int n;
    cout << "Size of array: ";
    cin >> n;
    vector<int> arr(n,0);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the elements to be searched: ";
    cin >> target;

    for(int i = 0; i < n; i++) {
        if(target == arr[i]) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    cout << "Not found in the array.";
    return 0;
}