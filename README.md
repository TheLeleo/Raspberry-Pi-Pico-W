# Raspberry-Pi-Pico-W

Atividade:
Os estudantes deverão caracterizar o sistema embarcado Raspberry Pi Pico W, que estará presente no laboratório. Os estudantes deverão catalogar:

- Manual de referência do componente;
- Interfaces de comunicação com o componente;
- Prova de conceito para descrever como utilizar uma das interfaces de comunicação com outros sistemas.


## Manual de referência
Portas do micro-controlador:
<img src="img\portas.png">
<img src="img\legenda.png">


<h3>UART (Universal Asynchronous Receiver/Transmitter)</h3>
<p>O UART, que significa "Universal Asynchronous Receiver/Transmitter" (Recebimento/Transmissor Universal Assíncrono), desempenha um papel crucial na comunicação entre dispositivos. Ele permite que os dispositivos troquem informações de maneira serial, transmitindo e recebendo dados em formato assíncrono. Isso é essencial para a comunicação entre computadores, microcontroladores e outros dispositivos eletrônicos.</p>

<h3>GPIO, PIO e PWM (Portas Programáveis de Input/Output e Modulação por Largura de Pulso)</h3>
<p>As portas GPIO (General-Purpose Input/Output) e PIO (Programmable Input/Output) são recursos versáteis que permitem que a placa Raspberry Pi receba e envie informações para o mundo exterior. Com essas portas, você pode configurar os pinos para atuar como entradas (para receber informações) ou saídas (para enviar informações). Além disso, o PWM (Modulação por Largura de Pulso) é um método de controle de intensidade ou sinal analógico, útil para ajustar a velocidade de motores, regular a intensidade de LEDs e muito mais.</p>

<h3>ADC (Conversor Analógico-Digital)</h3>
<p>O ADC (Conversor Analógico-Digital) é responsável por transformar sinais analógicos, como variações de tensão, em valores digitais que podem ser processados por um sistema digital, como o Raspberry Pi. Isso é útil quando se deseja medir grandezas analógicas, como a temperatura em sensores analógicos, em um ambiente digital.</p>

<h3>I2C (Inter-Integrated Circuit)</h3>
<p>O I2C (Inter-Integrated Circuit) é um barramento de comunicação que permite a interligação serial de diferentes dispositivos, como sensores, displays, módulos de expansão e outros componentes eletrônicos. Esse protocolo oferece uma forma eficiente de comunicação entre dispositivos, economizando pinos GPIO e simplificando a conexão de periféricos ao Raspberry Pi.</p>

<h3>SPI (Serial Peripheral Interface)</h3>
<p>O SPI (Serial Peripheral Interface) é um barramento de comunicação síncrona de alta velocidade usado para conectar o Raspberry Pi a dispositivos como sensores, displays, módulos de armazenamento e controladores. Ele permite a transferência de dados em ambos os sentidos de forma rápida e eficiente, sendo particularmente útil em aplicações que requerem alta velocidade de comunicação e baixa latência.</p>

<h3>Energia</h3>
<p>A alimentação elétrica é fundamental para o funcionamento de todos os componentes do Raspberry Pi. Diferentes componentes e módulos podem exigir níveis de tensão e corrente específicos para operar corretamente, e o fornecimento de energia adequado é essencial para o funcionamento estável do sistema.</p>

<h3>Controle do Sistema</h3>
<p>Os controles do sistema incluem comandos específicos que permitem configurar e gerenciar o funcionamento do Raspberry Pi. Por exemplo, o pino "RUN" é capaz de reinicializar o Raspberry Pi, proporcionando uma maneira conveniente de reiniciar o sistema sem desligar a energia.</p>

<h3>Fio Terra (GND)</h3>
<p>O fio terra, representado como GND, fornece uma referência elétrica comum para todos os componentes e circuitos em um sistema. Isso garante que as tensões sejam medidas e referenciadas ao mesmo ponto, permitindo um funcionamento estável e correto do sistema. Além disso, o GND desempenha um papel crucial na proteção contra eletricidade estática e na conexão segura de componentes eletrônicos.</p>


## Interfaces de comunicação com o componente

## Prova de conceito
<img src="img\project raspberry.png">
<a href="https://wokwi.com/projects/379421348555692033">Acessar projeto no Wokwi</a>

Nesta POC, utilizei a placa Raspberry Pi Pico para criar um sistema embarcado que imprime a palavra "Fala" ao clicar no botão vermelho e "Leo" ao clicar no botão azul.

Para esta prova de conceito, utilizei os componentes:

- 1 Raspberry Pi Pico
<img src="img\raspberry.png" height="100" rotate="90">

- 1 Seven Segment Display (4 Digits)
<img src="img\asdfe.png" height="100">

- 2 PushButtons
<img src="img\btnss.png" height="100">

- 2 LED's
<img src="img\leds.png" height="100">