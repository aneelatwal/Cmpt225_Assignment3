#include "a3.h"
#include <cmath>

void sumSquareTest(); //EXAMPLE Test
void cartesianProductTest(); //Question 1 Test
void triangleTest(); //Question 2 Test

void ssortTest(); //Question 4 Test
void patternTest(); //Question 5 Test

void powTest(); //Question 7 Test


int main () {
    sumSquareTest();

    cartesianProductTest();
    triangleTest();

    ssortTest();
    patternTest();

    powTest();

    return 0;
}



//Question 1 Test
void cartesianProductTest() {
    cout << "CARTESIAN PRODUCT TEST" << endl;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 10;
    int cost = 0;
    cartesianProduct(arr, n, cost);
    cout << endl << "cost = " << cost;
    cout << endl << "t(cartesianProduct): 4n^2+5n+2 = " << 4 * std::pow(n, 2) + 5 * n + 2;
    cout << endl << "--------------------------------------------------------" << endl << endl;
}




//Question 2 Test
//**cost and cost function not equal, something wrong**
void triangleTest() {
    cout << "TRIANGLE TEST" << endl;
    int x = 10;
    int cost = 0;
    triangle(x, cost);
    cout << endl << "cost = " << cost;
    cout << endl << "t(triangle): 6n(n-1)+10n+3 = " << 3 * std::pow(x,3) + 3 * std::pow(x,2) + 10 * x + 3; //**this line needs to be fixed**
    cout << endl << "--------------------------------------------------------" << endl << endl;
}













//Question 4 Test
void ssortTest() {
    cout << "SSORT TEST" << endl;
    int arr[] = { 10,2,3,5,4,8,7,6,9,1 };
    int n = 10;
    int i = 0;
    int cost = 0;
    ssort(arr, n, i, cost);
    for (int i = 0; i < n; i ++) {
        cout << endl << arr[i];
    }
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(ssort): func = " << "TBD";
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//Question 5 Test
void patternTest() {
    cout << "PATTERN TEST" << endl;
    int n = 8;
    int i = 0;
    int cost = 0;
    pattern(n, i, cost);
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(ssort): func = " << "TBD";
    cout << endl << "--------------------------------------------------------" << endl << endl;
}
















//Question 7 Test
void powTest() {
    cout << "POW TEST" << endl;
    int base = 2;
    int exp = 3;
    int cost = 0;
    cout << "power = " << pow(base, exp, cost);
    cout << endl << endl << "cost = " << cost;
    cout << endl << "t(pow): func = " << "TBD";
    cout << endl << "--------------------------------------------------------" << endl << endl;
}





//EXAMPLE Test
void sumSquareTest()
{
       cout << "SUM OF SQUARES TEST" << endl;
       int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
       int n = 10;
       int cost = 0;
       cout << "sum of squares = " << sumSquares(arr, n, cost);
       cout << endl << "cost = " << cost;
       cout << endl << "t(sumSquares): 3n+3 = " << 3 * n + 3;
       cout << endl << "--------------------------------------------------------" << endl << endl;
}