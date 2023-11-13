stack_size=5
list=[None]*stack_size
top=-1

def isEmpty():
    if(top==-1):
        return True
    else:
        return False

def isFull():
    return top==stack_size-1

def push(e):
    global top
    if(isFull()):
        print("Full")
        exit()
    else:
        top=top+1
        list[top]=e
        print(list)

def pop():
    global top
    if(isEmpty()):
        print("Empty")
        exit()
    else:
        top=top-1
        return list[top+1]

def peek():
    if not isEmpty():
        return list[top]
    else:pass

push(1)

