#include <bits/stdc++.h>
using namespace std;
  using item=pair<int, string>;
    unordered_map<string, set<item>> Rated;
    unordered_map<string, item> mp;
int FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings)
    {
     int size= foods.size();
        for(int i =0;i<size;i++){
             string food=foods[i], cuisine=cuisines[i];
            int rating=ratings[i];
            mp[food]={-rating, cuisine};//take minus
            Rated[cuisine].insert({-rating, food});
          
             }
        return 1;
    }
    
    void changeRating(string food, int newRating) {
       string cuisine = mp[food].second;
       int oldRating = mp[food].first;
       Rated[cuisine].erase({oldRating,food});
       Rated[cuisine].insert({-newRating,food});
       mp[food]={-newRating,cuisine};
    }
    
    string highestRated(string cuisine) {
        return Rated[cuisine].begin()->second;
    }

       vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
       
        int size = img.size();
        int size2= img[0].size();
        vector<vector<int>> result(size,vector<int>(size2,0)) ;
   
    for(int i= 0;i<size;i++){
        for(int j= 0;i<size2;j++){
            int count=0;
            int acc=0;
            int minUp=i-1;
            int minLeft=j-1;
            for(int k=minUp;k<=minUp+2;k++){
            for(int l=minLeft;l<=minLeft+2;l++){
                if(k>0 &&l>0 &&k<size &&l<size2){
                    count++;
                    acc+=img[k][l];
                }
            }
            }
         
        result[i][j]=acc/count;
        }
    }
        
        
        
        
        return result;
    }
   

 int main (){
  cout<<"hello";
  return 0;
 }
     int compareVersion(string version1, string version2) {
        int v1,v2;
        for(int i=0 ;i<version1.length()-1;i++){
            if(version1[i]=='.'){
               v1=  stoi(version1.substr(0,i-1))  ;
                         break;
                
            }
         
        }
         for(int i=0 ;i<version2.length()-1;i++){
             if(version2[i]=='.'){
               v2=  stoi(version2.substr(0,i-1))   ;
                           break;
                
            }
        }
        
        if (v1 < v2) return -1;
        if (v1 > v2) return 1;
     return 0;
    }
      int lengthOfLIS(vector<int>& nums) {
         std::vector<int> tails(nums.size(), 0);
        int size = 0;

        for (int x : nums) {
            int i = 0, j = size;
            while (i != j) {
                int m = (i + j) / 2;
                if (tails[m] < x)
                    i = m + 1;
                else
                    j = m;
            }
            tails[i] = x;
            if (i == size) ++size;
        }
        return size;
    }
    class Solution {
public:
    int dp[50001];
    int size=0;
    int maxVal(vector<vector<int>>&jobs,vector<int>&start,int index){
        if(index ==size)return 0;
        if(dp[index]!=-1)return dp[index];
        
        int newIndedx= lower_bound(start.begin(),start.end(),jobs[index][1])-start.begin();
        
    int val = max(maxVal(jobs,start,index+1),jobs[index][2]+maxVal(jobs,start,newIndedx));
        return dp[index]=val;   
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector <int>> jobs;
        memset(dp,-1,sizeof(dp));
        this->size= profit.size();
        for(int i=0;i<size;i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        for(int i=0;i<size;i++){
            startTime[i]=jobs[i][0];
        }
        
        return maxVal(jobs,startTime,0);
    }
};

#define il long long int
class Solution {
public:
 
    
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
         vector<unordered_map<il ,int>> acc(n);
          int result=0;
        for(int i =1;i<n;i++){
              for(int j =0;j<i;j++){
                  il diff=(il) nums[i]-nums[j];
                  acc[i][diff]+=1+ acc[j][diff];
                  result+= 1+ acc[j][diff];
            
              }
            
        }
        return result-(n*(n-1)/2);
    }
};


class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == nullptr) return 0;
        if(root->val<low)return rangeSumBST(root->right,low,high);
         if(root->val>high)return rangeSumBST(root->left,low,high);
        return root->val+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
    }
};
class Solution {
public:
     void rangeSumBST(TreeNode* root,vector<int>&x) {
         if(root==nullptr) return;
        if(root->left==nullptr &&root->right==nullptr){
            x.push_back(root->val);
               
        } 
      rangeSumBST(root->left,x);
     rangeSumBST(root->right,x);

       
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
          vector<int>ro1;
          vector<int>ro2;
     
       rangeSumBST(root1,ro1);
       rangeSumBST(root2,ro2);
        return ro1==ro2;
        
    }
};

//graph bfs breadth first search

const int N= 1e4;
bool vis[N];

class Solution {
  public:
  vector <int> bfs(int pos, vector<int> adj[]){
      vis[pos]=true;
      vector<int> result;
      queue<int> q;
      q.push(pos);
   
      while(!q.empty()){
         int fronter= q.front();
            result.push_back(fronter);
         q.pop();
         for(int i =0;i<adj[fronter].size();i++){
             int acc=adj[fronter][i];
             if(!vis[acc]){
                 vis[acc]=true;
                 q.push(acc);
             }
         }
          
          
      }
      return result;
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
  
        memset(vis,0,sizeof(vis));
              
      
        
        
        
        return  bfs(0,adj);
    }
};

/////////////////

const int N = 1e5;
bool vis[N];

class Solution {
  public:
  bool dfs(int pos,int parent , vector<int> adj[]){
    vis[pos]=true;
    
    for(int i =0;i<adj[pos].size();i++){
        int x = adj[pos][i];
        if(vis[x]&&parent!=x){
            return true;
        }else if(!vis[x]&&dfs(x,pos,adj)){
            return true;
        }
    }
    
    return false;

}
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
    memset(vis,false,sizeof(vis));
    for (int i =0;i<V;i++){
        if(!vis[i]&&dfs(i,-1,adj)){
            return true;
        }
    }
    return false;
    }
};

///////////////////////////////////////////////////////
//  cycle directed graph

const int N=1e5;
bool vis[N];
bool parent[N];
class Solution {
   public:
   bool dfs(int x,vector<int> adj[]){
       vis[x]=1;
       parent[x]=1;
       for (int i=0;i<adj[x].size();i++){
           int acc= adj[x][i];
           if(vis[acc]&&parent[acc]){
               return 1;
           }else if(!vis[acc]&&dfs(acc,adj)){
               return 1;
           }
           
       }
       parent[x]=0;
       return 0;
   }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       memset(vis,0,sizeof(vis));
       memset(parent,0,sizeof(parent));
       for (int i =0;i<V;i++){
           if(!vis[i]&&dfs(i,adj)){
               return 1;
           }
       }
       return 0;
    }
};

class Solution {
public:
    unordered_map<int, vector<int>> graph;

    int amountOfTime(TreeNode* root, int start) {
        constructGraph(root);

        queue<int> q;
        q.push(start);

        unordered_set<int> visited;

        int minutesPassed = -1;

        while (!q.empty()) {
            ++minutesPassed;
            for (int levelSize = q.size(); levelSize > 0; --levelSize) {
                int currentNode = q.front();
                q.pop();
                visited.insert(currentNode);
                for (int adjacentNode : graph[currentNode]) {
                    if (!visited.count(adjacentNode)) {
                        q.push(adjacentNode);
                    }
                }
            }
        }

        return minutesPassed;
    }

    void constructGraph(TreeNode* root) {
        if (!root) return;

        if (root->left) {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
        }

        if (root->right) {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
        }

        constructGraph(root->left);
        constructGraph(root->right);
    }
};
class Solution {
public:
     int maxAncestorDiff(TreeNode* root) {
        if (!root)
            return 0;
        int minVal = root->val, maxVal = root->val;
        differ(root, minVal, maxVal);
        return diff;
    }

private:
    int diff = 0;

    void differ(TreeNode* root, int minVal, int maxVal) {
        if (!root)
            return;
        diff = max(diff, max(abs(minVal - root->val), abs(maxVal - root->val)));
        minVal = min(minVal, root->val);
        maxVal = max(maxVal, root->val);
        differ(root->left, minVal, maxVal);
        differ(root->right, minVal, maxVal);
    }
};

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int x=0,y=0;
        int size = s.size()/2;
     unordered_set<char> vol = {'a', 'e', 'i', 'o', 'u'};
     for(int i =0;i<size;i++){
         if(vol.contains( tolower(s[i]))){
             x++;
         }
         if(vol.contains(tolower( s[size+i]))){
             y++;
         }
     }
        return x==y;
    }
};
class Solution {
public:
    int minSteps(string s, string t) {
        int count[26] = {0};
        // Storing the difference of frequencies of characters in t and s.
        for (int i = 0; i < s.size(); i++) {
            count[t[i] - 'a']++;
            count[s[i] - 'a']--;
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            ans += max(0, count[i]);
        }
        
        return ans;
    }
};
// my sub hhhhhhhhh

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>firstString;
        unordered_map<char,int>secondString;
        int size = s.size();
        for(int i =0;i<size;i++){ 
            if(!secondString[s[i]]) {
                   secondString[s[i]]=0;
            }
               firstString[s[i]]++; 
               secondString[t[i]]++;
          
            
        }
        int result=0;
        unordered_map<char,int>::iterator it;
          for(it=firstString.begin();it!=firstString.end();it++){
              if(it->second>secondString[it->first]){
                  result+=it->second-secondString[it->first];
              }
          }
        return result;
    }
};

    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int>x(26,0);
        vector<int>y(26,0);
        vector<bool>x1(26, false),y1(26,false);
        for(char c:word1){
            x[c-'a']++;  x1[c-'a']=true;
        }
        for(char c :word2){
            y[c-'a']++; y1[c-'a']=true;
        }
     
        sort(x.begin(),x.end());
       sort(y.begin(),y.end());
    return x==y&&x1==y1;
    }


     bool closeStrings(std::string word1, std::string word2) {
        std::array<int, 26> charCount1 = {}; 
        std::array<int, 26> charCount2 = {}; 
        for (char c : word1) {
            ++charCount1[c - 'a'];
        }

        for (char c : word2) {
            ++charCount2[c - 'a'];
        }

        for (int i = 0; i < 26; ++i) {
            bool charPresentWord1 = charCount1[i] > 0;
            bool charPresentWord2 = charCount2[i] > 0;

            if ((charPresentWord1 && !charPresentWord2) || (!charPresentWord1 && charPresentWord2)) {
                return false;
            }
        }

        std::sort(charCount1.begin(), charCount1.end());
        std::sort(charCount2.begin(), charCount2.end());

        for (int i = 0; i < 26; ++i) {
            if (charCount1[i] != charCount2[i]) {
                return false;
            }
        }

        return true;
    }
class RandomizedSet {
    set<int>s;
public:
    RandomizedSet() {}
    bool insert(int val) {
        if(s.find(val) != s.end()){
            return false;
        }
        s.insert(val);
        return true;
    }
    bool remove(int val) {
        if(s.find(val) == s.end()){
            return false;
        }
        s.erase(val);
        return true;
    }
    int getRandom() {
        // doing mod to get in range [0, s.size()-1]
        int pos = rand() % s.size();
        // std::next returns an iterator pointing to the element after being advanced by certain no. of positions.
        return *next(s.begin(), pos);
    }
};
class Solution {
public:
//     bool uniqueOccurrences(vector<int>& arr) {
//        unordered_map<int,int>rec;
//         unordered_map<int,int>rec2;
//         for (int i:arr){
//             rec[i]++;
//         }
//         for(auto i:rec){
//             if( rec2[i.second])return false;  
//             rec2 [i.second]++;
//         }
        
//         return true;
//     }
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_set<int> set;

        int count = 1;
        int size= arr.size();
        for (int i = 1; i < size; i++) {
            if (arr[i] == arr[i - 1])
                ++count;
            else {
                if (set.count(count))
                    return false;

                set.insert(count);
                count = 1;
            }
        }

        if (set.count(count))
            return false;

        return true;
    }
}


    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>count,first,second;
        for(int i =0;i<nums.size();i++){
            if(first.count(nums[i])==0)first[nums[i]]=i;
            second[nums[i]]=i;
            count[nums[i]]++;
        }
        int maxi=-1;
        for(auto i :count){
            maxi=max(maxi,i.second);
        }
        int x=INT_MAX;
        for(auto i:count){
            if(i.second==maxi){
                x=min(x,second[i.first]-first[i.first]);
            }
        }
        return x+1;

 
    }


    class Solution {
public:
    string reverseVowels(string s) {
        vector<char > volRev;
        set<char> vol ={'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
        for(int i =0;i<s.size();i++){
            if(vol.contains(s[i])){
                volRev.push_back(s[i]);
            }
        }
        int x= volRev.size()-1;
        string result="";
        for(int i =0;i<s.size();i++){
         if(vol.contains(s[i])){
             result+=volRev[x];
             x--;
         }else{
             result+=s[i];
         }
        }
        return result;
    }
};

class Solution {
public:
    int climbStairs(int n) {
        vector<int >dp(n+1);
        dp[0]=1;
        dp[1]=1;
        for(int i =2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};



class Solution {
public:
     string cleanSpaces(string& s, int n) {
    int i = 0;
    int j = 0;

    while (j < n) {
      while (j < n && s[j] == ' ')  // Skip the spaces.
        ++j;
      while (j < n && s[j] != ' ')  // Keep non spaces
        s[i++] = s[j++];
      while (j < n && s[j] == ' ')  // Skip the spaces.
        ++j;
      if (j < n)  // Keep only one space.
        s[i++] = ' ';
    }

    return s.substr(0, i);
  }
    string reverseWords(string s) {
        vector<string>words;
        string word="";
        for (int i =0;i<s.size();i++){
            if(s[i]==' '){
                words.push_back(word);
                word="";
            }else{
                word+=s[i];
            }
        }
         words.push_back(word);
        word="";
        for(int i=words.size()-1;i>=0;i--){
            if(words[i]!=" "){
              word+=words[i]+' ';  
            }
            
        }

        return cleanSpaces(word,word.size()-1);
    }
};


class Solution {
public:
     string cleanSpaces(string& s, int n) {
    int i = 0;
    int j = 0;

    while (j < n) {
      while (j < n && s[j] == ' ')  // Skip the spaces.
        ++j;
      while (j < n && s[j] != ' ')  // Keep non spaces
        s[i++] = s[j++];
      while (j < n && s[j] == ' ')  // Skip the spaces.
        ++j;
      if (j < n)  // Keep only one space.
        s[i++] = ' ';
    }

    return s.substr(0, i);
  }
    string reverseWords(string s) {
        vector<string>words;
        string word="";
        for (int i =0;i<s.size();i++){
            if(s[i]==' '){
                words.push_back(word);
                word="";
            }else{
                word+=s[i];
            }
        }
         words.push_back(word);
        word="";
        for(int i=words.size()-1;i>=0;i--){
            if(words[i]!=" "){
              word+=words[i]+' ';  
            }
            
        }

        return cleanSpaces(word,word.size()-1);
    }
};
