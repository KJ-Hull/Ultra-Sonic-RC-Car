#define X_PIN 2
#define Y_PIN 0
#define Z_PIN 4

const float ADC_REF = 3.3;
const float ADC_RES = 4095.0;
const float SENS = 0.3;      // ADXL335 sensitivity (V/g)

// Calibrated zero-g voltages (MEASURE THESE!)
const float X_ZERO = 1.65;
const float Y_ZERO = 2.72;
const float Z_ZERO = 1.97;


int readAvg(int pin) {
  int sum = 0;
  for (int i = 0; i < 16; i++) {
    sum += analogRead(pin);
  }
  return sum / 16;
}

void setup() {
  Serial.begin(115200);

  analogReadResolution(12);
  analogSetAttenuation(ADC_11db);

  Serial.println("ESP32 GY-61 Accelerometer (X, Y, Z in g)");
}

void loop() {
  float xV = readAvg(X_PIN) * (ADC_REF / ADC_RES);
  float yV = readAvg(Y_PIN) * (ADC_REF / ADC_RES);
  float zV = readAvg(Z_PIN) * (ADC_REF / ADC_RES);

  float xG = (xV - X_ZERO) / SENS;
  float yG = (yV - Y_ZERO) / SENS;
  float zG = (zV - Z_ZERO) / SENS;

  Serial.print("X: ");
  Serial.print(xG, 3);
  Serial.print(" g | Y: ");
  Serial.print(yG, 3);
  Serial.print(" g | Z: ");
  Serial.print(zG, 3);
  Serial.println(" g");

  delay(200);
}


