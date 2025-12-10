/*
Да се напише програма во која во даден опсег на природни броеви [a,b],
ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2,
но НЕ се деливи со 3, е поголем од 0 и е делив со 7. На крај да се отпечати и бројот на вакви броеви.

1200 2000
1248
1284
1428
1482
1824
1842
Vkupno: 6

*/
#include <iostream>

using namespace std;

int sumaNaCifri(int broj) {
    int suma = 0;
    while (broj > 0) {
        suma += broj % 10;
        broj /= 10;
    }
    return suma;
}

int main() {
    int n;
    cin >> n;
    cout<<"Suma na cifrite na brojot: "<<n<<" e: "<<sumaNaCifri(n)<<endl;


}
