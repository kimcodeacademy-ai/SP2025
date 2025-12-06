//
// Created by jakim on 12/6/2025.
/*
Да се напише програма која за петцифрен број прочитан од стандарден влез ќе
проверува дали е палиндром. Ако бројот е палиндром, на екран треба да се испечати пораката "Palindrom",
а во спротивно - "Ne e palindrom". Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".
*Палиндром е број кој се чита исто од десно кон лево и од лево кон десно
For example:
Input: 12321
Result
Palindrom

Input: 55545
Result
Ne e palindrom
 */
//
#include "iostream"
using namespace std;

int main(){
    int broj;
    cin>>broj;
    if(broj < 10000 || broj > 99999){
        cout<<"Nevaliden vlez"<<endl;
    } else{
        int prvaCifra, vtoraCifra, tretaCifra, cetvrtaCifra, pettaCifra;
        prvaCifra = broj / 10000;
        vtoraCifra = broj / 1000 % 10;
        tretaCifra = broj / 100 % 10;
        cetvrtaCifra = broj / 10 % 10;
        pettaCifra = broj % 10;
        if(prvaCifra == pettaCifra && vtoraCifra == cetvrtaCifra){
            cout<<"Palindrom"<<endl;
        } else{
            cout<<"Ne e palindrom"<<endl;
        }
    }
}