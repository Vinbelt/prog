def search(arr: list):
    sum_total = 0
    len_arr = len(arr)
    for a in arr:
        sum_total += a
   
    era = 0
    last = 0

    for i in range(len_arr):
        era += arr[i]
        print(f"right: {era} sum_total: {sum_total}")
        if ((sum_total - era) > sum_total and (sum_total - era) != 0):
            sum_total -= era
            last = i
            era = 0
    
    era = 0

    for i in range (len_arr - last):
        era += arr[len_arr - 1 - i]
        print(f"left: {era} sum_total: {sum_total}")
        if ((sum_total - era) > sum_total and (sum_total - era) != 0):
            sum_total -= era
            era = 0
        
        

    
    print(sum_total)


def main():
    pruebas = int(input())
    arrs = list()
    for _ in range(pruebas):
        a = input()
        a = list(a.split(" "))
        a = [int(x) for x in a]
        arrs.append(a)

    for arr in arrs:
        search(arr)

if __name__ == "__main__":
    main()  