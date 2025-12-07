//
// Created by jakim on 12/6/2025.
/*
 * Задача 11
Да се напише програма во која од стандарден влез се чита мобилен број во следниот формат XXYYYZZZ (пр. 71298486).
 Програмата треба да го испечати во формат XXX/YYY-ZZZ (пр. 071/298-486).
 Дополнително, треба да го испечати и името на иницијалниот оператор:
    • 070/071/072 – T-Mobile,
    • 075/076/077/078 - А1.
    • 079 - Lycamobile
For example:
Input: 070120004
Result: 070/120-004 T-mobile

Test cases:
070120004
070/120-004 T-mobile

075123321
075/123-321 A1

078401001
078/401-001 A1

070638263
070/638-263 T-mobile

072032045
072/032-045 T-mobile

079998228
079/998-228 LycaMobile

076263112
076/263-112 A1

078889229
078/889-229 A1

076444333
076/444-333 A1

071273829
071/273-829 T-mobile


 */
//


#include <iomanip>
#include "iostream"
using namespace std;

int main(){
    int broj;
    cin>>broj;
    int x, y, z;
    x = broj/1000000;
    y = broj / 1000 % 1000;
    z = broj % 1000;

    ///setw(3) -> Set width to 3 characters for the next output value.
    ///setfill('0') -> Fill empty spaces with '0' instead of spaces.
    cout<< setfill('0') << setw(3)<< x <<"/"<< setfill('0') << setw(3)<< y<<"-"<< setfill('0') << setw(3)<< z <<" ";
    if(x % 10 == 0 || x % 10 == 1 || x % 10 == 2){
        cout<<"T-mobile"<<endl;
    } else if(x % 10 == 5 || x % 10 == 6 || x % 10 == 7 || x % 10 == 8){
        cout<<"A1"<<endl;
    } else if(x % 10 == 9){
        cout<<"LycaMobile"<<endl;
    } else{
        cout<<"Ne e validen broj!!!"<<endl;
    }
}
