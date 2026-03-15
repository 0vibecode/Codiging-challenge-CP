# Two pointer and Sliding window
There are 4 different pattern mainly.
1. Constant window   
This pattern has array and a constant sum condition given.   
```
# example
arr = [2,3,6,4,3] and k = 3
##give the length of 3 such that the sum of all the internal elements is highest. 
```
2. longest subarray/substring where some consition is given.   
```
# example
arr = [2,3,6,4,3] and k <= 10
##give the longest length or the longest subarray with sum 10 in the given array. 
```
3. Number of possible subarray where certain condition is met - This is extension of pattern above. 
```
# example
arr = [2,3,6,4,3] and k = 10
##give the possible subarray with sum = 10 in the given array.
### possible solution
### x = number of possible subarray where sum is <= k
### y = number of possible subarray where sum is <= k -1
# answer is x - y
# This is extension of pattern 2
```
4. Finding the shortest/minimum length or subarray under a given condition. 
```
# Example
arr = [2,3,6,4,3] and k = 10
##give the size of minimum possible subarray with sum = 10 in the given array.
### possible solution
### find the subarray with the condition 
### and then try to find the minimum size that fits the condition. 
``` 

