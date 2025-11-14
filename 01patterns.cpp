#include<iostream>
using namespace std;

void print(int n){
    for (int i=0;i<n;i++){
       for (int j=0; j<i; j++){
         cout<<" ";
        }
       for (int j=0; j<2*(n-i-1)+1; j++){
        cout <<"*";
        }
       for (int j=0; j<i; j++){
        cout<<" ";
        }
        cout<< endl;
    }
}
void print1(int n){
    for (int i=0;i<n;i++){
       for (int j=0; j<n-i-1; j++){
         cout<<" ";
        }
       for (int j=0; j<2*i+1; j++){
        cout <<"*";
        }
       for (int j=0; j<n-i-1; j++){
        cout<<" ";
        }
        cout<< endl;
    }
}
void print2(int n){
  for(int i=0; i<=2*n-1; i++){
    int star =i;
    if (i>n) star=2*n-i;
    for (int j=0; j<=star; j++){
        cout<< "*";
    }
    cout<<endl;
  }
}
void print3(int n){
  int start = 1;
  for (int i=0; i<n; i++){
    if (i%2==0)start=1;
    else start=0;
    for(int j=0; j<=i; j++){
      cout << start;
      start= 1-start;
    }
    cout<<endl;
  }
}
void print4(int n){
  int space=2*(n-1);
  for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
      cout<< j;

    }
    for(int j=1; j<= space; j++){
      cout<<" ";

    }
     for(int j=i;j>=i;j-- ){
        cout<< j;

    } 
    }
    cout<< endl;
    space -= 2;
  }
void print5(int n){
  for (int i=0;i<=n; i++){
    for(char ch='A'; ch<='A'+i; ch++){
      cout<< ch<< " ";

    }
    cout<< endl;
  }
}
void print6(int n){


  for (int i=0;i<n;i++){
    for ( char ch ='A'; ch<='A'+(n-i-1); ch++){
      cout << ch << " ";

    }
    cout << endl;
  }
}
void print7(int n){

  for(int i=0; i<n;i++){
    char ch = 'A' + i ;
    for(int j=0;j<=i;j++)
    {
      cout <<ch<< " ";
    }
    cout << endl;
  }
}
void print8(int n){
    for (int i=0;i<n;i++){
       for (int j=0; j<n-i-1; j++){
         cout<<" ";
        }
        char ch = 'A';
         int breakpoint = (2*i+1)/2 ; 
       for (int j=1; j<=2*i+1; j++){
        cout <<ch;
        if(j <= breakpoint)ch++;
        else ch--;
        } 
       for (int j=0; j<n-i-1; j++){
        cout<<" ";
        }
        cout<< endl;
    }
  }
void print9(int n){
     char ch ='E';
    for (int i=0; i<n; i++){
      for(int j=0;j<=i;j++){
        cout<<ch;
        ch--;
      }
      cout<<endl;
    }
}
void print10(int n){
  for(int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      if( i == 0 || j==0 || j==n-1||i==n-1){
        cout<<"* ";
      } 
      else   cout<<"  ";
    }
    cout << endl;
  }

}
int main(){
   int t;
   cin>> t;

   for (int i=0;i<t;i++){
    int n;
    cin>>n;
     print7(n);
   }

}
