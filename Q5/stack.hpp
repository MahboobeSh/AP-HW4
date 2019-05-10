

template<class T>
void Stack<T>::push(T pushed) {		//same function written in the class
	pTop = new Item(pushed, pTop);
	cnt++;
}

template<class T>
T Stack<T>::pop() {		//same function written in the class
	if (!pTop)	//if stack is empty
		return nullptr;
	T pT = pTop->added;
	Item* pTemp = pTop;
	pTop = pTop->pNext;
	delete pTemp;
	cnt--;
	return pT;
}

template<class T>
bool Stack<T>::isEmpty() {
	return !pTop;	//returns true if pTop is empty
}

template<class T>
int Stack<T>::getCount() {		//return the counter
	return cnt;
}

template<class T>
T* Stack<T>::operator->() const {
	return this;	//this is the pointer which the entered operator will run
}

template<class T>
Stack<T>::~Stack() {	//destructor
	Item* pTemp{};
	while (pTop) {
		pTemp = pTop;
		pTop = pTop->pNext;
		delete pTemp;
	}
}
