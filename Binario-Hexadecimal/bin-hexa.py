def binario_para_hexadecimal(binario):
    # Primeiro, convertemos o binário para decimal
    decimal = int(binario, 2)
    
    # Em seguida, convertemos o decimal para hexadecimal
    hexadecimal = hex(decimal)
    
    # Removemos o prefixo '0x' adicionado pela função hex() e retornamos o resultado
    return hexadecimal[2:]

# Exemplo de uso:
binario = input("Digite um número binário: ")
hexadecimal = binario_para_hexadecimal(binario)
print("O número binário", binario, "em hexadecimal é:", hexadecimal)
