#include <bits/stdc++.h>
using namespace std;

int main(){
    double n1;
    cout<<"Enter Number: "<<endl;
    cin>>n1;
    string op="";
    double ans;
    while(op!="AC"){
        cout<<"Type AC to clear.\n"<<"Enter Operation(+,-,x,/,%,^): "<<endl;
        cin>>op;
        ans=n1;
        if(op=="AC"){
            break;
        }
        if(op=="%"){
            ans/=100;
            cout<<ans<<endl;
            n1=ans;
            continue;
        }
        double n2;
        cout<<"Enter Number: "<<endl;
        cin>>n2;
        if(op=="+"){
            ans+=n2;
        }
        else if(op=="-"){
            ans-=n2;
        }
        else if(op=="x"){
            ans*=n2;
        }
        else if(op=="/"){
            ans/=n2;
        }
        else if(op=="^"){
            ans=pow(ans,n2);
        }
        cout<<ans<<endl;
        n1=ans;
    }

    return 0;
}