#include <iostream>
#include "ServiceThread.h"

using namespace std;

int main()
{
    ServiceThread thread;
    thread.run();
    thread.join();
    thread::id threadId = thread.getThreadId();
    cout<<threadId<<endl;
    return 0;
}
