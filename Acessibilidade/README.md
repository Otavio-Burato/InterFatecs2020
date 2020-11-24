## Problema J - Acessibilidade
**Autor: Sérgio Luiz Banin** (Fatec São Paulo e Fatec São Caetano do Sul)<br>

Acessibilidade é um assunto de extrema importância. Todas as edificações, sejam públicas ou privadas, quese destinam ao uso coletivo, devem garantir às pessoas com deficiência condições de acessibilidade a todosos serviços e em todas as suas dependências.No Brasil, o Estatuto da Pessoa com Deficiência (Lei Brasileira de Inclusão da Pessoa com Deficiência)define as normas gerais, e a Norma Técnica NBR 9050, editada pela ABNT, dispõe especificamente sobreos meios de acessibilidade em edificações, mobiliários, espaços e equipamentos urbanos.  Essa norma traztodas as recomendações e cuidados necessários na hora de projetar uma construção para que seja acessível,tais como:  medidas, distâncias necessárias, proteção contra quedas, altura correta para o alcance (lateral efrontal) do usuário de cadeira de rodas, entre outros.Um dos equipamentos fundamentais para acessibilidade do cidadão cadeirante é a rampa, que consiste de umplano inclinado cuja máxima declividade é definida pela NBR 9050.  Para ser acessível ao cadeirante autônomo (que depende apenas de suas próprias forças para realizar a subida), uma rampa precisa contemplardiversos detalhes e seu projeto deve ser executado por profissional de engenharia habilitado e devidamentetreinado nos termos da Norma.O primeiro passo é calcular sua inclinação, cujo valor máximo deve ser de 8,33% (relação 1:12 entre alturae comprimento). Tal cálculo é feito com a fórmula:

**i=H×100/C**

onde:

**i** é a inclinação da rampa expressa em porcentagem;

**H** é a altura do desnível;

**C** é o comprimento da projeção horizontal da rampa.

O segundo parâmetro fundamental é a largura da rampa para circulação em linha reta, cujo valor mínimoadmissível é de 0,80 metros.

Rampas onde haja espaço para atender simultaneamente os dois requisitos **i <= 8,334% e L >= 0,80m** sãoconsideradas como Projeto Simples. Quando pelo menos um desses dois requisitos não for atendido tratasede um Projeto Especial, que demanda um profissional mais experiente.

Nesta tarefa, você deve elaborar um programa de computador que irá ler as dimensões principais de altura,comprimento e largura e, em seguida, calcular a inclinação, bem como definir se o projeto é simples ouespecial.

**Entrada**<br>
A entrada contém diversos casos de teste. Em cada linha, há três números reais separados por um caractereem branco. O primeiro é a alturaH(H >0) da rampa. O segundo é o comprimento da projeção horizontalC(C >0).  O terceiro é a LarguraL(L >0) da rampa.  Para indicar o fim da entrada de dados, a última linha três valores iguais a 0.0. Utilize números reais de precisão dupla.

**Saída**<br>
A saída deve conter uma linha para cada linha da entrada informando com letras maiúsculas se é um **PROJETO SIMPLES** ou um **PROJETO ESPECIAL**. Ao final de cada linha deve ser impresso o final de linha,inclusive na última.

| Exemplo de Entrada 1 | Exemplo de Saída 1  |
| -------------------- | ------------------- |
| 0.8 16.0 1.2         | PROJETO SIMPLES     |
| 1.0 25.5 0.7         | PROJETO ESPECIAL    |
| 1.2 30.0 1.2         | PROJETO SIMPLES     |
| 1.5 32.5 1.2         | PROJETO SIMPLES     |
| 1.5 20.0 0.9         | PROJETO SIMPLES     |
| 1.8 20.0 0.9         | PROJETO ESPECIAL    |
| 1.8 30.0 0.9         | PROJETO SIMPLES     |
| 3.0 40.0 1.0         | PROJETO SIMPLES     |
| 3.0 36.0 1.0         | PROJETO SIMPLES     |
| 3.0 30.0 1.0         | PROJETO ESPECIAL    |
| 0.0 0.0 0.0          | ...............     |

