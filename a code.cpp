#include<iostream>
using namespace std;

int main()
{
    int gc = 0;
    int gl = 6;
    int g;
    int sn=66;
    bool oog = false;
    while (sn!=g && !oog){
        if(gc < gl){
            cout << "Enter a guess ";
            cin >> g;
            gc ++;
        }
        else {
            oog = true;
        }
    }
    if(oog){
        cout << "You lose"<<endl;
    }
    else{
    cout << "You win" << endl;
    }
    return 0;
}
