#include <Arduino.h>

// Pins dos algarismos
uint8_t digitos[] = {1, 2, 3, 4};

// Pins dos segmentos que compôem cada algarismo
uint8_t segmentos[] = {6, 7, 12, 8, 9, 10, 11, 13};

// Pins dos LED's
#define RED 27
#define BLUE 28

// Pins dos Botôes
#define BTNRED 21
#define BTNBLUE 22

// Palavra 1
uint8_t palavra1[4][8] = {
    { 1, 0, 0, 0, 1, 1, 1, 0 }, // F
    { 1, 1, 1, 0, 1, 1, 1, 0 }, // A
    { 0, 0, 0, 1, 1, 1, 0, 0 }, // L
    { 1, 1, 1, 0, 1, 1, 1, 0 }, // A
};

// Palavra 2
uint8_t palavra2[4][8] = {
    { 0, 0, 0, 1, 1, 1, 0, 0 }, // L
    { 1, 0, 0, 1, 1, 1, 1, 0 }, // E
    { 1, 1, 1, 1, 1, 1, 0, 0 }, // O
    { 0, 0, 0, 0, 0, 0, 1, 0},  // -
};

bool buttonRedPressed = false;
bool buttonBluePressed = false;

void setup() {
  // configurando as saídas dos leds
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);

  // configurando as entradas dos botões
  pinMode(BTNBLUE, INPUT_PULLUP);
  pinMode(BTNRED, INPUT_PULLUP);

  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
}

int printarmensagem(uint8_t arrayPalavra[4][8]) {
   // Definindo os Digitos como input
  for (uint8_t i = 0; i < 4; i++) {
    gpio_init(digitos[i]);
    gpio_set_dir(digitos[i], GPIO_OUT);
  }

  // Definindo os segmentos como output
  for (uint8_t i = 0; i < 8; i++) {
    gpio_init(segmentos[i]);
    gpio_set_dir(segmentos[i], GPIO_OUT);
  }

  for (uint8_t i = 0; i < 4; i++) {
    digitalWrite(digitos[i], HIGH);

    for (uint8_t seg = 0; seg < 8; seg++) {
      if (arrayPalavra[i][seg] == 0) {
        digitalWrite(segmentos[seg], HIGH);
      } else {
        digitalWrite(segmentos[seg], LOW);
      }
    }

    delay(300);
    digitalWrite(digitos[i], LOW);
    delay(100);
  }

  for (uint8_t i = 0; i < 4; i++) {
    digitalWrite(digitos[i], LOW);
  }

  for (uint8_t i = 0; i < 8; i++) {
    digitalWrite(segmentos[i], LOW);
  }

  return 0;
}


void loop() {
  // Botão Vermelho
  if (digitalRead(BTNRED) == LOW) {
    if (!buttonRedPressed) {
      digitalWrite(BLUE, LOW);    // Apaga o LED azul
      digitalWrite(RED, HIGH);    // Acende o LED vermelho
      printarmensagem(palavra1);
      buttonRedPressed = true;
    }
  } else {
    buttonRedPressed = false;
  }

  // Botão Azul
  if (digitalRead(BTNBLUE) == LOW) {
    if (!buttonBluePressed) {
      digitalWrite(RED, LOW);     // Apaga o LED vermelho
      digitalWrite(BLUE, HIGH);   // Acende o LED azul
      printarmensagem(palavra2);
      buttonBluePressed = true;
    }
  } else {
    buttonBluePressed = false;
  }
}