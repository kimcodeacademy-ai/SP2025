//
// Created by jakim on 12/6/2025.
/*
Продолжение на претходната задача(5-FiskalnaSmetka.cpp):

Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто
ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.

На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки.
На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ,
како и повратокот на ДДВ за таа сметка.

Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари и
за истите да се испечати соодветна порака, како во тест примерите.

For example:

Input:
11
4 847 B 1811 B 5447 A 971 B
10 4501 A 2615 V 4001 V 6473 A 4214 A 3240 V 2968 A 6642 V 5967 A 2149 V
1 4214 V
10 192 B 1923 A 6749 A 3683 B 4056 B 4246 A 4082 B 5990 B 1315 B 6479 B
4 4098 B 4924 A 913 A 714 B
8 645 B 1307 A 4474 B 4317 V 6182 V 1212 V 3937 V 5596 V
5 384 B 1838 V 2804 V 2634 B 5537 B
4 834 B 2923 B 3070 A 193 A
10 3469 A 3479 A 1385 V 5850 B 2775 V 1678 A 3446 B 702 V 3635 V 3599 V
10 6450 V 2452 B 4784 B 3779 A 3020 V 248 A 3569 B 1015 V 2172 B 2255 A
10 4437 A 6551 A 4571 V 2767 B 6745 B 3337 B 2357 B 5045 A 2831 V 905 B
Result:
Vkupno povrat na DDV:  174.29
Sumata 42770 e pogolema od 30000
Vkupno povrat na DDV:  0.00
Sumata 38715 e pogolema od 30000
Vkupno povrat na DDV:  193.69
Vkupno povrat na DDV:  73.68
Vkupno povrat na DDV:  64.16
Vkupno povrat na DDV:  116.28
Sumata 30018 e pogolema od 30000
Vkupno povrat na DDV:  266.94
Sumata 39546 e pogolema od 30000
Max suma za smetka: 29744. Max povrat na danok: 266.94
 */
//
#include <iostream>

using namespace std;

int main() {
    //m - broj na fiskalni smetki, n-broj na artikli vo fiskalna smetka
    int m, n;
    cin >> m;
    //treba da ja ispecatime sumata za smetkata so najgolem povrat na ddv
    int maxSuma = 0;
    float maxPovrat = 0;
    //prviot ciklus e za kolku fiskalni smetki kje chitame
    for (int a = 0; a < m; a++) {
        cin >> n;
        float vkupnoDanok = 0, vkupnoSmetka = 0;
        //chitanje na artikli od sekoja fiskalna smetka
        for (int i = 0; i < n; ++i) {
            float iznos;
            char tipNaDanok;
            cin >> iznos >> tipNaDanok;
            vkupnoSmetka += iznos;
            if (tipNaDanok == 'A') {
                vkupnoDanok += iznos * 0.18;
            } else if (tipNaDanok == 'B') {
                vkupnoDanok += iznos * 0.05;
            } else if (tipNaDanok == 'V') {
                vkupnoDanok += iznos * 0.0;
            } else {
                cout << "Nevaliden tip na danok!" << endl;
                return 0;
            }
        }
        //smetkite so iznos nad 30000 se ignoriraat
        if (vkupnoSmetka > 30000) {
            cout << "Sumata " << vkupnoSmetka << " e pogolema od 30000" << endl;
        } else {
            cout << "Vkupno povrat na DDV: " << vkupnoDanok * 0.15 << endl;
            //ako tekovnata smetka ima pogolem povrat na ddv od maksimalnata vrednost togas taa smetka e sega max
            if (vkupnoDanok > maxPovrat) {
                maxPovrat = vkupnoDanok * 0.15;
                maxSuma = vkupnoSmetka;
            }
        }

    }
    cout << "Max suma za smetka: " << maxSuma << ". Max povrat na danok: " << maxPovrat << endl;

    /// if we want to print exactly 2 decimal points
    //cout << fixed << setprecision(2);

}
