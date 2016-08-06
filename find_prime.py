import time
def factoring( num ):
    counter = 2
    while counter**2 <= num:
        if not num % counter:num //= counter
        else:counter += 1
    return num

start = time.time()
num = 600851475143

for i in range(1000):
    factoring (num)
        
print( time.time()-start) 
