#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    int b;
    int DaysNumber;
    int final =0;
cin>>a>>b >>DaysNumber;
for(int i=0;i<DaysNumber;i++)
{
int x; 
cin>>x;
if(x>=a&&x<=b){
    final++;
}
}

cout<<final;
    return 0;
} 

#include <iostream>
#include <vector>
using namespace std;



bool compare(int D ,int F,int d,int f){
bool comp=false;
if((d>=D&&d<=F)||(f>=D&&f<=F)||(f>=F&&d<=D)){
    comp=true;
}


    return comp;
}
int main() {
int start,end,totalInvi;
int final=0;
cin>>start>>end>>totalInvi;
for(int i =0;i<totalInvi;i++){
    int d,f;
    cin>>d>>f;
   if(compare(start,end,d,f)){
    final++;
   }
}
cout<<final;
return 0;
}

#include <iostream>
using namespace std;

int main (){
    int frog , tour;
    
cin>>frog>>tour;
int array[frog]={0};
for(int i = 0 ;i<tour;i++){
   int fro,distance;
   cin>>fro>>distance;
   array[fro]={array[fro]+distance};

}
for(int i = 0;i<=sizeof(array);i++){

 cout<<array[i];
}
    return 0;
}