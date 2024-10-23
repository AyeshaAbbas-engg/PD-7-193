#include<iostream>
using namespace std;
string hospital(int num);
main(){
    int num;
    cout << "Enter the number of days who visited Hospital:";
    cin >> num;
    string ans= hospital(num);
    cout << ans;
}
string hospital(int num){
    int check=0;
    string answer=" ";
    int treated=0,untreated=0, store=0,store2=0, doc=7;
    for(int x=1;x<=num;x++){
        cout << "number of patients who visited hospital on Day "<< x <<":";
        cin >>check;
        if(x%3==0 && store2>store){
             
            doc++;
            
        }
        if(check<=doc){
            treated=check;
            store+=treated;
            untreated=0;
            store2+=untreated;

        
        }
        else if(check>doc){
            store2+=check-doc;
            store+=doc;
       }
        
        


    }
    answer = "Treated patients:" + to_string(store) + "\n";
    answer += "Untreated Patients:" + to_string(store2) + "\n";

    return answer;
    
}

