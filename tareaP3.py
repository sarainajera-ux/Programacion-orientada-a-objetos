class Fecha:
    def __init__(self, dia, mes, anio):
        self.dia = dia
        self.mes = mes
        self.anio = anio

    def mostrar_fecha(self):
        return f"{self.dia}/{self.mes}/{self.anio}"


def main():
    dia = int(input("Ingrese un día del mes en número: "))
    mes = int(input("Ingrese un mes del año en número: "))
    anio = int(input("Ingrese un año en número: "))

    f1 = Fecha(dia, mes, anio)

    print("La fecha es:", f1.mostrar_fecha())


if __name__ == "__main__":
    main()