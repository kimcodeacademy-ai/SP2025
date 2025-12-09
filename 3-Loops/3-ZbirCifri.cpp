//
// Created by jakim on 12/6/2025.
/*
Да се напише програма во која во даден опсег на природни броеви [a,b],
ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2
е поголем од 0 и е делив со 4. На крај да се отпечати и бројот на вакви броеви.

For example:

Input: 17 29
Result
18
22
26
Vkupno: 3

*/
/*
Test cases:
17 29
18
22
26
Vkupno: 3

20 30
22
26
Vkupno: 2

17 18
18
Vkupno: 1

100 200
104
108
114
118
122
126
134
138
140
141
143
144
145
147
148
149
154
158
162
166
174
178
180
181
183
184
185
187
188
189
194
198
Vkupno: 32

10 20
14
18
Vkupno: 2

1 50
4
8
14
18
22
26
34
38
40
41
43
44
45
47
48
49
Vkupno: 16

45 89
45
47
48
49
54
58
62
66
74
78
80
81
83
84
85
87
88
89
Vkupno: 18
 */
//
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int counter = 0;
    for (int i = a; i <= b; i++) {
        int zbirParniCifri = 0;
        int broj = i;
        while (broj > 0) {
            //ako brojot e deliv so 2 znaci i poslednata cifra e deliva so 2
            if (broj % 2 == 0) {
                zbirParniCifri += broj % 10;
            }
            broj /= 10;
        }
        if (zbirParniCifri > 0 && zbirParniCifri % 4 == 0) {
            cout << i << endl;
            counter++;
        }
    }
    cout << "Vkupno: " << counter << endl;
}
