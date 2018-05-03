# DynamicProgramming
In computer science, mathematics, management science, economics and bioinformatics, dynamic programming 
(also known as dynamic optimization) is a method for solving a complex problem by breaking it down into
a collection of simpler subproblems, solving each of those subproblems just once, and storing their solutions.
The next time the same subproblem occurs, instead of recomputing its solution, one simply looks up the previously
computed solution, thereby saving computation time at the expense of (it is hoped) a modest expenditure in storage space.
(Each of the subproblem solutions is indexed in some way, typically based on the values of its input parameters, so as to facilitate its lookup.) The technique of storing solutions to subproblems instead of recomputing them is called "memoization".
<a href="https://en.wikipedia.org/wiki/Dynamic_programming">Read More</a>.

# Knapsack Problem
The knapsack problem or rucksack problem is a problem in combinatorial optimization: Given a set of items, each with a weight and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible. It derives its name from the problem faced by someone who is constrained by a fixed-size knapsack and must fill it with the most valuable items.

# How to use it!

- The compilation of the file is as simple as it follows:
Go straight to the root of the project using the terminal and type the following: <br />
'<b>cmake CMakeLists.txt && make</b>' . (with no quotation marks) 

- Make sure you have cmake pre-installed (Version 3.4 or above). <a href="https://cmake.org/download/">Cmake Download Webpage</a>.
- In order to run the program properly, you must run it from the terminal by typing the following parameter, identifying which path to read the input from: ./DynamicProgramming "1st param"
  
- The parameters must be chosen as it follows:
  - 1st: "path", referring to path of the file containing input. (Check examples in Input Examples to build your own).
