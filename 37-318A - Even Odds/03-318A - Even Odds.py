n, m = map(int, input().split())
num_odds = (n + 1) // 2
if m <= num_odds:
    print(2 * m - 1)
else:
    print(2 * (m - num_odds))
