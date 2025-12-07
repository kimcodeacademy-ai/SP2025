//
// Created by jakim on 12/4/2025.
//
/*
 * Од тастатура се внесува четирицифрен број n што во себе содржи барем 2 цифри со вредност 5.
КОЛЕГА на тој број е бројот кој на позициите на кои има петки во првиот број ќе има шестка во бројот КОЛЕГА.
(Пр. колега на 5551 е 6661). На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број.
Да се има во предвид дека некогаш може да биде поголем бројот n а некогаш неговиот колега.
Доколку бројот n не содржи најмалку 2 цифри петки, да се испечати порака за грешка "Brojot nema dovolno 5ki!!".


For example:
Input: 5500
Result: 20.0000%

5500
20.0000%

1255
0.8765%

5555
20.0000%

1234
Error

6655
0.1653%

0155
7.0968%
 */

#include <iomanip>
#include "iostream"
using namespace std;
int main(){
    int n, brojKolega = 0;
    cin>>n;
    int cifra1, cifra2, cifra3, cifra4;
    /// 5500
    cifra1 = n /1000;
    cifra2 = n / 100 % 10;
    cifra3 = n / 10 % 10;
    cifra4 = n % 10;
    int brojac = 0;
    if(cifra1 == 5){
        brojac++;
    }
    if(cifra2 == 5){
        brojac++;
    }
    if(cifra3 == 5){
        brojac++;
    }
    if(cifra4 == 5){
        brojac++;
    }

    if(brojac < 2){
        cout<<"Error"<<endl;
    } else{
        if(cifra1 == 5){
            brojKolega += 6 * 1000;
        } else{
            brojKolega += cifra1 * 1000;
        }
        if(cifra2 == 5){
            brojKolega += 6 * 100;
        } else{
            brojKolega += cifra2 * 100;
        }
        if(cifra3 == 5){
            brojKolega += 6 * 10;
        } else{
            brojKolega += cifra3 * 10;
        }
        if(cifra4 == 5){
            brojKolega += 6;
        } else{
            brojKolega += cifra4;
        }

        float razlikaProcenti;

        if(n > brojKolega){
            razlikaProcenti = ((float)n - brojKolega) / brojKolega;
            ///setprecision(n) -> sets how many digits are shown, fixed -> changes that behavior so setprecision(n) means digits after the decimal point
            cout<<fixed << setprecision(4) <<razlikaProcenti*100<<"%"<<endl;
        } else{
            razlikaProcenti = ((float)brojKolega - n) / n;
            cout<<fixed << setprecision(4) <<razlikaProcenti*100<<"%"<<endl;
        }

    }



}
