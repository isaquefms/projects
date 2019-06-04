# Imports necessários para exibir uma imagem.
from PIL import Image

# Lendo a imagem
img = Image.open('challenge_strider.png')

# Largura da imagem
imageW = img.size[0]
# Altura da imagem
imageH = img.size[1]

# Var para armazenar a quantidade de pixels vermelhos.
quantPixelsVer = 0

# Caso o modo da imagem o RGB, 3 colunas de 8 bits para cada cor.
if(img.mode == "RGB"):
	# Combinação de cada coordenada possível para os pixels.
	for y in range(0, imageH):
		for x in range(0, imageW):
			# Tupla que define o ponto.
			xy = (x, y)
			# Leitura do rgb do pixel.
			rgb = img.getpixel(xy)
			# Nos interessa somente os pixels totalmente vermelhos.
			if(rgb[0] == 255 and rgb[1] == 0 and rgb[2] == 0):
				quantPixelsVer += 1

# Imprimindo a quantidade
print("Total de pixels vermelhos: {}".format(quantPixelsVer))


			