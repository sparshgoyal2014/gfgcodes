#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lli;


unsigned long long int niceSwaps(lli N){
    // lli totalSum = arr[N-1];

    lli totalSum = (N*(N+1))/2;
    if(totalSum % 2 != 0){
        return 0;
    }

    lli requiredSum = totalSum/2;

    lli res = 0;

    cout << "works fine up till here" << endl;
    for(lli i=0; i<N; i++){

        cout << "works fine" << i << endl;



        lli sumi = ((i + 1) * (i + 2))/2 ;

        if(sumi > requiredSum){
            break;
        }


        if(sumi == requiredSum){
            res = res + ((i+1)*i)/2;

            res = res + ((N-i-1) * (N-i-2))/2;
            continue;
        }
        cout << "works fine up till here 2" << endl;


        //   for(lli j=0; j<=i; j++){
        //       lli temp = requiredSum - (sumi - (j+1));

        //       if(temp <= N && temp > i+1){
        //           result++;
        //       }
        //   }

        int l = 0;
        int r = i;

        int idx = -1;

        int mid;
        int temp;

        while(l <= r){
            mid = l + (r - l)/2;

            temp = requiredSum - (sumi - (mid+1));

            if(temp <= N && temp > i+1){
                idx = mid;
                l = mid + 1;
            }else{
                r = mid-1;
            }
        }

        cout << "works fine up till here 3" << endl;


        res = (res + idx + 1);
        cout << res << endl;

    }

    cout << "works fine up till here 4" << endl;

    cout << res << endl;


    return res;

}

int main() {
    // your code goes here
    int t;
    cin >> t;

// 	lli * arr = new lli[1000000001];


// 	arr[0] = 1;
// 	for(lli i=1; i<1000000001; i++){
// 	    arr[i] = arr[i-1] + i+1;
// 	}

    while(t--){
        int N;
        cin >>N;

        cout << niceSwaps(N) << endl;

    }


    return 0;
}
