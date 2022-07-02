int solve(int n){
//CODE HERE
if(n==0 || n==1)
    return 1;
else
return n* solve(n-1);
}
