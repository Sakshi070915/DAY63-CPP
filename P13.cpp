/*Write a function that modifies the elements of an array by doubling their values.
 Use pass by reference to change the actual array.*/
 #include <iostream>
using namespace std;

// Function to double the elements of the array
void modifyArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2; // Double each element
    }
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Array declaration

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    modifyArray(arr, n); // Call the function to modify the array

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output modified array
    }
    cout << endl;

    return 0;
}
