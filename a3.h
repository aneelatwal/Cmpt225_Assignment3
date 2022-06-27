#include <iostream>
using std::cout;
using std::endl;


//Question 1
//PARAM: arr is array to print the Cartesian product of, n is size of arr
void cartesianProduct(int arr[], int n)
 {
    int i = 0;
    while (i < n) {
            int j = 0;
            while (j < n) {
                cout << "{" << arr[i] << "," << arr[j] << "}";
                j++;
                cout << " ";
            }

            cout << endl;
            i++;
    }
 }


 //Question 2
 