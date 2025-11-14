#include<bits/stdc++.h>
using namespace std;

void  explainVector(){


    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    

    vector <pair<int, int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4); 

    vector <int> v3(5,100);
    vector <int> v4(5);
    vector <int> v1(5,20);
    vector <int> v2(v1);
    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(it) << " " ;
    it = it +2;
    cout<< *(it) << " " ;


     vector<int>::iterator its = v.end();
     /*

     vector<int>::iterator it = v.rend();
      vector<int>::iterator it = v.rbegin();
     */

     cout << v.back()<< " ";

     for (vector<int>::iterator it = v.begin() ;it!= v.end(); it++){
     cout<< *(it) << " " ;
     }
     for (auto it = v.begin() ;it!= v.end(); it++){
     cout<< *(it) << " " ;
     }
     for(auto it : v){ 
     cout<< it << " " ;
     }
}
void explainList(){
   list<int> ls ;

   ls.push_back(2);
   ls.emplace_back(4);

   ls.push_front(5);
   ls.emplace_front();

}
void explainExtra(){

  int a;
  int n;
  vector<int> v;
  sort(a,a+n);
  sort(v.begin(),v.end());
  
}
void explainSet(){
  
 set<int>sp;
 sp.insert(1);
 sp.emplace(2);
 sp.insert(2);
 sp.insert(3);

  for ( int x : sp) { 
       cout << x << " ";
    }

}
int main(){
    
    explainSet();

    return 0;
}
