//
// Created by jakim on 12/9/2025.
/*
Да се напише програма која за даден природен број n ќе ја испечати сумата на цифрите на бројот.

123452
 */
//
#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    cout << "Sumata na cifrite na brojot e: " << suma << endl;

}