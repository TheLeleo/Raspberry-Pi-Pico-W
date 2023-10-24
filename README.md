# Raspberry Pi Pico W

## Introdução

Neste documento, descreveremos o sistema embarcado Raspberry Pi Pico W, que será utilizado no laboratório. O Raspberry Pi Pico W é um dispositivo versátil com diversas funcionalidades e interfaces de comunicação. Neste documento, abordaremos os seguintes tópicos:

1. Manual de Referência
2. Interfaces de Comunicação com o Componente
3. Prova de Conceito

## 1. Manual de Referência

O Raspberry Pi Pico W é um sistema embarcado que inclui vários componentes e recursos essenciais. Aqui estão alguns dos principais componentes e sua função:

<img src="img\pase.png">

### Microcontrolador

O microcontrolador desempenha um papel fundamental na gestão de energia do sistema e na coordenação das operações.

### Buck-Boost

O circuito Buck-Boost é utilizado para converter a tensão de entrada em uma tensão de polaridade oposta, garantindo um fornecimento de energia estável.

### Flash

O armazenamento é fornecido pelo componente Flash, permitindo o armazenamento de dados e programas.

### Cristal de Quartzo

O cristal de quartzo fornece um sinal de clock preciso, sincronizando as operações do processador, componentes e periféricos.

### Pinos SWD

Os pinos SWD servem como uma interface de depuração, permitindo a análise e depuração do sistema.

## 2. Interfaces de Comunicação com o Componente

O Raspberry Pi Pico W oferece várias interfaces de comunicação para interagir com outros dispositivos. Aqui estão algumas delas:

<img src="img\portas.png">
<img src="img\legenda.png">

### UART (Universal Asynchronous Receiver/Transmitter)

O UART é uma interface crucial para a comunicação entre dispositivos, permitindo a troca de informações em formato assíncrono.

### GPIO, PIO e PWM (Portas Programáveis de Input/Output e Modulação por Largura de Pulso)

As portas GPIO, PIO e PWM são recursos versáteis que possibilitam a entrada e saída de informações, bem como o controle de dispositivos como motores e LEDs.

### ADC (Conversor Analógico-Digital)

O Conversor Analógico-Digital (ADC) é usado para converter sinais analógicos em valores digitais, tornando possível a leitura de sensores analógicos.

### I2C (Inter-Integrated Circuit)

O barramento I2C é utilizado para a comunicação serial entre diferentes dispositivos, simplificando a conexão de periféricos ao Raspberry Pi.

### SPI (Serial Peripheral Interface)

O barramento SPI permite a comunicação de alta velocidade entre o Raspberry Pi e dispositivos como sensores e displays.

### Energia

Fornecer a energia elétrica adequada é essencial para o funcionamento estável de todos os componentes do Raspberry Pi.

### Controle do Sistema

Os controles do sistema incluem comandos específicos, como o pino "RUN," que possibilita a reinicialização do Raspberry Pi.

### Fio Terra (GND)

O fio terra fornece uma referência elétrica comum para todos os componentes e circuitos, garantindo um funcionamento estável e seguro.

## 3. Prova de Conceito



Nossa prova de conceito envolve o uso da Raspberry Pi Pico para criar um sistema embarcado que responde a botões e exibe mensagens em um display de sete segmentos. Os componentes utilizados incluem:

<img src="img\project raspberry.png">
<a href="https://wokwi.com/projects/379421348555692033">Acessar projeto no Wokwi</a>

- 1 Raspberry Pi Pico
<img src="img\raspberry.png" height="100" rotate="90">

- 1 Display de Sete Segmentos (4 Dígitos)
<img src="img\asdfe.png" height="100">

- 2 Push Buttons
<img src="img\btnss.png" height="100">

- 2 LEDs
<img src="img\leds.png" height="100">

A prova de conceito demonstra como a Raspberry Pi Pico pode interagir com esses componentes para exibir mensagens "Fala" ao pressionar o botão vermelho e "Leo" ao pressionar o botão azul.

Para visualizar e interagir com a prova de conceito, acesse o projeto no [Wokwi](https://wokwi.com/projects/379421348555692033).

## Conclusão

O Raspberry Pi Pico W é um sistema embarcado versátil com uma ampla variedade de recursos e interfaces de comunicação. Esta documentação fornece informações essenciais para entender e aproveitar ao máximo o potencial desse dispositivo.