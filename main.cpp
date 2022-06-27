#include "a3.h"

void sumSquareTest(); //EXAMPLE Test
void cartesianProductTest(); //Question 1 Test
void triangleTest(); //Question 2 Test


int main () {
    sumSquareTest();
    
    cartesianProductTest();
    triangleTest();

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
    cout << endl << "t(cartesianProduct): 4n^2+5n+2 = " << 4 * pow(n, 2) + 5 * n + 2;
    cout << endl << "--------------" << endl << endl;
}




//Question 2 Test
//**cost and cost function not equal, something wrong**
void triangleTest() {
    cout << "TRIANGLE TEST" << endl;
    int x = 10;
    int cost = 0;
    triangle(x, cost);
    cout << endl << "cost = " << cost;
    cout << endl << "t(triangle): 6n^2+10n+3 = " << 6 * pow(x, 2) + 10 * x + 3;
    cout << endl << "--------------" << endl << endl;
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
       cout << endl << "--------------" << endl << endl;
}