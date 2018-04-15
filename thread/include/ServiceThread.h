#ifndef SERVICETHREAD_H
#define SERVICETHREAD_H

#include "Thread.h"
#include <iostream>

class ServiceThread: public Thread
{
    public:
        ServiceThread();
        void main();
        virtual ~ServiceThread();
    protected:
    private:
};

#endif // SERVICETHREAD_H
