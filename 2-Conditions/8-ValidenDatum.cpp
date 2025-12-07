//
// Created by jakim on 12/6/2025.
/*
Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG)
ќе испечати на стандарден излез порака DA или NE во зависност од тоа дали внесениот датум е правилен или не.
При одредување на валидноста на датумот во предвид да се земат сите фактори:
    • дали месецот е број помеѓу 1 и 12
    • дали денот одговара со бројот на денови во тој месец
    • доколку е 29.02. да се внимава дали станува збор за престапна година
        ◦ престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.
For example:
Input: 29 02 2140
Result: DA

Test cases:
29 02 2140
DA

02 03 2018
DA

29 02 2000
DA

32 01 2018
NE

29 02 2018
NE

02 13 2018
NE

30 02 2016
NE

30 05 2018
DA

31 06 2018
NE

29 02 2100
NE

 */
//
#include "iostream"

using namespace std;

int main() {
    int den, mesec, godina;
    cin>>den>>mesec>>godina;
    //meseci so 31 den - 1, 3, 5, 7, 8, 10, 12
    //meseci so 30 dena 4, 6, 9, 11
    //februari 28 (29 vo prestapna godina)
    if ((den > 0 && den < 29) && (mesec > 0 && mesec < 13)) {

        cout << "DA" << endl;

    } else if ((mesec == 1 || mesec == 3 || mesec == 5 || mesec == 7 || mesec == 8 || mesec == 10 || mesec == 12) &&
               (den > 0 && den <= 31)) {

        cout << "DA" << endl;

    } else if ((mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) && ((den > 0) && (den <= 30))) {

        cout << "DA" << endl;


    } else if ((mesec == 2) && ((den > 0) && (den <= 29)) &&
               (((godina % 4 == 0 || godina % 400 if (den > 0 && den < 29 && mesec > 0 && mesec < 13) {
            cout << "DA" << endl;
        }
        else if ((mesec == 1 || mesec == 3 || mesec == 5 || mesec == 7 || mesec == 8 || mesec == 10 || mesec == 12) &&
                 den > 0 && den <= 31) {
            cout << "DA" << endl;
        }
        else if ((mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) &&
                 den > 0 && den <= 30) {
            cout << "DA" << endl;
        }
        else if (mesec == 2 && den > 0 && den <= 29 &&
                 ((godina % 4 == 0 || godina % 400 == 0) && godina % 100 != 0 || den < 29)) {
            cout << "DA" << endl;
        }
        else if (mesec == 2 && den > 0 && den <= 29 && godina % 1000 == 0) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }

}