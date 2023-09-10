<h1>Smartrash - Sprint3</h1>

<p>Buscando maneiras de otimizar o serviço de coleta de resíduos de maneira eficiente, sem a necessidade de investimentos elevados. Uma abordagem que centraliza o projeto na obtenção de informações, visando uma gestão aprimorada desses serviços e, por conseguinte, benefícios diversos como economia de combustível, redução de despesas com frota e impacto positivo no meio ambiente.
Com todas essas considerações, o grupo concebeu o projeto da Lixeira Inteligente: a Smart Trash. A Smart Trash é uma solução desenvolvida pelo grupo dentro desses parâmetros estabelecidos, capaz de fornecer informações em tempo real para os centros de gerenciamento de resíduos. Isso possibilita às empresas uma visão mais abrangente e precisa, que servirá como diretriz para uma administração mais eficaz e organizada do serviço de coleta de resíduos nas áreas urbanas.
Essa capacidade é viabilizada pelo fato de que a Smart Trash é apta a coletar e transmitir dados em tempo real a partir de diversos pontos de coleta espalhados pela cidade. Comparado ao antigo sistema que se baseava em médias de produção de resíduos ao longo do tempo, esse mecanismo é significativamente mais eficiente, permitindo análises mais precisas e, assim, a concepção de soluções mais bem planejadas. Isso, por sua vez, utiliza a tecnologia para aproximar as cidades da dinâmica esperada em Cidades Inteligentes.
</p>

<h3>Arquitetura do Projeto</h3>
<div>
  <img src="https://github.com/gui2604/Smartrash-Sprint3/assets/128194162/da070817-de03-40d9-a613-29fba9c2cec1" width="300px">
</div>

<h3>Hardware</h3>
<ul><p>O hardware necessário para a construção e funcionamento da Smart Trash são:</p>
  <li>1x Arduíno Uno R3</li>
  <li>1x ESP32</li>
  <li>1x Protoboard 830 pontos</li>
  <li>5x LED's(branco, verde, amarelo, laranja e vermelho)</li>
  <li>5x Resistores 220V</li>
  <li>1x Sensor ultrassônico - HC-SR04</li>
  <li>1x Sensor de Peso - Célula de carga</li>
  <li>1x Fonte de alimentação para 5V</li>
  <li>12x cabos tipo macho-macho</li>
  <li>7x cabos tipo macho-fêmea</li>
</ul>

<h3>Instruções, dependências e requisitos</h3>
<ul><p>Requisitos Funcionais</p>
  <li>A lixeira deverá ser capaz de obter e medir o peso do lixo depositado em seu interior.</li>
  <li>A lixeira deverá ser capaz de traduzir o peso medido para visualização em LED’s (verde, amarelo, laranja e vermelho).</li>
  <li>A lixeira deverá ser capaz de detectar o nível, ou seja, a altura do lixo atingido.</li>
  <li>A lixeira deverá ser capaz de detectar em quais locais da borda da lixeira o lixo atingiu sua altura máxima.</li>
  <li>A lixeira deverá ser capaz de medir o tempo entre a deposição máxima de lixo permitida até o momento de coleta por meio de um timer.</li>
  <li>A lixeira deverá alertar visualmente com um LED amarelo piscante quando ela atingir sua lotação.</li>
  <li>A lixeira devera ter resistencia contra a oxidação e à choques mecânicos.</li>
</ul>
<ul><p>Requisitos Não-Funcionais</p>
  <li>A lixeira deverá ser vazada para que não ocorra o acúmulo de líquidos interferindo significativamente na medição do peso do lixo depositado.</li>
  <li>A lixeira deverá possuir uma comunicação eficiente, transmitindo informações para a central em tempo real.</li>
  <li>A lixeira deverá ser capaz de intergir presencialmente com usuários, transmitindo-lhes informações visuais sobre os dados coletados do lixo.</li>
  <li>A lixeira devera ser resistente mecanicamente e quimicamente aos efeitos naturais.</li>
</ul>
<ul><p>Regras de Negócio</p>
  <li>A lixeira não poderá ultrapassar 1500kg de capacidade de peso, tendo em vista a restrição de acúmulo de lixo depositado, e o comprometimento da estrutura de sustentação da lixeira.</li>
  <li>A lixo depositado não podera ultrapassar 70% do preenchimento de saturação da borda da lixeira, visto o risco de transposição da borda devido à lotação.</li>
  <li>O timer deverá ser resetado a zero, se, e somente se, o conteúdo depositado na lixeira após a lotação seja retirado e o peso seja reduzido a menos de 10% da capacidade máxima, juntamente com menos de 20% dos sensores de detecção de lixo na borda não estarem detectando lixo depositado.</li>
</ul>
<h3>Diagrama de Caso de Uso</h3>
<p>Representação do funcionamento do ecossistema da Smart Trash com diagrama de caso de uso:</p>
<div>
  <img src="" width="300px">
</div>
