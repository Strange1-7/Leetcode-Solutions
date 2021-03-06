class Solution {
public:
    void helper(vector<vector<int>>& image, int sr, int sc, int newColor, int var){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=var) return;
        
        if(image[sr][sc]==newColor) return;
        image[sr][sc]=newColor;
        
        helper(image, sr+1, sc, newColor, var);
        helper(image, sr, sc+1, newColor, var);
        helper(image, sr-1, sc, newColor, var);
        helper(image, sr, sc-1, newColor, var);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        helper(image, sr, sc, newColor, image[sr][sc]);
        
        return image;
    }
};