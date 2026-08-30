class Factura:
    def __init__(self):
        self.numpieza = ""
        self.descripcion = ""
        self.cantidad = 0
        self.precio = 0.0

    def obtenermontofactura(self):
        return self.cantidad*self.precio
#factura test
ferre = Factura()
ferre.numpieza = input("ingresa el numero de pieza: ")
ferre.descripcion = input("ingresa la descripcion: ")
ferre.cantidad = int(input("ingresa la cantidad: "))
ferre.precio = float(input("ingresa el precio: "))

ferre.cantidad= 0 if ferre.cantidad < 0 else ferre.cantidad
ferre.precio= 0.0 if ferre.precio < 0 else ferre.precio

print("factura: ", ferre.obtenermontofactura)