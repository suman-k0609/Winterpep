// class Solution {
// public:
//     int reverse(int x) {
//         long long reversei = 0;

//         while(x != 0){
//             int rem = x % 10;
//             if(reversei>INT_MAX/10 || reversei<INT_MIN/10){
//                 return 0;
//             }
//             reversei = reversei * 10 + rem;
//             x = x / 10;
//         }

//         return reversei;
//     }
// };