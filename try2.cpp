#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> belt(n);
    for(int i = 0; i < n; i++){
        cin>>belt[i];
    }

    for(int i = 0, j = 0; i < n; i++){
        while(belt[i] != 0 && i < n){
            i++;
            j++;
        }
        while(belt[j]==0 && j<n){
            j++;
        }
        // if(j == 0)swap(belt[i], belt[j]);
    }

    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<belt[i]<<" ";
    }
}