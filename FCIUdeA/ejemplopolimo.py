class Perro:
    def sonido(self):
        print("Guau!")

class Gato:
    def sonido(self):
        print("Miau!")

def hacerSonido(animal):
    animal.sonido()

# Creamos objetos de las clases Perro y Gato
perro = Perro()
gato = Gato()

# Llamamos a la función hacerSonido con objetos de ambas clases
hacerSonido(perro)
hacerSonido(gato)