// Definición de los pines
int SensorSonido = 1; // El pin 1 para el sensor de sonido KY038

// Pines para los LEDs
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;

// Variable para almacenar el estado del sensor de sonido
int ESTADO = 0;

void setup(){
  // Configuración del pin del sensor como entrada
  pinMode(SensorSonido, INPUT);

  // Configuración de los pines de los LEDs como salidas
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
}

void loop(){
  // Lectura del estado del sensor de sonido
  int ESTADO = digitalRead(SensorSonido);

  // Si el sensor detecta sonido (salida alta)
  if (ESTADO == 1){
    // Enciende los LEDs en secuencia
    for(int i = LED1; i <= LED8; i++){
      digitalWrite(i, HIGH);
      delay(10);
    }
    // Apaga los LEDs en secuencia inversa
    for(int i = LED8; i >= LED1; i--){
      digitalWrite(i, LOW);
      delay(10);
    }
  }
}
