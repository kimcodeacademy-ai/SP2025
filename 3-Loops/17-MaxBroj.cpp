//
// Created by jakim on 12/8/2025.
//
/*
Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура
ќе го определи бројот со максимална вредност. Програмата завршува ако се внесе невалидна репрезентација на број.

Test cases:
1 2 3 4 5 6 7 99 999 -15 0 -197
999
 */
#include "iostream"

using namespace std;

int main() {
    int broj;
    int maxBroj;
    //prviot broj go vnesuvame nadvor od ciklusot za da moze da go inicijalizirame maxBroj
    //ako maxBroj ne e inicijaliziran kje ima random vrednost od memorija pa nemoze da go sporeduvame so vnesenite broevi
    //bidejkji vrednosta koja ja ima ne e vnesena od nas i moze da e pogolema od site koi gi vnesuvame nie i da dobieme pogreshen rezultat
    if (cin >> broj) {
        maxBroj = broj;
    } else {
        cout << "Ne e vnesen cel broj!" << endl;
        return 0;
    }
    //vnesuvanje broevi se dodeka ne se vnese nesto sto ne e broj
    while (cin >> broj) {
        if (broj > maxBroj) {
            maxBroj = broj;
        }
    }
    cout << "Max broj: " << maxBroj << endl;
}