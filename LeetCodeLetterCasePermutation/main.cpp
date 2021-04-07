#include <iostream>
#include <vector>

#include <bits/stdc++.h>

using namespace std;
void permutationUtil2(string str, int i, vector<string> &result){
    static int length = str.length();

    if(i + 1 == length){
        result.push_back(str);
        return ;
    }

    while(i < length && str[i] >= '0' && str[i] <= '9'){
        i++;
    }

    permutationUtil2(str, i+1, result);




    if (str[i]>='A' && str[i]<='Z')
        str[i] = str[i] - 'A' + 'a';
    else if (str[i]>='a' && str[i]<='z')
        str[i] = str[i] - 'a' + 'A';

    permutationUtil2(str, i+1, result);

//         if (str[i]>='A' && str[i]<='Z')
//             str[i] = str[i] + 'a' - 'A';
//         else if (str[i]>='a' && str[i]<='z')
//             str[i] = str[i] + 'A' - 'a';



}

vector<string> letterCasePermutation(string S) {
    vector<string> result;

    // permutationUtil(S, -1, result);
    permutationUtil2(S, -1, result);

    for(string str: result){
        cout << str << endl;
    }

    return result;



}



int main() {

    letterCasePermutation("z");


    return 0;
}
