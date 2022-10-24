# Time and Space Complexity

 Time Complexity basically depends on the procedure that you are adopting.



Exampleas: 

1. Array and Linked Lists

a) for loop: O(n)

Example:

    for (i=0; i<n; i++)

 b) Nested for loop: O(n^2)

 Example:

 for (i=0; i<n; i++)
    for (j=0; j<n; j++)


 c) Nested for loop: O(n^2)

Example:

 for (i=0; i<n; i++)
    for (j=i+1; j<n; j++)


 d) Dividing List by half everytime untill reaches one element: O(log2(n))

Example:

 for (i=n; i>1; i=i/2)

 or

 i=n
 while(i>1)
 {
     i=i/2;
 }
    
2. Matrices

Processing all the elements: O(n^2)

 for (i=0; i<n; i++)
    for (j=i+1; j<n; j++)

Processing a row: (n elements): O(n)
Processing a column: (n elements): O(n)


For one element and that requires process of all the elements or calling a functions which is having a loop : O(n^3)

 for (i=0; i<n; i++)
    for (j=i+1; j<n; j++)
        for(....)
        {
            ---
        }


3. Array of Linked lists: (n elements and m Arrays)

O(m+n)
considering only n no.of elements:
O(n)


4. Binary Tree

O(log2 (n))


Space Complexity

Array
n elements: O(n)
not concerned about bytes

Linked List

O(n)

Matrices
O(n^2)

Array of Linked List

O(m+n)

Binary Tree (n nodes)
O(n)