def fibo(i):
    if (i == 0 or i == 1):
        return i
    return fibo(i - 1) + fibo(i - 2)
    
number = int(input("fibo of :"))
print(fibo(number))