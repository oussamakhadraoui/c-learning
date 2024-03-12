 #include <bits/stdc++.h>
 using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
      vector<int>chars(26,0);
      for(char c :s)chars[c-'a']++;
      string result="";
      for(char c:order){
          while(chars[c-'a']!=0){
             result+=c;
             chars[c-'a']--;
          }
      }
       for(int i=0;i<chars.size();i++){
           while(chars[i]!=0){
               result+=char(97+i);
               chars[i]--;
           }
       }
        return result;
    }
};













===> user
    orders = relationship(
        "Order",
        back_populates="user",
        foreign_keys="Order.user_id",
    )

=====> order
    user_id = Column(Integer, ForeignKey("users.id"), nullable=False)
    user = relationship("User", back_populates="orders")




