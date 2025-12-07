//
// Created by jakim on 12/6/2025.
/*
Да се напише програма каде од тастатура се внесува еден седумцифрен број.
Програмата печати DA доколку бројот е специјален, а NE во спротивно.
Еден број е специјален доколку за него важи дека е делив со својата прва цифра
и не е делив со збирот на последните две или доколку не е делив со својата втора цифра
и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е. да се испечати
порака "Nevaliden broj" во таков случај.
For example:
Input: 1234567
Result: DA

1234567
DA

1210212
NE

1235000
Nevaliden broj

4327983
NE

4327982
DA

5432105
NE

1000000
Nevaliden broj

1025250
Nevaliden broj

5689964
DA


 */
//
#include "iostream"
using namespace std;

int main(){
    int broj;
    cin>>broj;

    ///proverka dali brojot e sedumcifren
    if(broj < 1000000 || broj > 9999999){
        cout<<"Brojot ne e sedumcifren!"<<endl;
        return 0;                              //programata zavrsuva
    }

    int prvaCifra, vtoraCifra, posledniDveCifri;
    prvaCifra = broj / 1000000;
    vtoraCifra = broj / 100000 % 10;
    posledniDveCifri = broj % 10 + broj / 10 % 10;

    if(prvaCifra == 0 || vtoraCifra == 0 || posledniDveCifri == 0){
        cout<<"Nevaliden broj!"<<endl;
    }else{
        if((broj % prvaCifra == 0 || broj % vtoraCifra != 0) && broj % posledniDveCifri != 0){
            cout<<"DA"<<endl;
        } else{
            cout<<"NE"<<endl;
        }
    }

}