# Queues


simplest way to implement the queue data structure in Golang is to use a slice.  
Since a queue follows a FIFO (First-In-First-Out) structure,  

dequeue and enqueue operations can be performed as follows:  

    Use the built-in append function to enqueue.  
    Slice off the first element to dequeue.  

