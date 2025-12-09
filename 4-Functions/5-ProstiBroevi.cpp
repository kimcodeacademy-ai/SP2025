//
// Created by jakim on 12/8/2025.
/*
Да се напише програма која за даден природен број ја пресметува разликата
помеѓу најблискиот поголем од него прост број и самиот тој број.
 */
//
#include "iostream"

using namespace std;

int prostBroj(int broj) {

    for (int i = 2; i < broj / 2; i++) {
        if (broj % i == 0) {
            return 0;
        }
    }
    return 1;

}

int main() {

    int broj;
    cin >> broj;
    int prvPogolem;
    for(int i = broj; true; i++){
        if(prostBroj(i) == 1){
            cout<<"Prviot pogolem prost broj e: "<<i<<endl;
            prvPogolem = i;
            break;
        }
    }

    cout<<"Razlika: "<<prvPogolem - broj;


}