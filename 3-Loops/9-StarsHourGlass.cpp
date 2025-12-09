//
// Created by jakim on 12/6/2025.
/*
Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5.
Со помош на знакот * да се исцрта песочен часовник, кој има основи со должина n, како што е во примерот подолу,
за n=5:
*****
 * *
  *
 * *
*****

Input: 9
Result:
*********
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*********
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
            if (i == 0 || i == n - 1 || i + j == n - 1 || i == j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
