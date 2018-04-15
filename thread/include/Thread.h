#ifndef THREAD_H
#define THREAD_H

#include <thread>

using namespace std;

class Thread
{
    public:
        Thread();
        void run();
        thread::id getThreadId();
        virtual void main();
        virtual void join();
        virtual void detach();
        virtual ~Thread();
    protected:
    private:
        thread *threadPointer;
};

#endif // THREAD_H
