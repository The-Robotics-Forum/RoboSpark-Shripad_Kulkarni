#include<iostream>
#include<string.h>
using namespace std;

class strin{
    public:
    char str[20];
    strin(){    }
    strin(char str[]){
        strcpy(this->str,str);
    }
    strin operator + (strin s){
        strin c;
        strcat(this->str,s.str);
        strcpy(c.str,this->str);
        return c;
    };
    strin operator * (int n){
        strin c;
        char a[20]="";
        strcpy(a,this->str);
        for(int i=0;i<n-1;i++){
            strcat(a,this->str);
        }        
        return a;
    };
    friend ostream& operator << (ostream &cout, strin &s);
    // 
};

ostream& operator << (ostream &cout,strin &s){
        cout<<s.str<<endl;
        return cout;
    }
int main(){
    char a[]="rohit",b[]="singh";
    strin s1(a),s2(b);
    strin c=s1*4;
    strin d= s1+s2;
    cout<<c;    
    cout<<d;
}