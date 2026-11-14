#include <iostream>
#include "process.h"
using namespace std;

void Process::planProcess()
{
    cout << "Planning the process..." << endl;
    my_map.mapInfo();  // Call the mapInfo function of PNC_Map
    cout << "Process planning completed." << endl;
}