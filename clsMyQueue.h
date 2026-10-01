#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std; 
template <class T >
class clsMyQueue
{ 

protected :
   
	clsDblLinkedList <T> _MyList;

public:
	void push(T Value) {
		_MyList.InsertAtEnd(Value);
	}
	void pop() {
		_MyList.DeleteFirstNode();
	}
	void print() {
		_MyList.PrintList();
	}
	int Size() {
		return _MyList.Size();
	}
	bool IsEmpty() {
		return _MyList.IsEmpty();
	}
	T front() {
		return _MyList.GetItem(0);
	}
	T back() {
		return _MyList.GetItem(Size() - 1);
	}
	T GetItem(int Index) {
		return _MyList.GetItem(Index);
	}
	void Reverse() {
		_MyList.Reverse();
	}
	void InsertAtFront(T Value) {
		_MyList.InsertAtBeginning(Value);
	}
	void InsertAtBack(T Value) {
		_MyList.InsertAtEnd(Value);
	}
	void Clear() {
		_MyList.Clear();
	}
	void UpdateItem(int Index, T Value) {
		_MyList.UpdateItem(Index, Value);
	}
	void InsertAfter(int Index, T Value) {
		_MyList.InsertAfter(Index, Value);
	}

};
//My first Code
//template <class T >
//class clsMyQueue
//{
//public:
//
//	class Node;
//
//
//private : 
//	Node* _Back = nullptr;
//	int _Size=0;
//	Node* _head = nullptr;
//public : 
//	class Node {
//	public:
//
//		T Value;
//		Node* Next=nullptr;
//
//	};
//	void Push(T Value) {
//
//
//		Node * NewNode = new Node();
//		NewNode->Value = Value;
//
//
//		if (_Size == 0) {
//			_head = NewNode;
//		    _Back = NewNode;
//
//	    }
//		else
//		{
//			_Back->Next = NewNode;
//			_Back = NewNode;
//		}
//		
//		_Size++;
//
//    }
//	void Pop() {
//
//		if (_Size == 0)
//			return;
//
//		if (_head->Next == nullptr)
//		{
//			delete _head;
//			_head = _Back = nullptr;
//		}
//		else
//		{
//			Node* tmp = _head;
//			_head = _head->Next;
//			delete tmp;
//		}
//
//		_Size--;
//	}
//	void Print() {
//		if (_Size == 0)
//			return;
//		
//		Node* tmp = _head;
//		while (tmp != nullptr) {
//			cout << tmp->Value << "  ";
//			tmp = tmp->Next;
//		}cout << endl;
//
//	}
//	int Size() {
//		return _Size;
//	}
//	T Front() {
//		if (_Size == 0) {
//			return T{};
//		}
//		return _head->Value;
//	}
//	T Back() {
//		if (_Size == 0) {
//			return T{};
//		}
//		return _Back->Value;
//
//	}
//};
//
