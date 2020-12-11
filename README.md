# Linked stack for C++

This is a Last in, First out structure called a stack,

It has several functions:
  Push onto the stack,
  Pop off of the stack,
  Peek at the top of the stack,
  Clear the stack.

Initializing:
	While initializing your object, it requires a template parameter for the type that you choose to use it with.
Pushing:
	Pass an element, by contant reference to the push() function. It will be copied into a new space on the stack.
Popping:
	Will remove the top of the stack, if the size of your stack is not zero.
Peeking:
	Returns either a non-constant, or constant pointer to the element at the top of the stack.
	The pointer can be used to edit the object, however make sure that the pointer is not zero
	when you try to use the object, because that means that the stack is empty.
Clearing:
	Calling the clear() function just repeatedly pops off the top element, untill your stack is empty.
Deconstructing:
	Calls the clear function.
