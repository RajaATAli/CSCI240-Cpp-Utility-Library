**Stack**

A stack is a first in last out (FILO) data structure because the first elements added to a stack are
going to be the last elements removed from the stack.

Think of a stack like a stack of plates. You must add a plate onto the top of the stack
and when you want to remove a plate from the middle you must remove all the plates on top
in order to access the plate you want to remove. You can't just remove the plate from the middle.

This means that in order to traverse a stack you must go through each and every element in the stack. This
would mean time complexity of O(n).

A good example of where a stack is most important is in the heart of memory of software.

Memory is often broken up into heap memory and stack memory.

A stack is used because of how quick and easy it is to add and remove data to and from the stack. If you need an item gone from the stack then just look at the top and remove it.

This is one reason why stack allocations are prefered over heap allocations in a lot of scenarios because it is **fast**.

Another example of where a stack would be used is to revert changes in photo editors such as Photoshop.
The changes can be pushed onto the stack and then when a user wants to press an undo button or such then the program
can simply pop off a change for each undo.