vector<int> solve(string str1){
//CODE HERE
unordered_map<char,int> bucket;
for(char ch : str1){
    bucket[ch]++;
}
vector<int> result;
for(char ch: str1){
    if(bucket[ch] != 0){
        result.push_back(bucket[ch]);
        bucket[ch] = 0;
    }
}
return result;
}
