#include <iostream>
#include "ServiceThread.h"

using namespace std;

int main()
{
    ServiceThread thread;
    thread.run();
    thread.join();
    return 0;
}
