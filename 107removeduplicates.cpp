#include<iostream>
using namespace std;

string removeduplicates(string str){
   
    int i=0;
    while(i<str.size()-1){
            if(str[i]==str[i+1]){
                
                str.erase(i,2);
            
                if(i>0)
                i--;
            }
            else{
                i++;
            }
        }
        return str;
          
    }
    

    int main(){
        string s="azbbzy";
        cout<<removeduplicates(s)<<endl;
        return 0;
    }
