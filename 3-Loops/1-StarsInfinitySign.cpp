//
// Created by jakim on 12/6/2025.
/*
 * Задача 1
Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5.
Со помош на знакот * да се исцрта математичкиот симбол за бесконечност,
кој би се добил како во примерот подолу, за n=5:

*   *
** **
* * *
** **
*   *
For example:
Input 15
Result

*             *
**           **
* *         * *
*  *       *  *
*   *     *   *
*    *   *    *
*     * *     *
*      *      *
*     * *     *
*    *   *    *
*   *     *   *
*  *       *  *
* *         * *
**           **
*             *

*/

#include "iostream"

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
            if (j == 0 || j == n - 1 || i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}