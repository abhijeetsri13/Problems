#include <bits/stdc++.h> 
using namespace std; 
void merge(int nums1[], int nums2[], int n_len, int m_len);
int main()
{
	int n1[42]={1 ,36 ,39 ,105 ,146 ,154 ,168 ,170 ,204 ,206 ,217 ,219 ,225 ,227 ,272 ,282 ,293 ,300 ,312 ,323 ,328 
				,328 ,334 ,335 ,359 ,370 ,383 ,392 ,395 ,396 ,403 ,413 ,422 ,437 ,443 ,448 ,462 ,463 ,465 ,479 ,492 ,496};
	int n2[68]={7 ,22 ,30 ,36 ,38 ,38 ,39 ,41 ,42 ,48 ,49 ,83 ,85 ,102 ,107 ,116 ,119 ,124 ,127 ,130 ,140 ,142 ,145 ,149 
				,159 ,163 ,165 ,174 ,174 ,191 ,205 ,212 ,224 ,230 ,242 ,246 ,254 ,257 ,258 ,265 ,279 ,289 ,306 ,307 ,309 ,317 ,324 ,334 ,341 ,343 ,
				351 ,360 ,369 ,371 ,377 ,387 ,391 ,394 ,430 ,431 ,432 ,440 ,443 ,445 ,447 ,455 ,467 ,478};
	merge(n1,n2,42,68);
	for (int x=0;x<42;x++) 
		cout << n1[x] << " "; 
	for (int x=0;x<68;x++) 
		cout << n2[x] << " "; 
		return 0;
}

		void merge(int nums1[], int nums2[], int n_len, int m_len) 
		{ 
			int j=0;
			int i=n_len-1;
					while(i>=0&&j<m_len)
					{
						if(nums2[j]<=nums1[i])
						{
							std::swap(nums2[j],nums1[i]);
							i--;
							j++;
						}
						else{
							i--;
						}		
				}
					std::sort(nums1, nums1+n_len);
					std::sort(nums2, nums2+m_len);	
		} 
