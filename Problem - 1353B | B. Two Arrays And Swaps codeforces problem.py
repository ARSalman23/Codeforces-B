def main():
    t = int(input())
    
    for j in range(t):
        n, k = map(int, input().split())
        
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        
        a.sort()
        b.sort(reverse=True)
        
        for i in range(n):
            if k > 0 and a[i] < b[i]:
                a[i], b[i] = b[i], a[i]
                k -= 1
        
        total_sum = sum(a)
        
        print(total_sum)
 
if __name__ == "__main__":
    main()
