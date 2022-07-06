// Aneel Atwal | June 27, 2022

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


//function declarations
void cartesianProduct(int arr[], int n, int & ops); //Question 1
void triangle(int x, int & ops); //Question 2
int* matrixSelfMultiply(int* m, int rows, int & ops); //Question 3
int rcIndex(int r, int c, int columns, int & ops); //Question 3
void ssort(int arr[], int n, int i, int & ops); //Question 4
void pattern(int n, int i, int & ops); //Question 5
int lsearch(int arr[], unsigned int len, int target, int & ops); //Question 6
unsigned pow(unsigned int base, unsigned int exp, int & ops); //Question 7






//Question 1
//PARAM: arr is array to print the Cartesian product of, n is size of arr
void cartesianProduct(int arr[], int n, int & ops)
 {
    int i = 0;
    ops = 1; //initializes cost for the first statement
    while (i < n) {
            int j = 0;
            ops += 2; //while comparison and above line
            while (j < n) {
                cout << "{" << arr[i] << "," << arr[j] << "}";
                j++;
                cout << " ";
                ops += 4; //while comparison, above 3 lines
            }

            cout << endl;
            i++;
            ops += 3; //terminating while comparison, above 2 lines
    }
    ops++; //terminating while comparison
 }





 //Question 2
 void triangle(int x, int & ops)
{
    int i = 0;
    ops = 1; //initializes cost for the first statement
    while (i < x) {
            int j = 0;
            ops += 2; //while comparison and above line
            while (j <= i) {
                    cout << j << " ";
                    j++;
                    ops += 3; //while comparison, above 2 lines
            }

            cout << endl;
            i++;
            ops += 3; //terminating while comparison, above 2 lines
    }
    ops++; //terminating while comparison
    while (i > 0) {
            i--;
            int j = 0;
            ops += 3; //while comparison, above 2 lines
            while (j <= i) {
                    cout << j << " ";
                    j++;
                    ops += 3; //while comparison, above 2 lines
            }
            cout << endl;
            ops += 2; //terminating while comparison and above line
    }
    ops++; //terminating while comparison
}





//Question 3
// PRE: m represents a square matrix of size rows * rows
// PARAM: rows represents the number of both rows and columns
// POST: Returns a pointer to an array (matrix) of the same size as m
// NOTE: values are indexed r0c0,r0c1,…,r0cn-1,r1c0,…
int* matrixSelfMultiply(int* m, int rows, int & ops)
{
       // Create result array
       int columns = rows;
       int* result = new int[rows * columns];
       int r = 0;
       ops += 3; //initialize cost for first 3 statements

       while (r < rows) {
              int c = 0;
              ops += 2; //while comparison and above line
              while (c < columns) { //columns = rows
                     int next = 0;
                     int iNext = 0;
                     ops += 3; //while comparison, above 2 lines

                     while (iNext < rows) {
                           next += m[rcIndex(r, iNext, columns, ops)] * m[rcIndex(iNext, c, columns, ops)];
                           iNext++;
                           ops += 3; //while comparison, above 2 lines
                     }

                     result[rcIndex(r, c, columns, ops)] = next;
                     c++;
                     ops += 3; //terminate while comparison, above 2 lines
              } 
              r++;
              ops += 2; //terminate while comparison and above line
       }
       ops++; //terminate while comparison
       return result;
}
// Returns the index of a 1d array representing a matrix
// given row (r) and column (c) values
int rcIndex(int r, int c, int columns, int & ops)
{
    ops++; //below line
    return r * columns + c;
}





//Question 4
// PARAM: arr is array to be sorted, n is size of array, i should initially = 0
void ssort(int arr[], int n, int i, int & ops)
{
    ops++; //if comparison
    if (i < n-1) {
        // Find and swap smallest remaining
        int next = i + 1;
        int smallest = i;
        ops += 2; //above 2 lines

        while (next < n) {
            ops += 2; //while comparison and if comparison
            if (arr[next] < arr[smallest]) {
                smallest = next;
                ops++; //above line
            }
            next++;
            ops++; //incrementing next
        }

        // Swap i with smallest
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        ops += 4; //terminate while comparison, above 3 lines
        ssort(arr, n, i + 1, ops);
    }
}





//Question 5
// PRE: n is a power of 2 greater than zero.
// PRE: Initial call should be to i = 0
// e.g. pattern(8, 0)
void pattern(int n, int i, int & ops)
{
    ops++; //if comparison
    if (n > 0) {
        pattern(n/2, i, ops);
        // Print i spaces
        cout << string(i, ' ');
        ops += 4; //above line (calling string constructor costs 3)

        // A loop to print n asterisks, each one followed by a space
        int ast = 0;
        ops++; //above line
        while (ast < n) {
            cout << "* ";
            ast++;
            ops += 3; //while comparison, above 2 lines
        }

        cout << endl;
        i += n;
        ops += 3; //terminate while comparison, above 2 lines
        pattern(n / 2, i, ops);
    }
}





//Question 6
// Desc: Linear search.  Reports position if found, else -1
// Post:  Elements unchanged
int lsearch(int arr[], unsigned int len, int target, int & ops) {
    ops++; //if comparison
    if (len == 0) return -1;
    ops++; //if comparison
    if (arr[0] == target) return 0;
    ops++; //if comparison
    if (lsearch(arr+1, len-1, target, ops) == -1) {
        return -1;
    } else {
        ops++; //below line
        return 1 + lsearch(arr+1, len-1, target, ops);
    }
} // lsearch





//Question 7
unsigned pow(unsigned int base, unsigned int exp, int & ops) {
    unsigned int ret = 1;
    ops = 1; //initializes cost for the first statement
    while (exp > 0) {
        ops += 2; //while comparison and if comparison
        if (exp & 1) {
            ret *= base;
            ops++; //above line
        }
        exp >>= 1;
        base = base * base;
        ops += 2; //while comparison, if comparison, above 2 lines
    }
    ops++; //terminate while comparison
    return ret;
} // pow


























//EXAMPLE
//**** to be deleted for final submission ****
int sumSquares(int arr[], int n, int & ops)
{
    int i = 0;
    int sum = 0;
    ops = 2; //initializes cost for the first two statements
    while (i < n) {
            sum += arr[i] * arr[i]; //counts as one operation
            i++;
            ops += 3; //while comparison and above two lines
    }
    ops++; //terminating while comparison
    return sum; //not included in count
}