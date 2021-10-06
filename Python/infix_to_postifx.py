class stacki:
    size=0
    capacity=1000
    li=[0]*capacity

    def __init__(self):
        pass

    def empty(self):
        return self.size==0

    def full(self):
        return self.size==self.capacity
    
    def push(self,a):
        if self.size==self.capacity:
            print("Stack full")
        else:
            self.li[self.size]=a
            self.size+=1
    def pop(self):
        if self.size==0:
            print("Stack empty")
        else:
            self.size-=1
    def top(self):
        return self.li[self.size-1]

def precedence(c):
    if c=="^":
        return 3
    if c=="*" or c=="/":
        return 2
    if c=="+" or c=="-":
        return 1
    return 0

def convert(s):
    sed=stacki()
    ans=""
    for i in range(len(s)):
        if s[i]=="+" or s[i]=="-" or s[i]=="*" or s[i]=="/" or s[i]=="^":
            while not sed.empty() and precedence(s[i])<=precedence(sed.top()):
                ans+=sed.top()
                sed.pop()
            sed.push(s[i])
        elif s[i]=="(":
            sed.push(s[i])
        elif s[i]==")":
            while not sed.empty() and sed.top()!="(":
                ans+=sed.top()
                sed.pop()
            sed.pop()
        else:
            ans+=s[i]
    while not sed.empty():
        ans+=sed.top()
        sed.pop()
    return ans

s=input()
print(convert(s))