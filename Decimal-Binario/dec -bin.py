def dec2bin(dec):
    if dec < 2:
        print(dec, end='')
    else:
        dec2bin(dec // 2)
        print(dec % 2, end='')

def main():
    dec = int(input("Digite um número inteiro: "))
    print("Resultado: ", end='')
    dec2bin(dec)

if __name__ == "__main__":
    main()
