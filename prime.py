import  time
from math import sqrt

prime_range = int(input("Enter range: "))

start = time.time()
initial_nums = range(2, prime_range)

def isprime(num):
    check_range = int(sqrt(num))+1
    for check in range(2, check_range):
        if(num%check==0):
            return False
    return True
    
primes = list(filter(isprime, initial_nums))
end = time.time()

print(primes)
print(end-start)