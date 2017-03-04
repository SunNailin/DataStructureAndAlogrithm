#pragma  once  
//������ʵ��ջ����������Ϊ0��λ��Ϊջ�ף�����topָ��ջ��  
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