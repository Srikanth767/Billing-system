#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <char> pizza_size;
float s=269.99;//price of small pizza
float m=322.99;//price of med pizza
float l=394.99;//price of large pizza

int find_comm(char a){
    int temp=0;
    for (int i=0; i<pizza_size.size(); i++){
        if(pizza_size[i]==a){
            temp++;
        } }
    return temp;
}

float new_pizza_rate(int temp,float s_p,float m_p,float l_p,int newp,int oldp,char modify){ float tot=0;
    int cnt=find_comm(modify);
    for (int i=0; i<pizza_size.size(); i++) {
        if (pizza_size[i] == 's' || pizza_size[i] == 'S') {
            tot=tot+s_p;
        }
        if (pizza_size[i] == 'm' || pizza_size[i] == 'M') {

            tot=tot+m_p;
        }
        if (pizza_size[i] == 'l' || pizza_size[i] == 'L') {

            tot=tot+l_p;
        }}
int diff=oldp-newp;
        if(temp ==1){
        tot=tot-(diff*s_p);
        }
        else if(temp ==2){
            tot=tot-(diff*m_p);
        }
        else if(temp ==3){
            tot=tot-(diff*l_p);
        }


return tot;
    }



float _print_price_facebook(){
    int count=0;
    float new_l=389.99;
    float tot=0;
    for (int i=0; i<pizza_size.size(); i++){
        if(pizza_size[i]=='s'||pizza_size[i]=='S'){
           tot=tot+s;
        }
        else if(pizza_size[i]=='m'||pizza_size[i]=='M'){count++;
            if(count%5==0){tot=tot+0;}
            else tot=tot+m;
        }
        else if(pizza_size[i]=='l'||pizza_size[i]=='L'){
            tot=tot+new_l;
        }
    }
    return tot;
}


float _print_price_amazon(){

    float new_l=299.99;
    float tot=0;
    for (int i=0; i<pizza_size.size(); i++){
        if(pizza_size[i]=='s'||pizza_size[i]=='S'){
            tot=tot+s;
        }
        else if(pizza_size[i]=='m'||pizza_size[i]=='M'){
            tot=tot+m;
        }
        else if(pizza_size[i]=='l'||pizza_size[i]=='L'){
            tot=tot+new_l;
        }
    }
        return tot;
}

float _print_price_default(){


    float tot=0;
    for (int i=0; i<pizza_size.size(); i++){
        if(pizza_size[i]=='s'||pizza_size[i]=='S'){

            tot=tot+s;
        }
        else if(pizza_size[i]=='m'||pizza_size[i]=='M'){
            tot=tot+m;
        }
        else if(pizza_size[i]=='l'||pizza_size[i]=='L'){
            tot=tot+l;
        }
    }
    return tot;
}

float _print_price_infosys(){
    int count=0;

    float tot=0;
    for (int i=0; i<pizza_size.size(); i++){
        if(pizza_size[i]=='s'||pizza_size[i]=='S'){count++;
          if(count%3==0){tot=tot+0;}
            else tot=tot+s;
        }
        else if(pizza_size[i]=='m'||pizza_size[i]=='M'){
            tot=tot+m;
        }
        else if(pizza_size[i]=='l'||pizza_size[i]=='L'){
            tot=tot+l;
        }
    }
    return tot;
}

void _print_pizza(){
    for (int i=0; i<pizza_size.size(); i++)
        std::cout << pizza_size[i] << ",";

    }



void _print_details(char c_name){
if(c_name=='A'){
    std::cout<<"Your company name: Amazon";
    std::cout<<endl<<"Your choice of pizzas:";
    _print_pizza();
    std::cout<<endl<<"Your total price:"<<_print_price_amazon();
}
else if(c_name=='I'){
    std::cout<<endl<<"Your company name: Infosys";
    std::cout<<endl<<"Your choice of pizzas:";
    _print_pizza();
    std::cout<<endl<<"Your total price:"<<_print_price_infosys();
}

else if(c_name=='F'){
    std::cout<<endl<<"Your company name: Infosys";
    std::cout<<endl<<"Your choice of pizzas:";
    _print_pizza();
    std::cout<<endl<<"Your total price:"<<_print_price_facebook();
}

else{
    std::cout<<endl<<"Your company name: Default";
    std::cout<<endl<<"Your choice of pizzas:";
    _print_pizza();

    std::cout<<endl<<"Your total price:"<<_print_price_default();
}
}

int main()
{
    cout<<"Enter 0 for default settings or 1 for new settings";
    int x;
    cin>>x;
    if(x==0){

char c_name;
    cout<<"Welcome to Billing system";
    cout<<endl<<"Enter the customer name Amazon(A), Infosys(I),Facebook(F) & Others(D):";
    std::cin>>c_name;
    char pizza;
    cout<<endl<<"Enter pizza size(S/M/L). Type # finish Billing:";
    cin>>pizza;
    while(pizza!='#'){ pizza_size.push_back(pizza);
        cout<<endl<<"Enter pizza size(S/M/L). Type # finish Billing:";
        cin>>pizza;

    }cout<<endl;

    _print_details(c_name);
    }

    else{

        char c_name;
        cout<<"Welcome to Billing system";
        cout<<endl<<"Enter the customer name :";
        std::cin>>c_name;
        float s_p,m_p,l_p;
        cout<<"Enter your new small pizza price:";
        cin>>s_p;
        cout<<"Enter your new med pizza price:";
        cin>>m_p;
        cout<<"Enter your new large pizza price:";
        cin>>l_p;
        int oldp,newp;
        cout<<"Enter No of old pizzas else enter 0: ";
        cin>>oldp;
        cout<<"Enter no of new pizzas for same price else enter 0: ";
        cin>>newp;
        char modify;
        cout<<"Enter which size you wish to modify: ";
        cin>>modify;

        char pizza;
        cout<<endl<<"Enter pizza size(S/M/L). Type # finish Billing:";
        cin>>pizza;
        while(pizza!='#'){ pizza_size.push_back(pizza);
            cout<<endl<<"Enter pizza size(S/M/L). Type # finish Billing:";
            cin>>pizza;
        }
        int count=0, temp=0;
        //count=find_comm(modify);
//cout<<"count:"<<count;
        if(modify=='s'||modify=='S'){temp=1;}
        if(modify=='m'||modify=='M'){temp=2;}
        if(modify=='l'||modify=='L'){temp=3;}
        float tot=0;
tot=new_pizza_rate(temp,s_p,m_p,l_p,newp,oldp,modify);
    cout<<endl<<"Your total bill is:"<<tot;

    }
    return 0;
}
