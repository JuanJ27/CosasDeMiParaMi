#POO en python pimer intento

class Perro:
    def __init__(self,name,age) -> None:
        self.name=name
        self.age=age
        pass
    def get_name(self):
        return self.name
    def get_age(self):
        return self.age
    def set_name(self,name):
        self.name=name
        return self.name
    def set_age(self,age):
        self.age=age
        return self.age
    def bornYear(self):
        x=2023-self.age
        return x


p1=Perro("Katy",7)
print(p1.get_age(),p1.get_name(),p1.bornYear())