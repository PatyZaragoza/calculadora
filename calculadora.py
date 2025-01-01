# Autor: Patricia Zaragoza Palma
# Ingeniera en sistemas computacionales

def sumar(a, b):
    return a + b

def restar(a, b):
    return a - b

def multiplicar(a, b):
    return a * b

def dividir(a, b):
    if b == 0:
        return "Error: División por cero no permitida"
    return a / b

def calculadora():
    print("Calculadora")
    print("Operaciones disponibles:")
    print("1. Sumar")
    print("2. Restar")
    print("3. Multiplicar")
    print("4. Dividir")

    while True:
        opcion = input("Elige una opción (1/2/3/4) o 'q' para salir: ")

        if opcion.lower() == 'q':
            print("Saliendo de la calculadora.")
            break

        if opcion in ['1', '2', '3', '4']:
            try:
                num1 = float(input("Ingresa el primer número: "))
                num2 = float(input("Ingresa el segundo número: "))

                if opcion == '1':
                    print(f"Resultado: {sumar(num1, num2)}")
                elif opcion == '2':
                    print(f"Resultado: {restar(num1, num2)}")
                elif opcion == '3':
                    print(f"Resultado: {multiplicar(num1, num2)}")
                elif opcion == '4':
                    print(f"Resultado: {dividir(num1, num2)}")
            except ValueError:
                print("Error: Por favor ingresa números válidos.")
        else:
            print("Opción no válida. Por favor, elige una opción entre 1 y 4.")

if __name__ == "__main__":
    calculadora()
