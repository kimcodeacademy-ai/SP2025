//
// Created by jakim on 12/6/2025.
/*
Од стандарден влез се внесуваат два цели броеви A и P.

Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A]
 за коишто важи дека сумата на нивните цифри изнесува P проценти од самиот број.

Ако нема такви броеви во интервалот, да се испечати порака NEMA.

For example:

Input: 100000 25
Result
48
36
24
12
*/
/*
Test cases:
100000 25
48
36
24
12

10000 28
25

1000 2
450

1000 1
900
800
700
600
500

1000 9
NEMA

150000 5
180

100 10
90
80
70
60
50

10000 7
NEMA

10000 40
15

1000 50
18

10000 8
NEMA

1000 3
NEMA

10900 4
375
225
150

10000 6
NEMA

10000 20
45


 */
//
#include <iostream>

using namespace std;

int main() {
    int a, p;
    cin >> a >> p;
    int counter = 0;
    //opagjacki redosled znaci pocnuvame od brojot A i se dvizime kon nula
    for (int i = a; i > 0; i--) {
        int sumaCifri = 0;
        int broj = i;
        //se dodeka brojot e pogolem od 0 ja zemame poslednata cifra(broj%10),
        //ja dodavame na sumata za brojot, i ja kratime cifrata od brojot(broj/10)
        while (broj > 0) {
            sumaCifri += broj % 10;
            broj /= 10;
        }
        if (i * (p / 100.0) == sumaCifri) {
            cout << i << endl;
            counter++;
            if (counter == 5) {
                break;
            }
        }

    }
    return 0;
}
