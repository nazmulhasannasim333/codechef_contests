#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int independenceDay = 15;
    if (x > independenceDay) {
        cout << -1 << endl;
    }else{
        cout << independenceDay - x << endl;
    }
    return 0;
}