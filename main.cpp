#include "a3.h"
#include <cmath>

void cartesianProductTest(); //Question 1 Test
void triangleTest(); //Question 2 Test
void matrixSelfMultiplyTest(); //Question 3 Test
void ssortTest(); //Question 4 Test
void patternTest(); //Question 5 Test
void lsearchTest(); //Question 6 Test
void powTest(); //Question 7 Test


int main () {
    cartesianProductTest(); //q1
    triangleTest(); //q2
    matrixSelfMultiplyTest(); //q3
    ssortTest(); //q4
    patternTest(); //q5
    lsearchTest(); //q6
    powTest(); //q7

    return 0;
}



//Question 1 Test
void cartesianProductTest() {
    cout << "Q1 -- CARTESIAN PRODUCT TEST" << endl;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 10;
    int cost = 0;
    cartesianProduct(arr, n, cost);
    cout << endl << "cost = " << cost;
    cout << endl << "t(cartesianProduct): 4n^2+5n+2 = " << 4 * std::pow(n, 2) + 5 * n + 2;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 2 Test
void triangleTest() {
    cout << "Q2 -- TRIANGLE TEST" << endl;
    int x = 10;
    int cost = 0;
    triangle(x, cost);
    cout << endl << "cost = " << cost;
    cout << endl << "t(triangle): 3n^2+13n+1 = " << 3 * std::pow(x,2) + 13 * x + 3; //**this line needs to be fixed**
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 3 Test
void matrixSelfMultiplyTest() {
    cout << "Q3 -- MATRIX SELF MULTIPLY TEST" << endl;
    int rows = 5;
    int m[] = { 10,2,3,5,4,8,7,6,9,1 };
    // int* matrix = *m;
    int cost = 0;
    cout << "result = " << *matrixSelfMultiply(m, rows, cost);
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(matrixSelfMultiply): 5n^3+7n^2+4n+4 = " << 5 * std::pow(rows,3) + 7 * std::pow(rows,2) + 4 * rows + 4;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 4 Test
void ssortTest() {
    cout << "Q4 -- SSORT TEST" << endl;
    int arr[] = { 9,8,7,6,5,4,3,2,1 };
    int n = 9;
    int i = 0;
    int cost = 0;
    ssort(arr, n, i, cost);
    for (int i = 0; i < n; i ++) {
        cout << endl << arr[i];
    }
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(ssort): (7/4)n^2 + (11/2)n - 6 = " << (7 * std::pow(n,2))/4 + (11 * n)/2 - 6;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 5 Test
void patternTest() {
    cout << "Q5 -- PATTERN TEST" << endl;
    int n = 8;
    int i = 0;
    int cost = 0;
    pattern(n, i, cost);
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(pattern): 3nlog(n)+23n-9 = " << (3 * n * log2(n)) + 23 * n - 9;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 6 Test
void lsearchTest() {
    cout << "Q6 -- LINEAR SEARCH TEST" << endl;
       int arr[] = { 1,2,3,4,5 };
       unsigned int len = 5;
       int target = 5;
       int cost = 0;
       cout << "linear search = " << lsearch(arr, len, target, cost);
       cout << endl << "cost = " << cost;
       cout << endl << "t(lsearch) upper bound: 12(2^(n-2))-4 for n >= 2 = " << 12 * std::pow(2,(len-2)) - 4;
       cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 7 Test
void powTest() {
    cout << "Q7 -- POW TEST" << endl;
    int base = 4;
    int exp = 4;
    int cost = 0;
    cout << "power = " << pow(base, exp, cost);
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(pow) upper bound: 4logn+log(n+1)+6 = " << (4 * log2(exp)) + (log2(exp+1)) + 6;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}