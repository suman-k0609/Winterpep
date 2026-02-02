class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        int toprow=0;
	int bottomrow=row-1;
	int leftcol=0;
	int rightcol=col-1;
vector<int> ans;
		for(int i=leftcol;i<=rightcol;i++){
			ans.push_back(mat[toprow][i]);
		}
		toprow++;
		for(int i=toprow;i<=bottomrow;i++){
			ans.push_back(mat[i][rightcol]);
		}
		rightcol--;
		for(int i=rightcol;i>=leftcol;i--){
			ans.push_back(mat[bottomrow][i]);
		}
		bottomrow--;
		for(int i=bottomrow;i>=toprow;i--){
			ans.push_back(mat[i][leftcol]);
		}
		leftcol++;
	return ans;
    }
    
};
