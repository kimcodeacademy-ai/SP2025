//
// Created by jakim on 12/4/2025.
/*
Да се напише програма која што проверува дали една квадратна равенка има реални решенија и истите ги пресметува.
Една квадратна равенка од облик aх2+ bх + c = 0 има две различни реални решенија доколку вредноста на изразот b2 - 4ас
е поголема од 0. Доколку вредноста на изразот е 0, равенката има едно двојно реално решение, а
доколку изразот е помал од 0 равенката нема реални решенија.
Влезот на програмата се коефициентите a,b и c на равенката.

Доколку равенката има две различни решенија потребно е на излезот да се испише:
 "Reshenija na ravenkata se: " и да се наведат решенијата одвоени со сврзникот "i" .
Доколку равенката има едно решение потребно е да се испечати: "Dvojno reshenie na ravenkata e: " и да се наведе решението.
Доколку равенката нема решение потребно е да се испечати: "Ravenkata nema realni reshenija".
For example:
Input 1 2 1
Result

Dvojno reshenie na ravenkata e: -1.00

 */
//
#include "iostream"
#include "cmath"
using namespace std;


int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(b * b - 4 * a * c < 0){
        cout<<"Nema realni reshenija"<<endl;
    }
    else if(b * b - 4 * a * c == 0){
        float reshenie;
        reshenie = (float)(b * (-1.0) + sqrt(b * b - 4.0 * a * c)) / 2*a;
        cout<<"Dvojno reshenie na ravenkata e: "<<reshenie<<endl;
    } else{
        float reshenie1, reshenie2;

        reshenie1 = (float)(b * (-1.0) + sqrt(b * b - 4.0 * a * c)) / 2*a;
        reshenie2 = (float)(b * (-1.0) - sqrt(b * b - 4.0 * a * c)) / 2*a;
        cout<<"Reshenija na ravenkata se: "<<reshenie1<<" "<<reshenie2<<endl;
    }
}