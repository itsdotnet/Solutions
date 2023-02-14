n = int(input())
print("Hisob:")
m = n
while m > 0:
    if m%2==0:
	    print(f"{m} = 2 * {m//2} + 0")
    else:
        print(f"{m} = 2 * {m//2} + 1")
    m//=2
print("Natija:")
print(f"{n}₁₀ = {str(bin(n))[2::]}₂")