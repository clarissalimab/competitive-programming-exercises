# https://codeforces.com/contest/604/problem/A
# 08 jan 2020
m = input()
w = input()
h = input()

m = m.split(' ')
w = w.split(' ')
h = h.split(' ')

points = [500, 1000, 1500, 2000, 2500]
score = 0

for i in range(0, 5):
    m[i] = int(m[i])
    w[i] = int(w[i])
    score += max(points[i]*0.3, (1 - m[i]/250)*points[i] - 50*w[i])
score += int(h[0])*100 - int(h[1])*50
print(int(score))