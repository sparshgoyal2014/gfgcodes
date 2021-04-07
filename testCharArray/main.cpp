//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//    char arr[] = "hello";
//    cout << sizeof(arr) << endl;
//    cout << strlen(arr) << endl;
//
//    cout << arr[1] << '\0'<< '\0'<< '\0'<< '\0'<< '\0' << arr[1] << endl;
////
////    for(int i=0; i<6; i++){
////        arr[i] = 'b';
////    }
////
////    cout << arr << endl;
////
////    char curr = arr[0];
////    int i=0;
////    while(curr != '\0'){
////        cout << curr;
////        i++;
////        curr = arr[i];
////    }
//
//
//    memset(arr, 'b', sizeof(arr));
//    cout << arr << endl;
//
//
//
//    return 0;
//}


#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str)-1);
    cout << str;
    return 0;
}