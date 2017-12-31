#include <bits/stdc++.h>

using namespace std;

void solve(vector <int> arr, int money) {
    map <int,int> icecream;    
    int one, two;
    for(int i = 0; i < arr.size(); i++){
        if(icecream.find(money - arr[i]) != icecream.end()){
            one = i+1;two = icecream[money - arr[i]];
            if(one <= two){cout <<one <<" "<<two<<endl;}
            else{cout << two<<" "<<one<<endl;}
            return;
        }
        icecream[arr[i]] = i+1;
    }
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int money;
        cin >> money;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        solve(arr, money);
    }
    return 0;
}
