// class Solution {
// public:
//     bool wordPattern(string pattern, string s) {
//         vector<string> words;
//         string temp="";

//         for(int i=0;i<s.size();i++){
//             if(s[i]==' '){
//                 words.push_back(temp);
//                 temp="";
//             }
//             else{
//                 temp+=s[i];
//             }
//         }
//         words.push_back(temp);

//         if(words.size()!=pattern.size()) return false;

//         string charToWord[26];

//         for(int i=0;i<pattern.size();i++){
//             char c = pattern[i];
//             string w = words[i];

//             if(charToWord[c-'a']!=""){
//                 if(charToWord[c-'a']!=w)
//                     return false;
//             }
//             else{
//                 for(int j=0;j<26;j++){
//                     if(charToWord[j]==w)
//                         return false;
//                 }
//                 charToWord[c-'a']=w;
//             }
//         }

//         return true;
//     }
// };