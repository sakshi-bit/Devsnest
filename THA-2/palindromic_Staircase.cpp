vector<string> solve(int n){
//CODE HERE
vector<string> sol;
 string stair = "";
for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
        stair=stair+to_string(j);
    }
    for(int j=i-1;j>0;j--){
        stair = stair+to_string(j);
    }

    sol.push_back(stair);
    stair="";
}
return sol;
}
