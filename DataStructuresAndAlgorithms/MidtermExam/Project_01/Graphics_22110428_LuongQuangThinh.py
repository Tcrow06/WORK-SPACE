import tkinter as tk
import time
import random

rong = 700
cao = 500
kichThuoc = 10
canLe =40
a=[]
check = False
stop = False

def selection_sort(a):
    for i in range(0,len(a)-1):
        ve_mang(a)
        min= i
        ve_2_vitri(a,i,i,"yellow")
        time.sleep(0.5)
        for j in range(i+1,len(a)):
            ve_2_vitri(a,j,j,"blue")
            time.sleep(0.4)
            if a[min]>a[j]:
                min = j
                ve_mang(a)
                ve_2_vitri(a,i,i,"yellow")
                ve_2_vitri(a,j,j,"red")
            else: 
                ve_2_vitri(a,j,j,"white") 
            time.sleep(0.5)
        
        if i!=min:
            ve_2_vitri(a,i,min,"red")
            time.sleep(0.3)
            a[i],a[min] = a[min],a[i]
            ve_mang(a)
            ve_2_vitri(a,min,i,"red")
            time.sleep(0.8)
            ve_mang(a)
    ve_mang(a)
def partition(a, left, right):
    
    x = left
    i = left+1 
    j = right
    ve_2_vitri(a,x,x,"yellow")
    time.sleep(0.5)
    while True :
        ve_2_vitri(a,i,i,"blue")
        ve_2_vitri(a,j,j,"green")
        time.sleep(0.5)
        while a[x]>a[i] and i<=j and i < right: 
            ve_2_vitri(a,i,i,"white")
            i+=1
            time.sleep(0.3)
            ve_2_vitri(a,i,i,"blue")
            time.sleep(0.5)
        
        while a[x]<a[j] and j>=i and j > left: 
            ve_2_vitri(a,j,j,"white")
            time.sleep(0.3)
            j-=1
            ve_2_vitri(a,j,j,"green")
            time.sleep(0.5)
        if i>=j: 
            break
        ve_2_vitri(a,i,j,"red") 
        time.sleep(0.5)
        a[i],a[j] = a[j], a[i]
        ve_2_vitri(a,j,i,"red")
        i+=1
        j-=1
        ve_mang(a)
        ve_2_vitri(a,x,x,"yellow")
        time.sleep(0.4)

    ve_mang(a)
    ve_2_vitri(a,x,j,"red")
    time.sleep(0.3)
    a[x], a[j] = a[j], a[x]
    ve_mang(a)
    ve_2_vitri(a,j,x,"red")
    time.sleep(0.8)
    ve_mang(a)
    return j

def quick_sort(a, left, right):
    if left<right:
        pivot = partition(a,left,right)
        quick_sort(a,pivot+1, right)
        quick_sort(a,left,pivot-1)
        # ve_mang(a)
    
def ve_2_vitri(a,i,j,color):
    Backgound.create_rectangle(i*50+canLe, cao-a[i]*10-canLe, (i+1)*50+canLe , cao-canLe, fill = color)
    Backgound.create_rectangle(j*50+canLe, cao-a[j]*10-canLe, (j+1)*50 +canLe, cao-canLe, fill = color)
    main.update()

def ve_mang(a):
    Backgound.delete("all")
    # dường thẳng x
    Backgound.create_line(canLe-10,cao-canLe+10,rong - canLe,cao-canLe+10)

    # dường thẳng y
    Backgound.create_line(canLe-10,cao-canLe+10,canLe-10,canLe-10)

    for i in range(len(a)):
        Backgound.create_rectangle(i*50+canLe, cao-a[i]*10-canLe, (i+1)*50+canLe , cao-canLe, fill = "white")
    main.update()
def tao_mang():
    global check
    global a
    if check:
        return 
    a =[random.randint(1,45) for _ in range(kichThuoc)]
    ve_mang(a)
def start():
    global check
    if check:
        return
    check = True
    quick_sort(a,0,len(a)-1)
    check = False

def start1():

    global check
    if check:
        return
    check = True
    selection_sort(a)
    check = False

main = tk.Tk()
main.title("Lương Quang Thịnh 22110428")

Backgound = tk.Canvas(main,width=rong, height= cao, background="sky blue")
Backgound.grid(row = 0, column = 1,rowspan=20 ,columnspan=4)

    
a = [random.randint(1,45) for _ in range(kichThuoc)]
ve_mang(a)

batDau = tk.Button(main,text="Selection Sort", command = start1)
batDau.grid(row=1,column =6)

quickSort = tk.Button(main, text="Quick Sort", command = start)
quickSort.grid(row =2,column=6)

taoMang = tk.Button(main,text="Tạo mảng khác", command = tao_mang)
taoMang.grid(row =3,column = 6 )


main.mainloop()