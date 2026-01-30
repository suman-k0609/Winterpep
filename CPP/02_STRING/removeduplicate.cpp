// // #include<iostream>
// // using namespace std;
// // int removeduplicate(string str){
// //     string ans="";
// //     for(int i=0;i<str.length();i++){
// //         if(i>0 && str[i]==str[i-1]){
// //             continue;
// //         }
// //         else{
// //             ans.push_back(str[i]);
// //         }
// //     }
// //     return ans;

// // }
// // int main(){ 
// // string str={"hello"};
// // removeduplicate(str);
// // }

// #include<iostream>
// using namespace std;
// string removeduplicate(string &s){
//     vector<bool> visited(256, false);
//     string result="";
//     for(char i:s){
//         if(!visited[i]){
//             result.push_back(i);
//             visited[i]=true;
//         }
//     }
//  return result;
// }
// int main(){

// }