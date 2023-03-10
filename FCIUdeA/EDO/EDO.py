import numpy as np

class SolNum():
    def __init__(self,a,b,n,f,y0,point=False):
        self.a=a
        self.b=b
        self.n=n
        self.f=f
        self.y0=y0
        self.point=point 

        self.y=[]
        self.x=[]

    def h(self):
        return (self.b-self.a)/self.n
    
    def X(self):
        if (self.point):
            self.b=self.point
            self.x=[self.a+self.h() for i in range(self.point)]
        else:
            self.x=[self.a+self.h() for i in range(self.b)]
        
    
    def Euler(self):
        self.X()
        self.y=[self.y0]

        for i in range(self.n):
            self.y.append(self.y[i]+self.h*self.f(self.x[i],self.y[i]))
        return self.x,self.y
    
