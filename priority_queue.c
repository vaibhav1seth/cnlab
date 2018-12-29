    #include<iostream>
    #include<queue>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    queue <int> hp;
    queue <int> lp;
    char choice;
    int d;
    char p;
    do
    {
    cout<<"enter data along with priority:";
    cin>>d>>p;
     
    if(p=='H'||p=='h')
    hp.push(d);
    else
    lp.push(d);
     
    cout<<"\ndo you want to continue[y/n]:";
    cin>>choice;
     
    }while(choice=='y'||choice=='Y');
     
    cout<<"\nprocessing data...";
    cout<<"\nprocessing high priority queue...";
     
    while(!hp.empty())
    {
    cout<<hp.front()<<"\t";
    hp.pop();
    }
     
    cout<<"\nprocessing low priority queue...";
     
    while(!lp.empty())
    {
    cout<<lp.front()<<"\t";
    lp.pop();
    }
    cout<<"\n over";
     
    return 0;
    }
