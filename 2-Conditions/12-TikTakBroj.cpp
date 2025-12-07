//
// Created by jakim on 12/6/2025.
/*
Да се напише програма, каде што за даден број N внесен преку тастатура, ќе испечати: "Tik"
доколку е делив со 3, "Tak" доколку е делив со 5, "Tik - Tak" доколку е делив со 3 и со 5.
Доколку бројот не е делив со 3 ни со 5, тогаш да се испечати "Losh Broj".
(Без наводници, ставени се за читливост)
For example:
Input: 3
Result: Tik

Test cases:
3
Tik

5
Tak

20
Tak

111
Tik

11
Losh Broj

15
Tik - Tak

150
Tik - Tak

151
Losh Broj

 */
//
#include "iostream"
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n % 3 == 0 && n % 5 == 0){
        cout<<"Tik - Tak"<<endl;
    } else if(n % 3 == 0){
        cout<<"Tik"<<endl;
    }else if(n % 5 == 0){
        cout<<"Tak"<<endl;
    } else{
        cout<<"Losh broj"<<endl;
    }
}