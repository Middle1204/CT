queue_size=5
queue_size = queue_size
list = [None]*queue_size
front = 0
rear = 0

def isEmpty():
    return front==rear

def isFull():
    return (rear+1)%queue_size == front

def push(e):
    global rear
    if(isFull()):
        print("Full")
        exit()

    else:
        rear=(rear+1)%queue_size
        list[rear-1]=e
        print(list)

def pop():
    global front
    if isEmpty():
        print("Empty")
        exit()
    else:

        front = front + 1
        list[front-1] = None
        print(list)


def peek():
    if not isEmpty():
        return list[front]
    else:pass

push(1)
push(2)
push(3)
push(3)
pop()
pop()
pop()

