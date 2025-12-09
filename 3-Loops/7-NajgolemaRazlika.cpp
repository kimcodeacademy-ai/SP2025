//
// Created by jakim on 12/6/2025.
/*
Од стандарден влез се чита еден природен број n,
 по што се читаат n цели броеви. Да се најде најголемата
 разлика помеѓу два броја, од вака внесените броеви.

For example:

Input:
5
1 2 -1 -7 6
Result: Najgolema razlika: 13
 */
/*
Test cases:
5
1 2 -1 -7 6
Najgolema razlika: 13

2
1 20
Najgolema razlika: 19

2
147 1
Najgolema razlika: 146

3
-7 5 -17
Najgolema razlika: 22

5
100 51 25 12 9
Najgolema razlika: 91

10
1 2 3 -50 4 5 6 7 8 100
Najgolema razlika: 150

7
15 18 25 36 47 11 34
Najgolema razlika: 36

10
1 2 3 4 5 6 7 8 9 10
Najgolema razlika: 9

10
1 1 1 1 1 1 1 1 1 1
Najgolema razlika: 0
 */
//
#include <iostream>

using namespace std;

int main() {
    //najgolema razlika kje bide razlikata megju minimalniot i maksimalniot broj
    int n, min, max, broj;
    cin >> n;
    //prviot broj se vnesuva pred ciklusot za dodeluvanje inicijalna vrednost na min i max
    if (n > 0) {
        cin >> broj;
        min = broj;
        max = broj;
    } else {
        return 0;
    }
    //prviot broj e procitan pa ciklusot pocnuva od 1 namesto 0
    for (int i = 1; i < n; ++i) {
        cin >> broj;
        if (broj < min) {
            min = broj;
        }
        if (broj > max) {
            max = broj;
        }
    }
    cout << "Najgolema razlika: " << max - min << endl;

}
