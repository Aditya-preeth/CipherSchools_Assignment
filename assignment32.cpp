#include<bits/stdc++.h>
using namespace std;

vector<int>intersect(vector<int>& nums1, vector<int>& nums2)
{
	sort(nums1.begin(),nums1.end());
	sort(nums2.begin(),nums2.end());
	int i=0,j=0,k=0;
	while(i<nums1.size()&& j<nums2.size())
	{
		if (nums1[i]<nums2[j]) i++;
		else if(nums1[i]>nums2[j]) j++;
		else{
			nums1[k++]=nums1[i];
			++i,++j;		
	}
   }   
    return vector<int>(nums1.begin(),nums1.begin()+k);
}
int main() 
{
    vector<int> nums1={4,9,5};
    vector<int> nums2={4,9};
    vector<int> ans=intersect(nums1,nums2);
    for(int x:ans)
        cout<<x<<" ";
   return 0; 
}
