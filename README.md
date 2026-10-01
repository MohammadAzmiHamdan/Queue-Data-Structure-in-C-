# Queue Data Structure in C++

A generic **Queue implementation in C++** built using a custom **Doubly Linked List** as the underlying data structure.

This project demonstrates how a higher-level data structure can be implemented by reusing an existing, reusable data structure instead of managing nodes and pointers from scratch.

## Overview

The `clsMyQueue<T>` class follows the fundamental **FIFO (First In, First Out)** principle:

> The first element added to the Queue is the first element removed.

The Queue internally uses:

```cpp
clsDblLinkedList<T> _MyList;
```

This allows the Queue to reuse the functionality already implemented in the Doubly Linked List.

## Main Operations

### Push

Adds an element to the back of the Queue.

```cpp
void push(T Value) {
    _MyList.InsertAtEnd(Value);
}
```

### Pop

Removes the first element from the Queue.

```cpp
void pop() {
    _MyList.DeleteFirstNode();
}
```

### Front

Returns the first element in the Queue.

```cpp
T front() {
    return _MyList.GetItem(0);
}
```

### Back

Returns the last element in the Queue.

```cpp
T back() {
    return _MyList.GetItem(Size() - 1);
}
```

## Additional Operations

The implementation also provides:

* `Size()` – Returns the number of elements.
* `IsEmpty()` – Checks whether the Queue is empty.
* `GetItem()` – Retrieves an element by index.
* `Reverse()` – Reverses the Queue.
* `InsertAtFront()` – Inserts an element at the beginning.
* `InsertAtBack()` – Inserts an element at the end.
* `Clear()` – Removes all elements.
* `UpdateItem()` – Updates an element.
* `InsertAfter()` – Inserts an element after a specific index.
* `print()` – Prints all Queue elements.

## Template Support

The Queue is implemented using a C++ template:

```cpp
template <class T>
class clsMyQueue
```

This allows the Queue to work with different data types:

```cpp
clsMyQueue<int> Numbers;
clsMyQueue<string> Names;
```

## Implementation Approach

The Queue is built on top of the previously implemented:

```cpp
clsDblLinkedList<T>
```

Instead of manually managing:

* Nodes
* Head pointers
* Back pointers
* Dynamic memory allocation

the Queue delegates these responsibilities to the Doubly Linked List.

This demonstrates an important programming concept:

**Composition and code reuse.**

A data structure can use another data structure internally to simplify its implementation and avoid duplicating code.

## Original Implementation

Before using the Doubly Linked List, I implemented the Queue manually by creating my own `Node` class and managing:

```cpp
Node* _head;
Node* _Back;
int _Size;
```

The original implementation handled node creation, insertion, deletion, and memory management directly.

Keeping this implementation as a reference helped me compare the low-level implementation with the more reusable version based on the Doubly Linked List.

## Queue Structure

The basic Queue flow is:

```text
Front
  ↓
[10] → [20] → [30] → [40]
                         ↑
                        Back
```

`push()` adds elements to the **Back**, while `pop()` removes elements from the **Front**.

## Time Complexity

With the current Doubly Linked List implementation:

| Operation | Complexity |
| --------- | ---------: |
| Push      |       O(n) |
| Pop       |       O(1) |
| Front     |       O(1) |
| Back      |       O(n) |
| Size      |       O(1) |
| IsEmpty   |       O(1) |
| Reverse   |       O(n) |
| Clear     |       O(n) |

The `push()` operation is O(n) here because `InsertAtEnd()` traverses the linked list to find the last node.

## Concepts Practiced

* Queue
* FIFO
* Doubly Linked List
* Templates
* Composition
* Code Reusability
* Pointers
* Dynamic Memory
* Object-Oriented Programming
* Data Structures
* Time Complexity

## Learning Goal

The main goal of this implementation was to understand how a **Queue can be built using an existing Doubly Linked List**, while practicing code reuse and abstraction.

This implementation also provides a foundation for building other higher-level data structures such as **Stack, Deque, and other custom containers**.
