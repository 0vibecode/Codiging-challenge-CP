<<<<<<< HEAD
<<<<<<< HEAD
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
=======
# Coding Challenge Cp
# pythonCode
>>>>>>> 02b7e73 (Changes in readme)
=======
# Coding Challenge Cp
#
>>>>>>> dc75a9c (Changes in readme)
