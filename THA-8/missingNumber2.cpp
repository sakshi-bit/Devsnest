vector<int> solve(int n, vector<int> arr){
//CODE HERE
vector<int> res;
bool isZeroFound=false;
	int inf= 1e5; //default zero value

	for(int i=0;i<n;i++){
		if(arr[i]==0){
			isZeroFound=true;
			arr[i]=inf;
		}
	}
	if(isZeroFound) arr[0]=arr[0]*(-1);

	//step2-> other elment marking step
	bool nPlus0= false, nPlus1=false; //n, n+1, is present or not
	for(int i=0;i<n;i++){
		if(abs(arr[i])==1e5 ) continue;
		else if(abs(arr[i])==n) nPlus0=true;
		else if(abs(arr[i])==n+1) nPlus1=true;
		else arr[abs(arr[i])] *=-1;
	}

	//step3-> adding only +ve numbered ele to ans
	vector<int> ans;
	for(int i=0;i<n;i++)
		if(arr[i]>0) ans.push_back(i);

	if(ans.size()==0) {
		ans={n, n+1};
	} else if(ans.size()==1){
		if(nPlus0==false) ans.push_back(n);
		else ans.push_back(n+1);
	}

   res.push_back(ans[0]);
   res.push_back(ans[1]);
   return res;

}
