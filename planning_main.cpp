#include <iostream>
#include "process.h"
using namespace std;
int main()
{
    cout << "Starting the process..." << endl;
    Process pro;
    pro.planProcess();
    cout << "Process finished." << endl;
    return 0;
}