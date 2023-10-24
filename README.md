# Raspberry Pi Pico W <img src="img\rasplogo" height="60px">

## Introdução

Neste documento, descreveremos o sistema embarcado Raspberry Pi Pico W, que será utilizado no laboratório. O Raspberry Pi Pico W é um dispositivo versátil com diversas funcionalidades e interfaces de comunicação. Neste documento, abordaremos os seguintes tópicos:

1. Manual de Referência
2. Interfaces de Comunicação com o Componente
3. Prova de Conceito

## 1. Manual de Referência

O Raspberry Pi Pico W é um sistema de placa que possui um microcontrolador imbutido, incluindo diversos componentes e recursos:

<img src="img\pase.png">

### Microcontrolador

O microcontrolador desempenha um papel fundamental na gestão de energia do sistema e na coordenação das operações.

### Buck-Boost

O circuito Buck-Boost é utilizado para converter a tensão de entrada em uma tensão de polaridade oposta, garantindo um fornecimento de energia estável.

### Flash

Oferece armazenamento para o sistema.

### Cristal de Quartzo

O cristal de quartzo fornece o sinal de clock do dispositivo, tornando as as operações do processador, componentes e periféricos sincronizadas.

### Pinos SWD

Os pinos SWD servem como uma interface de debug.

## 2. Interfaces de Comunicação com o Componente

Interfaces de comunicação são protocolos que permitem a troca de dados entre componentes eletrônicos em um sistema, a Respberry Pi possui os seguintes protocolos:

<img src="img\portas.png">
<img src="img\legenda.png">

### UART (Universal Asynchronous Receiver/Transmitter)

O UART é uma interface que permite a troca de informações entre dispositivos de forma assíncrona.

### GPIO, PIO e PWM (Portas Programáveis de Input/Output e Modulação por Largura de Pulso)

As portas GPIO, PIO e PWM são recursos que possibilitam a entrada e saída de informações (Input e Output), bem como o controle de dispositivos como motores e LEDs.

### ADC (Conversor Analógico-Digital)

O Conversor Analógico-Digital (ADC) é usado para converter sinais analógicos (sinais do mundo real) em valores digitais, possibilitando a manipulação destas informações.

### I2C (Inter-Integrated Circuit)

O barramento I2C é utilizado para a comunicação serial entre diferentes dispositivos, simplificando a conexão de periféricos ao Raspberry Pi.

### SPI (Serial Peripheral Interface)

O barramento SPI permite a comunicação de alta velocidade entre o Raspberry Pi e dispositivos como sensores e displays.

### Energia

Responsável por oferecer energia necessária para o uso de certos componentes utilizados em conjunto com a placa.

### Controle do Sistema

Os controles do sistema incluem comandos específicos da placa, como por exemplo o pino "RUN", cujo possibilita a reinicialização da Raspberry Pi.

### Fio Terra (GND)

Responsável pela referência elétrica comum para todos os componentes, garantindo um funcionamento estável e seguro da placa em conjunto com seus periféricos.

## 3. Prova de Conceito

Esta POC envolve o uso da Raspberry Pi Pico para criar um sistema embarcado cujo responde a botões e exibe mensagens em um display de sete segmentos. Os componentes utilizados são:

- 1 Raspberry Pi Pico
<img src="img\raspberry.png" height="100" rotate="90">

- 1 Display de Sete Segmentos (4 Dígitos)
<img src="img\asdfe.png" height="100">

- 2 Push Buttons
<img src="img\btnss.png" height="100">

- 2 LEDs
<img src="img\leds.png" height="100">

Ao clicar nos botões presentes na solução, o sistema ativa o Led de cor respectiva e imprime uma das frases específicadas no código.

<img src="img\project raspberry.png">
<a href="https://wokwi.com/projects/379421348555692033">Acessar projeto no Wokwi</a>