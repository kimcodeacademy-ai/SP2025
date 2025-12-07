//
// Created by jakim on 12/6/2025.
/*
За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.
0-50 = 5
51-60 = 6
61-70 = 7
71-80 = 8
81-90 = 9
91-100 = 10
Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
1 - 3 = "-"
4 - 7 = " "
8-0 = "+"
For example:
Input: 101
Result: Nevalidna vrednost za poeni!

Test cases:
79
Ocenka 8+

85
Ocenka 9

75
Ocenka 8

91
Ocenka 10-

99
Ocenka 10+

66
Ocenka 7

51
Ocenka 6-

49
Ocenka 5

-34
Nevalidna vrednost za poeni!
 */
//
#include "iostream"
using namespace std;

int main(){
    int poeni;
    cin>>poeni;
    if(poeni < 0 || poeni > 100){
        cout<<"Nevalidna vrednost za poeni!"<<endl;
        return 0;     // programata zavrsuva
    } else if(poeni < 50){  //ako programata stigne tuka znaci deka poenite se megju 0-100
        cout<<"Ocenka 5";
    }else if(poeni <= 60){
        cout<<"Ocenka 6";
    }else if(poeni <= 70){
        cout<<"Ocenka 7";
    }else if(poeni <= 80){
        cout<<"Ocenka 8";
    }else if(poeni <= 90){
        cout<<"Ocenka 9";
    } else {
        cout<<"Ocenka 10";
    }

    if(poeni % 10 > 0 && poeni % 10 <=3){
        cout<<"-"<<endl;
    }else if(poeni % 10 > 3 && poeni % 10 <=7){
        cout<<" "<<endl;
    }else{
        cout<<"+"<<endl;
    }
    return 0;
}
