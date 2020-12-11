#pragma once

//By far the easiest class I made, it was a fun project though,
//First in, last out structure... yadayadayada... Enjoy.
template <class T>
class linked_stack {
	struct elem {
		elem* prev;
		T val;
	} *top;
public:
	linked_stack(void) : top(0) {}
	linked_stack(const linked_stack<T>&) = delete;
	linked_stack(linked_stack<T>&&) = delete;
	~linked_stack() { clear(); }

	void push(const T& val) {
		top = new elem{ top, val };
	}
	T* peek(void) {
		return top ? &top->val : 0;
	}
	const T* peek(void) const {
		return top ? &top->val : 0;
	}
	void pop() {
		if (top) {
			elem* temp = top->prev;
			delete top;
			top = temp;
		}
	}
	void clear() {
		while (top) {
			elem* temp = top->prev;
			delete top;
			top = temp;
		}
	}
};