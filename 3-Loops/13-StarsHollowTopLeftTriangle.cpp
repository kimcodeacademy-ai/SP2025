//
// Created by jakim on 12/6/2025.
/*
Од влез се внесува цел позитивен број n, така што n > 2.
 Со помош на ѕвездички, да се исцрта превртен празен правоаголен триаголник со висина и ширина n, како во примерот:

За n=5
*****
*  *
* *
**
*

Input: 20
Result
********************
*                 *
*                *
*               *
*              *
*             *
*            *
*           *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*

Process finished with exit code 0

 */
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "Nevaliden vlez" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
