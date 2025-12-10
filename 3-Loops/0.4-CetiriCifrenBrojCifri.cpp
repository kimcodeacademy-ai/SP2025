//
// Created by jakim on 12/9/2025.
/*
Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај
кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.

4031 (4=0+3+1), 5131 (5=1+3+1)
 */
//
#include "iostream"

using namespace std;

int main() {
    for (int i = 1000; i < 10000; i++) {
        int prvaCifra, sumaCifri = 0;
        prvaCifra = i / 1000;
        int broj = i;
        while (broj > 9){
            sumaCifri += broj%10;
            broj /= 10;
        }
        if(prvaCifra == sumaCifri){
            cout<<i<<endl;
        }
    }
}

