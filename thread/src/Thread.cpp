#include "Thread.h"

Thread::Thread()
{
    //ctor
}

Thread::~Thread()
{
    //dtor
}

void Thread::run()
{
        this->threadPointer = new thread(&Thread::main, this);
}

void Thread::join()
{
    this->threadPointer->join();
}

void Thread::detach()
{
    this->threadPointer->detach();
}

void Thread::main()
{
    // todo
}
