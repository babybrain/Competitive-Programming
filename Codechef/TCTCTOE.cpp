#include<bits/stdc++.h>
using namespace std;

int checkWin(vector<string> &arr,char ch){
    int wins=0;
    if(arr[0][0]==ch && arr[1][1]==ch && arr[2][2]==ch)
        wins++;
    if(arr[0][2]==ch && arr[1][1]==ch && arr[2][0]==ch)
        wins++;
    for(int i=0;i<3;i++){
        int c=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==ch)
            {
                c++;
            }
        }
        if(c==3)
            wins++;
        else
            c=0;
        for(int j=0;j<3;j++){
            if(arr[j][i]==ch)
            {
                c++;
            }
        }
        if(c==3)
            wins++;
        else
            c=0;

    }
    return wins;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        vector<string> arr(3);
        string val;
        int o=0,x=0,blank=0;
        for(int i=0;i<3;i++){
            cin>>val;
            arr[i]=val;
            for(int j=0;j<3;j++){
                if(val[j]=='O')
                    o++;
                else if(val[j]=='X')
                    x++;
                else if(val[j]=='_')
                    blank++;
            }
        }
        if((x-o)==0 || (x-o)==1)
        {
                int xWin=checkWin(arr,'X');
                if((xWin>1) && ((x-o)==1))
                    cout<<"1\n";
                else if(xWin==1){
                    if((checkWin(arr,'O')==0) && ((x-o)==1))
                        cout<<"1\n";
                    else
                        cout<<"3\n";
                }
                else {
                        int oWin=checkWin(arr,'O');
                        if((oWin==1) && ((x-o)==0))
                            cout<<"1\n";
                        else if((oWin==1) && ((x-o)!=0))
                            cout<<"3\n";

                        else{
                            if(blank==0)
                                cout<<"1\n";
                            else
                                cout<<"2\n";
                        }


                }
                /*int oWin=checkWin(arr,'O');

                if(xWin==1 && oWin==1)
                    cout<<"3\n";
                else if((xWin==1 && oWin==0) || (xWin==0 && oWin==1))
                {
                 if(xWin==1 && oWin==0){
                    if((x-o)==1)
                        cout<<"1\n";
                    else
                        cout<<"3\n";
                 }
                 else if(xWin==0 && oWin==1){
                    if((x-o)==0)
                        cout<<"1\n";
                    else
                        cout<<"3\n";
                 }
                }
                else if(xWin==0 && oWin==0 && blank==0)
                    cout<<"1\n";
                else if(xWin==0 && oWin==0 && blank!=0)
                    cout<<"2\n";
                else if(xWin>1)
                    cout<<"3\n";
                    */
        }
        else{
                cout<<"3\n";
        }
    }
}
