# Нехай задано трикутник з вершинами A,B,C на площині ху.
# Тоді позначимо потік вхідних даних через змінні xa,ya,xb,yb,xc,yc.
import math
print("Даньков Артем, ІС-01, завдання №10")
try:
    xa = float(input("Абсциса першої вершини:"))
    ya = float(input("Ордината першої вершини:"))
    xb = float(input("Абсциса другої вершини:"))
    yb = float(input("Ордината другої вершини:"))
    xc = float(input("Абсциса третьої вершини:"))
    yc = float(input("Ордината третьої вершини:"))
except:
    print("Неправильний ввід")
    exit()
ab = pow((xb-xa), 2)+pow((yb-ya), 2)
bc = pow((xc-xb), 2)+pow((yc-yb), 2)
ac = pow((xc-xa), 2)+pow((yc-ya), 2)
if ac+bc == ab or ab+ac == bc or ac+bc == ab:
    print("Прямокутний")
ab = math.sqrt(ab)
ac = math.sqrt(ac)
bc = math.sqrt(bc)
if ab == bc and bc == ac and ac == ab:
    print("Рівносторонній")
if ab == bc or bc == ac or ac == ab:
    print("Рівнобедрений")
else:
    print("Різносторонній")


