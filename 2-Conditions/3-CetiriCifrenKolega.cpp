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
Input 5500
Result 20.0000%

 */

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
        cout<<"Brojot nema dovolno 5ki!!"<<endl;
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
        cout<<"Broj: "<<n<<" Broj kolega: "<<brojKolega<<endl;

        float razlikaProcenti;

        if(n > brojKolega){
            razlikaProcenti = ((float)n - brojKolega) / brojKolega;
            cout<<"Razlika vo procenti: "<<razlikaProcenti<<endl;
        } else{
            razlikaProcenti = ((float)brojKolega - n) / n;
            cout<<"Razlika vo procenti: "<<razlikaProcenti*100<<"%"<<endl;
        }

    }



}
