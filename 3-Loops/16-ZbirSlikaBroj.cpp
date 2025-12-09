//
// Created by jakim on 12/6/2025.
/*
Да се напише програма во која во даден опсег на природни броеви [m,n],
ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот
на бројот со неговата слика(број кој ги има истите цифри, но во обратен редослед)
е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.

Input
1 19
1
2
3
4
5
6
7
8
9
10
11
Result: Vkupno: 11
 */
/*
Test cases:
1 19
1
2
3
4
5
6
7
8
9
10
11
Vkupno: 11

10 20
10
11
20
Vkupno: 3

17 28
20
21
22
Vkupno: 3

17 57
20
21
22
30
31
32
33
40
41
42
43
44
50
51
52
53
54
55
Vkupno: 18

25 68
30
31
32
33
40
41
42
43
44
50
51
52
53
54
55
60
61
62
63
64
65
66
Vkupno: 22

12 13
Vkupno: 0
17 79
20
21
22
30
31
32
33
40
41
42
43
44
50
51
52
53
54
55
60
61
62
63
64
65
66
70
71
72
73
74
75
76
77
Vkupno: 33

41 47
41
42
43
44
Vkupno: 4
 */
//
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        int broj, obratenBroj;
        broj = i;
        obratenBroj = 0;
        //poslednata cifra se dodava na obratniot broj, potoa obratniot broj se mnozi so 10
        // za da koga kje ja zememe slednata cifra da se "zalepi" na krajot na brojot
        //primer broj 1234 -> 1234 % 10 = 4 -> obratenBroj +=4 -> obratenBroj *=10 -> 40(so dodavanje na sledna cifra kje se smesti na krajot na brojot)
        // -> 1234 /=10 -> 123 % 10 =3 obratenBroj +=3 (43) -> 43*=10 ....
        while (broj > 0) {
            obratenBroj += broj % 10;
            broj /= 10;
            obratenBroj *= 10;
        }
        //na kraj bi se dobilo 43210 bidejkji se mnozi na 10 po slepuvanje na cifra za nego
        //no bidejkji nema povekje cifri ja trgame nulata so delenje na brojot so 10
        obratenBroj /= 10;
        if (i + obratenBroj <= i + i) {
            cout << i << endl;
        }
    }
}
