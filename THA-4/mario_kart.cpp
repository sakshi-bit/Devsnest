vector<int> solve(vector<vector<int>> mat){
//CODE HERE
vector<int> kart;
int mini1 = INT_MAX;
int mini2 = INT_MAX;
int n = mat.size();
for(int i=0;i<n;i++){
    if(mat[i][1]<mini1){
        mini1=mat[i][1];
    }
}

for(int i=0;i<n;i++){
    if(mat[i][1]<mini2 && mat[i][1]!=mini1){
        mini2 = mat[i][1];
    }
}

for(int i=0;i<n;i++){
    if(mat[i][1]==mini2){
        kart.push_back(mat[i][0]);
    }
}

sort(kart.begin(),kart.end());
return kart;

}
