# ADT (Abstract Data Type)

## What is ADT

Data Types
a) Representation of Data
b) Operation on Data

If we take an example of an integer data type in C, C++ languages, then if we assume that integer data

type it takes 2 bytes in C, C++.

If we assume that, then once I declare any variable of type integer, in C, C++ we get memory of 2 bytes,

that is 16 bits.

So these are 16 bits. So an integer type data is stored in 2 bytes together as a single value, as a

single data.

Now in this, 1 bit is reserved as sign bit, to allow both positive as well as negative numbers, and

the rest of the 15 bits are allowed for storing data, that is any number.

This is 1 bit. 1 bit for sign bit, the remaining bits are meant for storing a number.

This is how integer is represented inside the memory in 2 bytes.

So, this is the representation of integer data type.


----------------------

and the operations of data.

Example of an integer

I have taken. So, integer,

This is how it is represented.

So this is the first thing we have covered.

And, what are the operations allowed on integer type data in C, C++ languages?

That is arithmetic

operations are allowed on them.

That is + , - , * , / and %

Apart from these, relational operations that is, , and, increment, decrement

operators are allowed.

That is, ++ or -- , both pre-increment and post-increment.

So, these are some of the set of operations that are allowed on integer data.

So, that's all.

This is a data type.

So, if you talk about data type,

Any data type in a language, then that data type will have its representations and the set of operations

on the data.

So, when we are learning any programming language, when we learn any data type, we learn mostly about its

operations, and sometimes we go into detail and also understand its representation.



Abstract
------------------
Hiding internal details



Now, let us see What is Abstract? Abstract means hiding internal details.

Now, if I take this example, integer data type and these operations, for performing these operations, do

we really need to know how they are performed in the binary form inside the main memory?

No.

We are concerned about declaring a variable and using it by performing these operations.

So, we need not know internal details, how these operations are performed.

Right?

Without knowing them, we can use them.

So, these things are hidden from us, so we can call them as Abstract. Without knowing internal details,

We can use it, So internal details are Abstract for us.

So, this is the example of a primitive data type I have taken, and explained you meaning of data type

and meaning of abstract data type.

This is not abstract data type,

This is primitive data type. Now, the term Abstract Data Type.

Why is it introduced?

What is the meaning of this one?

See, this is related to Object Oriented Programming languages.

When the Object Oriented Programming languages being started to use in Software Development, then using

the classes, we can define our own data types, that are Abstract.

That is, without knowing internal details, we can use them.

So, this term is related to Object Oriented Programming.

So, let us take an example of a list and define it as

Abstract Data Type.

Let us take the example of a list, that is list of elements or collection of elements.

So, if I say, List of elements, I'll take few numbers randomly.

So, here I have taken the list of elements.

Now, I can give the indices, either starting from 0 or 1, that depends on my requirement,

That depends on my definition.

So I'm starting

indices from 0 onward.

So, this is 0 1 2 and so on.

This is a list, that is collection of elements.

Now, this is a list,

This is on paper.

Now, I want this list to be used in my program.

Then, How can I represent a list?

So, What are the things that I have to store for representing the list?

So, the data that is required for storing this list is, first I need space for storing elements.

Then the second thing is, I need to have some capacity of a list.

Then, the third is, inside that capacity, how many elements already I have in the list, that is length of

the list, or size of a list.

So the third thing is size of a list.

So, for representing this list,

I need 3 things, space for storing the elements, and its capacity, that is maximum capacity, and its size,

that is, number of elements

it is having. So, for representation of this one,

I have two options.

One is, I can use array in a program, or I can use linked list. So, representation of a list can be done

using any of these methods. Then, let us look at operations on a list.

What are the operations that we perform on a list? For the operations,

I will write few operations here,

Then again, I will explain all of them.

So, the operations that I may be performing on a list is, in this set of elements, or the list of elements,

I can add more elements.

So, the operations that I can perform is, add an element that is, x or, I may want to remove some element

from this one.

So, remove an element or, I want to search for any particular element.

So, let us say it is search.

I want to search for any element key, like this, and so on.

I will be discussing all operations afterwards.

Now let me finish

Abstract Data Types here. See, this list is an Abstract Data Type.

It is having the representation of data, and the operations on the data.

So, when you have 2 things, data representations and operations on the data, together

it becomes a data type.

It becomes a data type.

Now, this I can put together, and I can define a class in C++, or in any other Object Oriented Programming

language.

Then, the question is, How you'll be storing this list of elements? Either Array, or, Linked List, whatever

is used,

This is going to work perfectly.

I'll be performing these set operations only.

Now, how the presentation is done?

I need not bother about it.

I need not bother.

When the class is written, I can just create the object of the class and I can use it.

So, how internally the things are working, I need not worry,

That's what, it's Abstract.

So, the concept of ADT, define the data, and operations on data together, and let it be

used as data type, by hiding all the internal details.

So, this concept of ADT is very common in C++.

So, I can say that, when you write any class in C++ which has the data presentation and operations together,

it defines an ADT.

So, in our subject data structure, we are going to learn about various data structures, like array, linked list,

stack, queues, graphs, or trees, Hash Table, all these things, we will try to represent them as

ADT

So, I'll be showing you the code for C language as well as I'll be showing you the code for C++. So, I'll

be showing you how ADT is implemented. We will be defining all these data structures as ADT

ADT through C++.

So, while learning other topics, I'll show you how it is working as ADT.

Now next, let us look at these operations on a list.

I'll just explain you few operations on a list.

What is the meaning of these operations.

Now, I'll explain you the operations on a list.

Let us look at the operations one by one.

See, first operation,

I will call it as add; add some element.

Adding an element,

This means that, I want to add something to the end of a list, like suppose, I want to add

15, so 15 should be added here, at the index 7.

So, add means, adding an element to the end of a list.

This is the meaning that we can take.

And even this add can also be called as, append, append an element,

.

So this also means that adding some element at the end of a list. Now, next operation, add an element

at a given index.

So, adding an element at a given index, for example, I want to add 20 at index 6.

So, here I want to insert 20.

So it means, already an element 12 is there, then I should shift the element and make a

free space for 20.

So, it means I should move 15 to the next place, on index 8, and I should bring 12 here, then I should

insert 20 here.

So, if you want to insert any element at a given index, then you have to shift the elements.

So, that's what, adding an element at a given index.

This can also be called as insert, insert at a given index,

this element. Adding at a given index, we can also call

it as insert. Then next, remove, Removing an element. So which element you want remove, you must give an index.

Suppose, I want to remove 20, the one I have inserted just now.

So it means, this 20 should be removed. When you remove 20,

that place will be vacant in the list.

So, we have to shift the rest of the elements. So, 12 should come here, and 15 should come here.

So I'll be having total 8 elements, index from 0 to 7.

So that's all, removing one element. So, rest of the elements are still the part of the list.

Removing from given index. Then, next operation is, set at Index, a new element.

This means, changing an element at a given index.

Suppose, I want to change an element at index 3 to 25. So, change this 4 to value 25.

So, set can also be called as replace,

that is, replacing an element, replace at a given index, a new element. Then, get.

This is, just I want to know the element at a given index, like I want to know, what is there at index 5,

index 5, the value is 10.

So, knowing an element from a given index. Then, search, for any given key. So, searching an element in a

list, like I want to search for an element, 9.

So, Yes. It is found here at index 2. The result of search is,

we get the index; We know the element 9,

We want to search for it. So, we should know where it is in the list,

So, it's at index 2. So, search - searching for an element to find its index if it is present in the

list.

This search is also called as contains.

So, we want to know whether this key element is there in the list or not.

The list contains that element or not. Next,

You may want to sort the list.

So, you want to arrange all these elements in some order, that is, you want to make it as a sorted list.

So, these are the few operations on a list

I have shown you. There are other operation that you can perform, that is, you can reverse the list,

And, when there are more than one lists, you can combine them, or you can merge them, or you can

split a list.

So, a lot of other operations you can perform on a list.

So, as a part of topic, that is ADT, I have taken an example of a list and I have shown you how it is

represented and what are the operations.

So, I have explained you what these operations mean. So, that's all about ADT.

So, let us move on to the next topic.



## List ADT

List: 2,4,5,6,78,9



Representation
------------------ 

We need: 
a) Space for storing the elements
b) Capacity (Maximum)
c) Size 

We can use for Representation:
1. Array
2. Linked Lists


Operations on List
--------------------
1. add(elememnt)/append(elemet): Adding an element at the end of the list
   add(index, element)/insert(index, element): at particular index by shifting the list
2. remove(index): Removing element from given index
3. set(index, element)/replace(index, element): Replace or change the lement at the given index
4. search(key)/contains(key): SEarching for an element to find its index
5. sort(): Sort a list in some order
