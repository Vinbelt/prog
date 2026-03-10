def determine(arr: list) -> str:
    work = list()
    sum_total = 0
    for i in range(len(arr)):
        sum_total += arr[i]
        work.append(arr[i])
        for j in range(len(work)):
            if (sum_total - arr[i] == 0):
                return "SI"
        
        if sum_total == 0:
            return "SI"
    
    return "NO"

    


def main():
    pruebas = int(input())
    arrs = list()
    for _ in range(pruebas):
        a = input()
        a = list(a.split(" "))
        a = [int(x) for x in a]
        arrs.append(a)

    for arr in arrs:
        print(determine(arr))

if __name__ == "__main__":
    main()  