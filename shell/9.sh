#!bin/bash # Essa primeira linha é necessária.
# Entra no diretorio. Lembra o que te falei sobre o til ?
# Explica pra ele.
cd ~/<diretorio_que_quero>/
# Compacta todos os arquivos dentro do diretorio.
# A opção -r ativa a recursividade. Ele entra dentro das pastas.
# ** é tipo uma expressão regular. Ele fala fdla pra pegar tudo.
zip -r <meu_arquivo_zip> **
# Mova o arquivo zip pra outro local.
mv <meu_arquivo_zip>.zip ~/outro/local/qualquer/
# Apaga tudo no diretório.
# -rf é a opção recursiva e forçada.
rm -rf **