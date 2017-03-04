#pragma  once  
//用数组实现栈，数组索引为0的位置为栈底，索引top指向栈顶  
template<typename T>
class Stack
{
public:
	Stack(int capcity = 20);
	~Stack();
	void ClearStack();
	bool isEmpty();
	bool isFull();
	int StackLength();
	T GetTop();
	void Push(T e);
	void Pop();
private:
	T* elemArray;
	int top;
	int capcity;
};