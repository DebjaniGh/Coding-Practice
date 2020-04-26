//Menu driven program for basic calculator 

#include <bits/stdc++.h>
using namespace std;

void menu()
{
    cout<<"Press 1 for addition."<<endl;
    cout<<"Press 2 for subtraction."<<endl;
    cout<<"Press 3 for multiplication."<<endl;
    cout<<"Press 4 for division."<<endl;
    cout<<"Press 5 for modulo."<<endl;
    cout<<"Press 6 for x^y."<<endl;
}

float result(float num1, float num2, int choice)
{
    float res;
    switch(choice){
        case 1: res = num1 + num2;
                break;
                
        case 2: res = num1 - num2;
                break;
                
        case 3: res = num1 * num2;
                break;
                
        case 4: res = num1 / num2;
                break;
                
        case 5: res = fmod(num1, num2);
                break;
                
        case 6: res = pow(num1, num2);
                break;
        
        default: cout<<"Error! Wrong operator."<<endl;
    }
    return res;
}

int main() {
	menu();
	int t;
	cin>>t;
	while(t--)
	{
	    int choice;
    	cin>>choice;
    	float x, y;
    	cin>>x>>y;
	    cout<<result(x, y, choice)<<endl;
	}
	return 0;
}
