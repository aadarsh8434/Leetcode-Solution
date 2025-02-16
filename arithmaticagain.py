a = int(input("Enter first term ")) 
n = int(input("Enter last term"))   
d = int(input("Enter common difference"))  
sum_series = 0
if (d > 0 and a <= n) or (d < 0 and a >= n):
    while (d > 0 and a <= n) or (d < 0 and a >= n):  
        print(a)
        sum_series += a  
        a += d  
    print("The sum of the series is", sum_series)
else:
    print("Invalid input! The series cannot progress with the given values.")
