#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {    
    int N;
    string input;
    map<string,int> count;
    cin>>N;
    cin.ignore();
    for(int i = 0;i < N; i++){
        getline(cin,input);              
        if(count.find(input) == count.end()){
             count[input] = 1;
        }
        else{
            count[input] += 1;
        }        
    }
    int M;
    cin >> M;
    cin.ignore();
    for(int j = 0;j < M;j++){
        getline(cin,input);
        if(count.find(input) != count.end()){
            cout<<count[input]<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
                        
    }
    return 0;
}