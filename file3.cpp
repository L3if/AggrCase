#include <iostream>
#include <cstring>
#include "file2.h"

using namespace std;

void func10()
{
    cout << "Node 10 done\n";
}

bool func11()
{
    cout << "This is node 11\nEnter 1 to go back to node 10, 0 to and go to 12\n";
    int a;
    cin >> a;
    return a;
}

void func12()
{
    cout << "Node 10 done\n";
}
