const int PIN_LED = 8;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
  Serial.begin(115200);
  Serial.println("Digite os valores de C T P separados por espaço (ex: 1 0 1)");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n'); // lê a linha completa

    int C = -1, T = -1, P = -1;

    // tenta separar os números
    int parsed = sscanf(input.c_str(), "%d %d %d", &C, &T, &P);

    if (parsed == 3) {
      Serial.print("Valores recebidos: C=");
      Serial.print(C);
      Serial.print(" T=");
      Serial.print(T);
      Serial.print(" P=");
      Serial.println(P);

      bool S = (C == 1) && (T == 1) && (P == 1);
      digitalWrite(PIN_LED, S ? HIGH : LOW);

      if (S) {
        Serial.println("CANCELA ABERTA: LED ON");
      } else {
        Serial.println("CANCELA FECHADA: LED OFF");
      }
    } else {
      Serial.println("Entrada inválida! Digite 3 valores (ex: 1 0 1)");
    }
  }
}
