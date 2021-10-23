/*******************************************************************************
* Pequeno projeto de um semáforo de carros e de pedestres.
*******************************************************************************/

void setup(){
  // Configura os pinos com os LEDs como saída
  pinMode(9, OUTPUT); // LED verde pedestres
  pinMode(10, OUTPUT); // LED vermelho pedestres
  pinMode(11, OUTPUT); // LED verde carros
  pinMode(12, OUTPUT); // LED amarelo carros
  pinMode(13, OUTPUT); // LED vermelho carros

 // Desliga todos os leds. acende verde dos pedestres e vermelho dos carros
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(5000);
 
}

void loop(){
  // Intermitente no led verde dos pedestres (pisca 5 vezes)
  for (int i = 0; i <= 4; i++) {
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }

  // Sinal para pedestres fechado: apaga LED verde, acende LED vermelho
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);

  // Sinal para carros aberto: espera 2 segundos, apaga LED vermelho, acende LED verde
  delay(2000);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);
  
  // Sinal para carros fechando: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);

  // Sinal para carros fechado: apaga LED amarelo, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);

 // Sinal para pedestres aberto: apaga LED vermelho, acende LED verde
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(3000);
 }
