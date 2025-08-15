#include <bits/stdc++.h>
using namespace std;

bool valid_anagram_optimal(string str1,string str2){
    auto normalize = [](string &s){
        string result;
        for(char c: s){
            if(isalpha(c)){
                result.push_back(tolower(c));
            }
        }
        return result;
    };
    str1 = normalize(str1);
    str2 = normalize(str2);
    if(str1.size()!=str2.size()) return false;
    int alphabets[26] = {0};

    // Increment counts for str1
    for(char c : str1){
        alphabets[c -'a']++;
    }

    //Decrement counts for str2
    for(char c : str2){
        alphabets[c -'a']--;
    }

    for(int count : alphabets){
        if(count!=0) return false;
    }

    return true;

}

int main(){
    string str1 = "DIRTY ROOM";
    string str2 = "Dormitory";
    bool check = valid_anagram_optimal(str1,str2);
    cout << (check ? "Anagram" : "Not an anagram") << endl;
    return 0;
}