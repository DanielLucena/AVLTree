# AVLTree
[Link do Repositorio](https://github.com/DanielLucena/AVLTree)
## Descrição
O trabalho da 3a unidade consiste simplesmente na implementação de uma árvore AVL com suas operações padrão: busca, inserção e remoção.
<br><br>
Seu algoritmo deve permitir, a qualquer tempo, operações de busca, inserção e remoção de chaves inteiras. Além disso, a qualquer tempo, seu algoritmo também deve permitir a visualização da árvore (via interface textual, não precisa ser interface gráfica. basta, por exemplo, fazer um percorrimento por nível e colocar, ao lado de cada nó, quem é seu pai). 

## Compilar o Codigo
apartir da pasta raiz.
```bash
mkdir build
make
```

## Executar o Programa
apartir da pasta raiz.
```bash
./buil/main
```
## Rodar arquivo de teste
apartir da pasta raiz.
```bash
./build/main < data/teste.txt
```
```bash
./build/main < data/deleteSemfilhos.txt
```
```bash
./build/main < data/deleteUmfilho.txt
```
```bash
./build/main < data/deleteDoisfilho.txt
```

## Limitações
O print da arvore está na horizontal, o valor mais a esquerda é a raiz. Os valores mais a direita são os nós folhas.
<br><br>
