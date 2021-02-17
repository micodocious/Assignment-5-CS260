# Assignment-5-CS260
CS 260 Data Structures
Mico Santiago

Create an array-based list or a linked-list (and then attempt the other) that:

automatically inserts values in the correct position based on some order of sorting (perhaps ascending integers or lexicographical sorting of words)
  - created a sort() function that bubble sorts the elements in the linked list.

efficiently searches for elements (likely binary search for the array list, but what about the linked-list?)
  - used a bubble sort. 

Make a chart to compare the algorithmic complexity (use Big-O notation) of your insert, remove, and search algorithms you used for your structures
![alt text](https://miro.medium.com/max/2928/1*5ZLci3SuR0zM_QlZOADv8Q.jpeg)
URL(https://miro.medium.com/max/2928/1*5ZLci3SuR0zM_QlZOADv8Q.jpeg)

- add() is O(n) because it is linear 
- remove() is O(1) because it is constant
- print() is O(1) because it is constant
- sort() is O(n^2) average and worst case and at best case is O(n). This is because if the bubble sort is already sorted the algorithim goes over it (N-1) times. N-1 is the last element in the linkedlist and is assumed to tbe the biggest number there. If the linkedlist was unsorted because in the worst possible scenario, the largest value has to shift over the max number of times to get into the right position. 

Note: This assignment is to get you to think about and practice with structures that have automatically enforced properties (perhaps auto sorted, since we know sorting can be expensive... and how these might be able to be spread out over time)
