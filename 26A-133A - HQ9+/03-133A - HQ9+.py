def solve():
    p = input().strip()
    output_instructions = {'H', 'Q', '9'}
    for char in p:
        if char in output_instructions:
            print("YES")
            return
    print("NO")
 
if __name__ == "__main__":
    solve()
