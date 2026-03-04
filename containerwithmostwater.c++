class Solution {
public:
    int maxArea(vector<int>& height) {
int maxwell=0;
int rp=height.size()-1;
int lp=0;
while(lp<rp){
   int w=rp-lp;
    int m=min(height[rp],height[lp]);
    int area=m*w;
    maxwell=max(area,maxwell);
    height[lp]<height[rp]?lp++:rp--;
}
return maxwell;


    }
};