import argparse

def wrong_subtraction(n, k):
    output = n
    for i in range(k):
        string_n = str(output)
        if string_n[len(string_n) - 1] == '0':
            output = int(string_n[:-1])
        else:
            output -= 1
    return output

# d = "Do the wrong subtraction as per https://codeforces.com/problemset/problem/977/A"
# 
# parser = argparse.ArgumentParser(description=d)
# 
# parser.add_argument("n", type=int, help="input value for n")
# parser.add_argument("k", type=int, help="input value for k")
# 
# args = parser.parse_args()
# 
# n = args.n
# k = args.k

a = list(map(int, input().split()))
n = a[0]
k = a[1]

print(wrong_subtraction(n, k))
