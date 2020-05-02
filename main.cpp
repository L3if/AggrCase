#include <iostream>
#include <cstring>
#include "file1.h"
#include "file2.h"
#include "file3.h"



using namespace std;

int main(int argc, char* argv[])
{
    int a = func1();
    while (func2(a))
    {
        switch (func3())
        {
            case 1:
                func4();
                break;
            case 2:
                func5();
                while (func6())
                {
                    func7();
                }
            default:
                if (func8())
                {
                    func9();
                    continue;
                }
                do func10();
                while (func11());
                func12();
                break;                
        }
        func13();
        a--;
    }
    func14();
    return 0;
}

