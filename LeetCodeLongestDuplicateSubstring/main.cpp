#include <iostream>
using namespace std;



// recursive
void longestDupUtil(string str, string &result, int end1, int end2, int &longest){
    if(str == ""){
        return ;
    }

    if(end1 == 0 || end2 == 0 || end1 == end2){
        return ;
    }


    longestDupUtil(str, result, end1-1, end2, longest);
    longestDupUtil(str, result, end1, end2-1, longest);


    string temp = "";
    int count = 0;

    while(end1 >= 0 && end2 >= 0){
        if(str[end1] == str[end2]){
            count++;
            temp += str[end1];
        }else{
            break;
        }

        end1--;
        end2--;
    }

    if(count > longest){
        longest = count;
        result = temp;
    }

}


string longestDupSubstring(string S) {
    string result = "";
    int length = S.length();

    int longest = 0;


    longestDupUtil(S, result, length-1, length-2, longest);

    return result;
}


// dynamic programmed

void longestDupUtilD(string str, string &result, int end1, int end2, int &longest){
    if(str == ""){
        return ;
    }

    if(end1 == 0 || end2 == 0 || end1 == end2){
        return ;
    }

    int length = str.length();

    int dp[length][length];




    //    longestDupUtilD(str, result, end1-1, end2, longest);
    //    longestDupUtilD(str, result, end1, end2-1, longest);


    int index = 0;

    int maxLength = 0;


    for(int end2=0; end2<length; end2++){
        for(int end1=end2; end1 < length; end1++){


            if(end1 == end2){
                dp[end2][end1] = 0;
            }else if(str[end1] == str[end2] && end1-1 >= 0 && end2-1 >=0){
                dp[end2][end1] = dp[end2-1][end1-1] + 1;

               if(dp[end2][end1] > maxLength){
                   maxLength = dp[end2][end1];
                   index = end2;
               }

            }else if(str[end1] == str[end2] && (end1-1 < 0 || end2-1 < 0)){
                dp[end2][end1] = 1;
                if(dp[end2][end1] > maxLength){
                    maxLength = dp[end2][end1];
                    index = end2;
                }
            }else{
                dp[end2][end1] = 0;
            }
        }
    }


    if(maxLength > 0){
        for(int i= index- maxLength + 1; i<= index; i++){
            result += str[i];
        }
    }




}


string longestDupSubstringD(string S) {
    string result = "";
    int length = S.length();

    int longest = 0;


    longestDupUtilD(S, result, length-1, length-2, longest);

    return result;
}






int main() {

    string str = "banana";
//    cout << longestDupSubstring(str) << endl;

    cout << longestDupSubstringD(str) << endl;

    return 0;
}
