# Programming Challenges C++
## Problem 1.3 The trip[^1]
### Problem description
A group of people on a trip decide to share expenses equally. They do not take money from a shared account but instead pay individually and redistribute the cost at the end. This program calculates the ammount of money that needs to be redistributed. The program works by recieving the ammount of money spent by each participant, calculating the average and then summing the ammount overspent by any participant who has spend more than average.

The input is firstly a line containing the number of students (n). The next "n" lines contain the ammount of money spent by each student. The input to the program is terminated by a line with n = 0.
The output consists of a line per trip outputting the cost to redistribute.

There are no more than 1000 students, and no student spent more than $10000.00.


### Example 
>**Input**                                                                 
>3                                                          
>10.00                                              
>20.00                                                     
>30.00                                                  
>4                                          
>15.00                                            
>15.01                                              
>3.00                                                
>3.01                                                  
>0                                                                                         

>**Output**                            
>$10.00                                                                                  
>$11.99                                                                                                                                               


### Problem solution
1. The program will read in the number of students on the trip (n).
2. If this number is '0' end program.
3. The next "n" lines are read into an array of floats.
4. The average ammount spent by each student is calculated.
5. The array of floats is traversed, any student spending more than average has this difference added to an accumulator.
6. The total in the accumulator is printed to a file.
7. Go to step 1.

### Bug Checklist
- [ ] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 17