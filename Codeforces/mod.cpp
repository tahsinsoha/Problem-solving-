#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout("mod41.txt");
    ifstream fin("mod.txt");
    long long x;
    for(long long i = 0; i<25; i++)
    {
        fin>>x;
        fout<<(x%43)<<endl;
    }
}
