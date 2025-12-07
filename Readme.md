# Coding Challenge CP
### How to pull the latest code
- If you are the owner of repo, run the following command to get the latest code. 
```
git pull
```
- If you are not the owner but the contributor, run the following command
To check your remote repo pointer, this should point to your forker repo.
```
git remote -v 
```
Now create the upstream aliases for the original repo from the owner
```
git remote add upstream [The repo of the owner]
``` 
Now if you check the remote version of your repo, then you will find your forked repo as well as the original owner repo
```
git remote -v
```
Now run the following command to get the latest changes in the original repo
```
git fetch upstream
```
OR
```
git fetch upstream/main
```
Once you see all the latest changes, use the following command to rebase your code to the latest one. 
```
git rebase upstream/main
```
OR 
```
git merge upstream/main
```
------- 
- To merge the code from the contributor, Make sure you have pushed all the necessary changes to your forked branch. Then create a pull request using CLI/VScode/on Github website. 
- Then the owner will review all the changes and conflicts to make sure to rebase the correct branch.  
# Coding Challenge Cp
# pythonCode
=======
# Coding Challenge Cp

- Then the owner will review all the changes and conflicts to make sure to rebase the correct branch.    


### Learning goals Achieved 
We will learn DSA and CP concepts in two programming languages C/C++ and Python at the same time. Please follow the repo accordingly. Following is the list of all concepts and codes as per each session. 
1. Setup of Git and repo structure - Done
2. Basic implementation of pointer in C - Done
3. Basic implementation of classes DS in Python - Done 
4. Basic implementation Linkedlist traversal in C and Python - Done 
 
### Learning goals pending 
1. LL implementation of methods
2. LL implementation of Stacks and Queue
3. LL implementation of of different types - SINGLY,DOUBLY
4. OOP CONCEPTS - C++ AND PYTHON
5. ADVANCE CONCEPT OF OOP
6. DESIGN PATTERNS AND APPLICATION
## Some coding platforms for CP 
1. Codeforces 
2. Leetcode
3. Hacker rank
4. InterviewBit
5. GeeksforGeeks

## Some coding platform other than CP
1. Google summer of code 
2. MLH.io
3. Hacktoberfest each year 
4. Advent of code

## Best practices and Guidelines
We have standard guidelines for different programming languages to write better code. PLEASE FOLLOW IT based on your programming languages.     
## C++ reference 
1. cppreference.com is good resource
2. C++ package manager vcpkg etc.
3. c++ core community guideline for best programming practices.   

