
#Stack

A stack is a first in last out (FILO) data structure because the first elements added to a stack are
going to be the last elements removed from the stack.

Think of a stack like a stack of plates. Plates must be add onto the top of the stack
and when a plate should be removed all the plates on top must also be removed
in order to access the plate to be removed. Plates can't just be removed from the middle.

This means that in order to traverse a stack elements must be accessed one by one ( O(n) time complexity ).

##Use Cases

A good example of where a stack is most important is in the heart of memory of software.

Memory is often broken up into heap memory and stack memory.

A stack is used because of how quick and easy it is to add and remove data to and from the stack. If you need an item gone from the stack then just look at the top and remove it.

This is one reason why stack allocations are prefered over heap allocations in a lot of scenarios because it is **fast**.

Another example of where a stack would be used is to revert changes in photo editors such as Photoshop.
The changes can be pushed onto the stack and then when a user wants to press an undo button or such then the program
can simply pop off a change for each undo.