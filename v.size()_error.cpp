/*
  -->> Practie safe programming <<-- 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {479, 385, 290, 293, 384, 383, 297, 478, 291, 382};
    sort(v.begin(), v.end());
    // for(int i=0; i<static_cast<int>(v.size()); i++){
    //     cout << v[i] << ", ";
    // }

    // for(size_t i=0; i<v.size(); i++){
    //     cout << v[i] << ", ";
    // }

    // int n = v.size();
    // for(int i=0; i<n; i++){
    //     cout << v[i] << ", ";
    // }

    for(auto val: v){
        cout << val << ", ";
    }
    return 0;   
}
