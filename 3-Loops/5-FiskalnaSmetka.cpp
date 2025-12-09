//
// Created by jakim on 12/6/2025.
/*
Да се напише код којшто од стандарден влез ќе чита информации за една фискална сметка на следниов начин:

напрво се чита број N
потоа ќе читаат уште N парови на вредности од следниот формат: износ тип_на_данаок
пр. 5 100 А 50 B 66 A 77 B 88 V
каде што првата вредност во парот изнесува износот на некој купен артикал,
додека пак втората вредност е карактер (A, B, V) што означува каков тип на данок на
додадена вредност се пресметува за тој артикал:

А означува 18%
B означува 5%
V означува 0%
Да се испечати на стандарден излез колку ќе изнесува повратокот на ДДВ за фискалната сметка што е вчитана
од стандарден влез. Повратокот на ДДВ се пресметува како 15% од вкупно наплатеното ДДВ.


Input: 5 100 A 50 B 66 A 77 B 88 V
Result: Vkupno povrat na DDV: 5.43
 */
/*
Test cases:
5 100 A 50 B 66 A 77 B 88 V
Total tax return is: 5.43

1 100 A
Total tax return is: 2.70

2 100 A 100 B
Total tax return is: 3.45

5 100 A 2000 A 300 B 5000 V 7500 A
Total tax return is: 261.45

12 3946 V 1384 A 1384 B 1384 V 2345 A 2345 B 2345 V 2842 A 2842 B 2842 V 558 B 558 V
Total tax return is: 230.88

3 100 V 50 V 7888 V
Total tax return is: 0.00

12 1626 B 1626 V 1785 A 1785 B 1785 V 1938 V 1733 V 1137 B 1137 V 1832 A 1832 B 1832 V
Total tax return is: 145.51
 */
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    float vkupnoDanok = 0;
    for (int i = 0; i < n; ++i) {
        float iznos;
        char tipNaDanok;
        cin >> iznos >> tipNaDanok;
        if (tipNaDanok == 'A') {
            vkupnoDanok += iznos * 0.18;  // vrednosta na brojot pomnozen so 0.18 i dava 18% od toj broj
        } else if (tipNaDanok == 'B') {
            vkupnoDanok += iznos * 0.05;
        } else if (tipNaDanok == 'V') {
            vkupnoDanok += iznos * 0.0;
        } else {
            cout << "Nevaliden tip na danok!" << endl;
            return 0;
        }
    }
    /// if we want to print exactly 2 decimal points
    //cout << fixed << setprecision(2);
    cout << "Vkupno povrat na DDV: " << vkupnoDanok * 0.15 << endl;


}
