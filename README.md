# InterFatecs2020
41° na competição InterFatecs de 2020

![Logo](/imagens/logo.jpg)

## Problema D - Chinelândia
**Autor: Sérgio Luiz Banin** (Fatec São Paulo e Fatec São Caetano do Sul)<br>

Os cidadãos de Chinelândia são muito orgulhosos do seu principal produto de exportação, chinelos. A últimamoda local é usar pares despareados,  pé esquerdo uma estampa,  pé direito outra estampa.   Os cidadãoscostumam comprar muitos pares e, para acompanhar essa tendência, as lojas passaram a vender os paresjá despareados atados por um grampo que não permite a separação,  a menos que sejam quebrados.  E éproibido por lei quebrar um grampo antes de adquirir o par. Ocorre que, às vezes, alguém compra um novopar despareado e acaba adquirindo um pé repetido, ou seja, com uma estampa que já possui. Disso surgiu aideia de se organizar um evento, a feira de trocas de pés repetidos.Para participar da feira, cada cidadão precisa elaborar uma lista dos pés repetidos que possui, porém, elesnão são bons com listas. Então, alguns cidadãos eminentes se reuniram e decidiram pedir sua ajuda.Isso mesmo! Você, programador, pode ajudá-los escrevendo um programa que será distribuído à população.Neste programa o cidadão informará os pares que comprou e o programa avisará quais são os pés que temunidades repetidas e,  portanto,  disponíveis para troca.   O que vai facilitar sua vida é o fato de que cadadesenho de estampa recebe um número inteiro único que é chamado de "padrão".A título de exemplo, veja que na situação a seguir o pé direito/padrão 3 tem dois exemplares o que significaque há um repetido e disponível para troca.

![Chinelos](/imagens/chinelos.jpg)

Ahh, programador, você não precisa se preocupar com o tamanho do chinelo. Os Chinelandeses são descen-dentes dos Hobbits e tem uma característica genética curiosa, todos calçam o número 59 do padrão humano.

**Entrada**<br>
A entrada contém um único caso de teste.  Na primeira linha há um número inteiro que é quantidade de pares de chinelos<br>**(1 <= NPC <= 2000)**<br>que o cidadão comprou. Em seguida há NPC linhas contendodois números inteiros **[E D]** separados por um espaço em branco. Tais números representam pares dechinelos:<br>o primeiro número da linha, **E**,  é o padrão do pé esquerdo e o segundo, **D**,  é o padrão do pédireito.  Garante-se que em nenhuma linha haverá dois números de padrão iguais, ou seja, garante-se **E!=D**.

**Saída**<br>
A saída deve conter uma linha para cada caso de ocorrência de repetição para a qual será exibido o númerodo padrão, uma letra para o pé (E ou D - maiúscula) e quantas unidades estão disponíveis para troca.  Astrês informações devem estar separadas por um espaço em branco e todas as linhas devem conter o final delinha, inclusive a última.  As linhas devem estar ordenadas por número do padrão como primeiro critério epela letra do pé como segundo critério de ordenação.<br>
Considere que algum cidadão pode não ter nada para trocar. Neste caso, o programa deve gravar na saída otexto:<br>**SEM TROCAS DESTA VEZ**, em letras maiúsculas e com o final de linha.

| Exemplo de Entrada 1 | Exemplo de Saída 1   |
| -------------------- | -------------------- |
| 4                    | 3 D 1                |
| 1 4                  |                      |
| 2 3                  |                      |
| 3 2                  |                      |
| 4 3                  |                      |

| Exemplo de Entrada 2 | Exemplo de Saída 2   |
| -------------------- | -------------------- |
| 9                    | 2 E 1                |
| 11 6                 | 3 D 1                |
| 5 11                 | 6 D 2                |
| 6 3                  | 11 E 1               |
| 2 8                  |                      |
| 12 6                 |                      |
| 11 4                 |                      |
| 2 6                  |                      |
| 7 3                  |                      |
| 3 1                  |                      |

| Exemplo de Entrada 2 | Exemplo de Saída 2   |
| -------------------- | -------------------- |
| 9                    | SEM TROCAS DESTA VEZ |
| 1 2                  |                      |
| 2 3                  |                      |
| 3 4                  |                      |
| 4 5                  |                      |
| 5 6                  |                      |
| 6 7                  |                      |
| 7 8                  |                      |
| 8 9                  |                      |
| 9 10                 |                      |
