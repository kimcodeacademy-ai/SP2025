//
// Created by jakim on 12/7/2025.
/*
Да се напише програма која ќе прочита два природни броја.
Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број.
Ако овој услов е исполнет, програмата печати DA, во спротивно NE.
Проверката на дадените броеви да се направи во функција која
како аргумент прима два цели броеви и враќа bool во зависност од дадениот услов,
и ако вратената вредност е  true да се испечати DA, а во спротивно NE.
For example:
Input: 421988 4111992
Result: NE
 */
//
#include "iostream"

using namespace std;

bool daliCifriteSePojavuvaat(int prvBroj, int vtorBroj) {

    while (prvBroj > 0) {
        int cifraPrvBroj = prvBroj % 10;
        int tmp = vtorBroj;
        while (tmp > 0) {
            int cifraVtorBroj = tmp % 10;
            if (cifraPrvBroj == cifraVtorBroj) {
                break;
            }
            tmp /= 10;
        }
        if(tmp == 0){
            return false;
        }
            prvBroj /= 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    if(daliCifriteSePojavuvaat(a, b)){
        cout<<"DA"<<endl;
    } else{
        cout<<"NE"<<endl;
    }
    return 0;
}
