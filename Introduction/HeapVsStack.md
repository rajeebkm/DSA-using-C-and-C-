# Static and Dynamic Mmemory Allocation

1. About Main Memory
2. How A program use memory
3. Static Allocation
4. Dynamic Allocation

## 1. About Main Memory

The memory is divided into smaller addressable units that are called as bytes. So, memory is divided into bytes.
A small picture I have taken, every byte is having its address.

Let us say, the address of this is 0, and this is 1, This is 2, 3, 4, 5, and this will be 6, and 7, 8, 9, 10, 11, 12, 13, goes on.

So I'm starting from the bottom, one thing to observe is that, diagram I have drawn as a 2-dimensional but the addresses are single dimension addresses, linear addresses. So, address will have just 1 value, not like coordinate system, (x,y), it will have a single value. So, addresses are linear. After this byte, this 5, then this is 6, and 7, and so on. So it depends on the size of the memory, every byte will have its own address.

So if I take a bigger size of memory, let's say this a memory, and then, this corner most byte address is 0. So let us assume that this corner most byte's address is 65535, so total, 0 to 65535 makes 65536. So, total number of bytes are 65536. This is nothing but, 64*1024, So, this is 64 kilobytes. (1 bytes= 8 bits= 2 nibbles)

So, in my entire discussion, for the entire discussion of this subject, I'll be assuming that the size of the main memory is 64 kilobytes.

The size of the memory can be anything. Nowadays, we are using memory in GBs, like 4 GB, 8 GB memory we are using. But to understand, we have to take a small part of main memory, so I'm taking 64 kilobytes of memory.
So, the 1st address is 0 bytes, and the last address is 65535. So total, 65536. That is, 64*1024, so it is 64 kilobytes.
So this main memory is of 64 kilobytes. Every byte is having its address, like how I have shown you here.

In our computers, If you have larger size of RAM, that is 4 GB, or 8 GB, that entire memory is not used as a single unit, but it is divided. It is divided into manageable pieces, that are called as segment. And, usually the size of a segment will
be 64 kilobytes. So I'm talking about a segment(64 kilobytes).


## 2. How A program use memory 

This picture shows, this block, entire block, from this corner to this corner, as main memory.

Assume that, this byte address is 0, and this corner most byte address is 65535, as I said we'll be taking one segment of memory and studying it. So, this entire main memory is divided into three sections and used by a program. So, I'll label the sections, one of the sections where the program resides is called as code section, and one of the sections, Usually this is the section, this portion, is called as Stack, and this remaining portion is called as Heap. But I'll just change the side, because it is easy for me to discuss, If I call this portion as stack, and this portion as heap. So, a program uses the main memory by dividing into three sections, code section, the stack, and heap. I'm showing stack at this place. 

Now, I'll explain how a program uses these three sections. So let's see, See here I have a program file on the hard disk, if I want to run this program,

So this program, the machine code of the program, first it should be brought inside the main memory. So it is brought inside the code section. So, let us say, this is a program, or the machine code of a program.

So, the area that is occupied by the program, in the main memory,

That section is called as code section, that not be fixed.

It depends on the size of program.

So this is the code section, area where the machine code of the program is loaded.

Now, once it is loaded, the CPU will start executing the program, and this program will utilize the remaining

memory as divided into stack and heap.

-----------------------------------------------------

Now, let us learn, how this stack and heap works.

So I will take the example code and I will show you, how stack memory is used, and how heap memory is used.

I've taken an example code here. See this is my main function, it is having two variables.

One is of type Integer, the other one is of type float. Now, I will assume here, listen carefully, I'm assuming here that integer takes 2 bytes and float takes 4 bytes. In C C++ programming,

Number of bytes taken by integer depends on the compiler, and the operating system, and the hardware, it depends on various things.

So, we say mostly, it depends on the compiler. So integer may take 4 bytes also, 2 bytes also. OK? So 2 bytes is easy for explanation. So I'm taking integer as 2 bytes. If you take Turbo C, which is a 16 bit compiler, It takes 2 bytes for integer.

Usually, if you use a Dev Studio, or CodeBlocks, or anything, then integer will take 4 bytes in that one. So it's a 32 bit compiler. So integer can take 2 bytes also, 4 bytes also in C C++, but I'm assuming integer takes 2 bytes and float takes 4 bytes.

Now, let us come back to the point that we were discussing. We were discussing, how this heap memory and stack memory is used by the program. So, Let us see. I have these 2 variables, 2 bytes, and 4 bytes, total 6 bytes of memory. In the program it is written that, it needs 6 bytes, so that 6 bytes of memory is allocated inside the stack, inside the stack.

Let us show it as separately. So, this is 2 bytes, and this is 4 bytes. So these 6 bytes are given to the program. And this is nothing but a main function, I'm showing only main function.

So, this block of memory that belongs to the main function is called as stack frame of main function, or it is also called as activation record of main function, activation record of main function.

So one thing we learned that, whatever the variables you declare inside your program, or inside a function, the memory for those variables will be created inside the stack.

This portion is a stack.

So it is allocated inside the stack. So the portion of memory that is given to the function is called as activation record of that function.

So, how the memory is allocated inside the stack, it depends whatever the variables you have inside a function.

So, the size of the memory required by a function was decided at compile time only. Compiler will see that, this needs some bytes, and this needs some. So, it will beforehand decide that, this function needs so much memory, and that memory is obtained, once

the programs start executing, it is obtained inside the stack.

So, we say, this is static memory allocation.

What is static here?

How many bytes of memory is required by this function was it decided at combile time. So it is static. So, What is static?

The size of the memory is a static value. When it was decided? compile time. So, when everything is done at

compile time, or before run time, it is called static.

So, this memory allocation is static.


## 3. Static Allocation

How many bytes of memory is required by this function was it decided at combile time. So it is static. So, What is static?

The size of the memory is a static value. When it was decided? compile time. So, when everything is done at

compile time, or before run time, it is called static.

So, this memory allocation is static.

## 4. Dynamic Allocation

Dynamic memory allocation can be done inside Heap by the use of pointer.

void main()
{
    int *p;
    p=new int[5];
    p=(int *)malloc(5*sizeof(int));
    delete[]p; (release memomry)
    p=NULL; (not pointing)
}