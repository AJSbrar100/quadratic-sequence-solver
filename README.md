# quadratic-sequence-solver
This is a simple program written in C++ that takes in the first 5 terms of a quadtratic sequence and provides the nth term of the sequence through the use of the difference method.

The difference method - 

Suppose you have the quadtratic sequence - -1, 5, 15, 29, 47

You find the differences like this - 
1st term-				 -1   5   15   29   47
1st common dif-     6   10   14   18
2nd common dif-       4    4    4 

To find a, b and c-
2a = 2nd common dif, so 2a = 4, a = 2
3a + b = 1st common dif, and as a = 2, b = 1st common dif - 3 x 2, so b = 6 - 6, b = 0
a + b + c = 1st term, so 2 + 0 + c = -1, c = -1 - 2, c = -3

nth term = an^2 + bn + c, so nth term will be - 2n^2 + 0 - 3 = 2n^2 -3
