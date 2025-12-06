//
// Created by jakim on 12/4/2025.
/*
За даден број, проверете дали е 7-цифрен и ако е, испечате ги во посебен ред
секој од неговите цифри почнувајќи од првата, а потоа повторно во посебен ред нивната сума и производ.
Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".
For example:
Input: 1000000
Result:
1
0
0
0
0
0
0
1
0

 */
//
#include<iostream>
using namespace std;

int main(){
    int broj;
    cin>>broj;
    int prvaCifra, vtoraCifra, tretaCifra, cetvrtaCifra, pettaCifra, shestaCifra, sedmaCifra;
    if(broj < 10000000 && broj > 999999){
        cout<<"Brojot e 7 cifren"<<endl;
        prvaCifra = broj / 1000000;
        cout<<prvaCifra<<endl;
        vtoraCifra = broj / 100000 % 10;
        cout<<vtoraCifra<<endl;
        tretaCifra = broj / 10000 % 10;
        cout<<tretaCifra<<endl;
        cetvrtaCifra = broj /1000 %10;
        cout<<cetvrtaCifra<<endl;
        pettaCifra = broj / 100 % 10;
        cout<<pettaCifra<<endl;
        shestaCifra = broj / 10 % 10;
        cout<<shestaCifra<<endl;
        sedmaCifra = broj % 10;
        cout<<sedmaCifra<<endl;

        int suma;
        suma = prvaCifra + vtoraCifra + tretaCifra + cetvrtaCifra + pettaCifra + shestaCifra + sedmaCifra;

        int proizvod;
        proizvod = prvaCifra * vtoraCifra * tretaCifra * cetvrtaCifra * pettaCifra * shestaCifra * sedmaCifra;

        cout<<"Suma: "<<suma<<endl;
        cout<<"Proizvod: "<<proizvod<<endl;


    }
}
