#include <iostream>
using namespace std;


#define dpSize 100000
//long long int dp[dpSize][dpSize];



typedef unsigned long long int lli;
class Solution {
public:

    void longestDupUtil(string str, string &result, int end1, int end2, int &longest){
        if(str == ""){
            return ;
        }

        if(end1 <= 0 || end2 <= 0 || end1 == end2){
            return ;
        }

        lli length = str.length();

        // const long int dpSize = 100000;

        int (*dp)[100000] = new int[100000][100000];



        int *ptr = new int[10000000000];
        // memset(dp, 0, sizeof(dp));




        //    longestDupUtilD(str, result, end1-1, end2, longest);
        //    longestDupUtilD(str, result, end1, end2-1, longest);


        lli index = 0;
        lli maxLength = 0;


        for(lli end2=0; end2 < length; end2++){
            for(lli end1=end2; end1 < length; end1++){


                if(end1 == end2){
                    dp[end2][end1] = 0;
                }else if(str[end1] == str[end2] && end1-1 >= 0 && end2-1 >=0){
                    dp[end2][end1] = dp[end2-1][end1-1] + 1;

                    if(dp[end2][end1] > maxLength){
                        maxLength = dp[end2][end1];
                        index = max(index, end2);
                    }

                }else if(str[end1] == str[end2] && (end1-1 < 0 || end2-1 < 0)){
                    dp[end2][end1] = 1;
                    if(dp[end2][end1] > maxLength){
                        maxLength = dp[end2][end1];
                        index = max(index, end2);
                    }
                }else if(str[end2] != str[end1]){
                    dp[end2][end1] = 0;
                }
            }
        }


        if(maxLength > 0){
            for(lli i= index- maxLength + 1; i<= index; i++){
                result += str[i];
            }
        }

    }


    string longestDupSubstring(string S) {
        string result = "";
        int length = S.length();

        int longest = 0;


        longestDupUtil(S, result, length-1, length-2, longest);

        return result;
    }



};

int main() {

    string str = "banana";

    Solution solution;

    cout << solution.longestDupSubstring(str) << endl;

    return 0;
}
