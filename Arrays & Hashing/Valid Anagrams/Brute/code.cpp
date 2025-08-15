#include <bits/stdc++.h>
using namespace std;

bool valid_anagram_brute(string str1,string str2){
    // 1. Normalize -> remove spaces and lowercase (lamda function)
    auto normalize = [](string &s){ // sending by reference
        string result;
        for(char c: s){
            if(isalpha(c)){ // only letters
                result.push_back(tolower(c));
            }
        }
        return result;
    }; // [] - this doesnt accept anything from outerscope


    str1 = normalize(str1);
    str2 = normalize(str2);

    // length check
    if(str1.size() != str2.size()) return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    return str1 == str2;

}

int main(){
    string str1 = "DIRTY ROOM";
    string str2 = "Dormitory";
    bool check = valid_anagram_brute(str1,str2);
    cout << (check ? "Anagram" : "Not an anagram") << endl;
    return 0;
}