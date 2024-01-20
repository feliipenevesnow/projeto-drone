#include "Arduino.h"
#include <ESP32Servo.h>
#include "AdafruitIO_WiFi.h"

#define BRUSHLESSMOTOR_PIN_DATA 2

#define IO_USERNAME "SEU_USERNAME_DA_ADAFRUIT"
#define IO_KEY      "SUA_KEY_DA_ADAFRUIT"
#define WIFI_SSID   "LITERALMENTE_O_NOME_DA_SUA_REDE_WIFI_,_OLHE_NOS_WIFIS_DISPONIVEIS"
#define WIFI_PASS   "A_SENHA_DO_SEU_WIFI"

const int brushlessMotorLowSpeed = 1000;
const int brushlessMotorFastSpeed = 2000;

Servo brushlessMotor;

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);

// Eu chamei a minha feed de potenciometro por isso o nome da variável.
AdafruitIO_Feed *potenciometro = io.feed("SUA_FEED");

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("start");
  brushlessMotor.attach(BRUSHLESSMOTOR_PIN_DATA);

  io.connect();

  while (io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println(io.statusText());

  potenciometro->onMessage(handleMessage);
}

void handleMessage(AdafruitIO_Data *data) {
  int virtualPotValue = data->toInt();

  int motorSpeed = map(virtualPotValue, 0, 1023, brushlessMotorLowSpeed, brushlessMotorFastSpeed);

  if (motorSpeed < brushlessMotorLowSpeed) {
    motorSpeed = brushlessMotorLowSpeed;
  } else if (motorSpeed > brushlessMotorFastSpeed) {
    motorSpeed = brushlessMotorFastSpeed;
  }

  brushlessMotor.writeMicroseconds(motorSpeed);
}

void loop() {
  io.run();
}
