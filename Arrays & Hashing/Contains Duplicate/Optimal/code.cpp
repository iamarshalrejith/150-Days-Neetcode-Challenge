#include <bits/stdc++.h>
using namespace std;

bool contains_duplicate_optimal(vector<int> arr){
    unordered_set<int> st;
    for(int num:arr){
        //checking if set already contains the number
        if(st.find(num)!=st.end()){
            return true;
        }
        st.insert(num);
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,3,5,6};
    bool check = contains_duplicate_optimal(arr);
    cout << "Is it true(1)/false(0) : " << check << endl;
    return 0;
}