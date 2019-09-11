#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void drzewo(int n, int* tab, int i)
{
    if( i==1 )
    {
        if(tab[0] > tab[i])
        {
            swap(tab[0], tab[i]);
        }
    }
    else
    {
        if(tab[(i-1)/2] )
    }
}

void dodaj_do_drzewo(int* tab, int i)
{
    tab[i] = rand()%10+1;
}

int main()
{
    int n = 13;
    int tab[n];

    for(int i = 0; i < n; i++)
    {
        if(i == 0) cin>>tab[i];
        else
        {
            dodaj_do_drzewo(tab, i);
            drzewo(n, tab, i);
        }

    }

    return 0;
}
