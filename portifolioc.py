animal_type = input("Digite o nome do animal:")
animal_quant = int(input("Digite a quantidade de animais:"))
animal_food = float(input("Digite o preço por kilo de comida:"))
animal_feed = float(input("Digite a quantidade que este animal come no dia:"))

# quantidade de que os animais comem no dia
animal_kiloday = animal_quant*animal_feed
#quantidade do mes de alimento
animal_meskilo = animal_kiloday * 30
#preço do mes de alimento
animal_mesprince = animal_meskilo*animal_food
print(f'\nOs seus {animal_quant}s {animal_type} comem essa quantidade de kilo no dia {animal_kiloday} ')
print(f'E consomem {animal_meskilo}kg no mês!')
print(f'Que custa R${animal_mesprince} no mês!')