Leetcode Q. No. 26
Brute:
use set data structure
set data structure stores only unique elements 

vector<int>& a;
int n = a.size();
unordered_set<int>st;
for(int i=0; i<n; i++){
st.insert(a[i]);              //This stores only unique elements in set data structure and remove all the duplicates.

int index = 0;
for(auto it :st){            // This will store unique elements in consecutive order(in place)
a[index] = it;               // The Time complexity for this approach is O(nlogn + n) [nlogn -> unordered set && n -> for each loop to place unique in order]
index++;                     // It also requires extra space O(n)
                             // The Interviewer will ask to improve the complexity so now the OPTIMAL APPROACH
}

OPTIMAL : 2 ptr Approach

vector<int>& a;
if(a.empty()) return 0;
int n = a.size();
int i = 0;                 // 1st unique element is at index 0
for(int j= 1; j<n; j++){
if(a[j] != a[i]){
a[i+1] = a[j];                    
i++;                      // move slow pointer
}
return i+1;              // returns length of the array(total unique elements)
                         // it uses O(n) complexity




  
