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

thread::id Thread::getThreadId()
{
    return std::this_thread::get_id();
}

void Thread::main()
{
    // todo
}
