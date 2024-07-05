#Crea un convertidor donde puedas pasar de grados a Fahrenheit
def grados_A_fahrenheits():
    grados = float(input("Ingrese la cantidad de grados celcius a convertir: "))
    fahrenheits = grados * 9/5 + 32
    print(f"{grados} grados son: {fahrenheits} fahrenheits.")
    
def fahrenheits_A_grados():
    fahrenheits = float(input("Ingrese la cantidad de fahrenheits a convertir: "))
    grados = (fahrenheits -32) * 5/9
    print(f"{fahrenheits} fahrenheits son: {grados} grados.")
    
def mostrar_menu():
    print("**Menú**")
    print("1: Convertir de grados Celsius a Fahrenheit.")
    print("2: Convertir de grados Fahrenheit a Celsius.")
    print("3: Salir.")
    
while True:
    mostrar_menu()
    opcion = int(input("Ingrese la opcion que desee: "))
    
    if opcion == 1:
        grados_A_fahrenheits()
    elif opcion == 2:
        fahrenheits_A_grados()
    elif opcion == 3:
        print("Saliendo del programa...")
        break
    else:
        print("Opcion equivocada.Intente de nuevo.")
        
    continuar = input("¿Desea realizar otra conversión? (si/no): ").strip().lower()
    if continuar != 'si':
        print("Saliendo del programa...")
        break
