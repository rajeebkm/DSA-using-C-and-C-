# Physical and Logical Data Structure

## Physical Data Structure 
a) Array
b) Linked Lists

In the previous video, already we have studied how a program utilizes the main memory by dividing

the memory into sections, like stack and heap. And, we have also understood what is static memory

allocation and what is dynamic memory allocation.

Now let us move to the topic, that is, Introduction to Data Structures. In this video,

I will be giving introduction to various data structures.

I have categorized them here as physical data structures and logical data structures.

So first, I'll explain what are physical data structures,

just the introduction. Then, introduction to various Logical Data Structures.

Now, let us look at Physical Data Structures.

These are the two physical data structures, Array and Linked List.

We can have more physical data structures, by taking the combination of these, that is Array

and Linked List, we can have some variations in them.

Basically these are two.

The first thing, why I'm calling them as physical?

The reason is, these data structure decides or defines how the memory is organized, how the memory is

allocated.

So, let us look at them one by one.

This is an Array.

This is directly supported by programming languages, like it is there in C language, in C++, and even

in Java.

This is directly supported.

This is a collection of contiguous memory locations, all these locations are side by side.

If I have an array for seven integers, then all these places for seven integers are together,

They are at one place.

This array will have fixed size, once it is created of some size, then that size cannot be increased or

decreased.

So, it is a fixed size. So, the size of an array is static.

Where this array can be created? An array can be created either inside stack or it can be created inside

heap.

We can have a pointer, pointing to this array. So, array can be created either inside stack or inside heap,

any where it can be created. When to use this data structure?

When you are sure, what is the maximum number of elements that you are going to store, if you know the

length of the list, then you can go for array. Now, second data structure, Linked List.

This is a complete dynamic data structure, and it is a collection of nodes, where each node contains data

and is linked to the next node.

The length of this list can grow and reduce, dynamically. So, it is having variable length.

So, as per your requirement,

You can go on adding more and more nodes and add more elements, or

You can reduce the size.

This Linked List is always created in heap.

Collection of nodes are created always in heap, like head may be a pointer, that is pointing there,

So the head pointer may be inside the stack.

So Linked List is always created in heap.

We go with this one, if you know the limit of list, or the size of the list.

If it is fixed. And, we go with this,

If the size of the list is not known.

So these two are physical because they define how the memory should be organized for storing the elements

or for storing the data.

So these are more related to memory.

So, I've just introduced these two data structures to you, as this is a separate topic in our subject.

Now, let us move on to the next type of data structures, that is Logical Data Structures.

## Logical Data Structure

Linear
-----------------------
a) Stack (LIFO)
b) Queues (FIFO)

Non-Linear
----------------------
c) Trees
d) Graph

Tabular
--------------------
e) Hash Table


Now, let us look at logical data structures. See, here is the list of logical data structures, that are Stack,

Queues, Trees, Graphs and Hash Table. And, these are physical data structures,

Already we have seen. Now, let us look at the differences between them.

Physical data structures are actually meant for storing the data, they will hold the data, they will actually

store the data in the memory.

Then, when you have the list of values you may be performing operations like, inserting more values, or

deleting existing values, or searching for the values, and many more operations.

Now the question is, How you want to utilize those values? How you will be performing insertion and deletion?

What is the discipline that you are going to follow? That discipline is defined by these data structures,

that is, stack, queues, trees, graphs and hash table.

These are linear data structures, and these are non-linear, and this may be linear or tabular data structure.

Hash Table, so it is tabular. So, it is a tabular data structure. Stack,

This works on discipline that is, LIFO,

Last In First Out.

Queue works on the discipline that is, FIFO.

This is a non-linear data structure,

This will be organized like a hierarchy, and this is collection of nodes and the links between the

nodes.

So these data structures are actually used in applications.

These are data structures are actually used in algorithms. And for implementing these data structures,

We either use array or Linked List. So, this is the important point that we have to learn in this topic, that

is, these logical data structures are implemented using any of these physical data structures, either array,

or linked list, or combination of array and linked list.

So that's all, I have given the introduction of various types of data structures.

I have categorized them.

This was just the introduction, to give you awareness. So, the conclusion of this topic is, I wanted

to differentiate types of data structures that is, physical data structures, arrays and linked lists, and these

are logical, and these logical data structures are implemented using physical data structures, either

using array and linked lists. So, through out our course, we will learn about each data structures and we will implement

them using array, as well as we'll implement them using linked lists.

So we have to learn these. Here, I have given just names of the data structures, some of the data structures.

If you pick up each topic, there are lot of sub topics in them, like there are different types of queues, there

are different types of trees, and there are different types of graphs.

So, each and everything, we'll learn all those things in detail.

So, in our course, we will be first learning in detail about this arrays and linked lists data structures. We will

implement them, we will write the programs for these, then we'll start learning about these data structures.

Every data structure, we will implement using array as well as linked list. So, in the next video, I'll

explain, what is ADT? And, what are the various types of lists ?

