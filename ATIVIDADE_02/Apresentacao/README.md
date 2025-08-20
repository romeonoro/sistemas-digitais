# 🚗 Estacionamento Automático com Barreira (Sem parar)

### Dupla: Matheus Nogueira | Romeo Noro

---

<img width="528" height="388" alt="image" src="https://github.com/user-attachments/assets/b1c4a8e7-b929-4d23-a395-10a6796e2662" />

## 1. Definição do Problema (Cenário Real)

A cancela só abre se:
1. O **sensor de presença** detectar um carro (**C = 1**)
2. A **tag** for lida com sucesso (**T = 1**)
3. O **pagamento** estiver autorizado (**P = 1**)

---

## 2. Variáveis de Entrada

| Variável | Significado |
|----------|-------------|
| **C** | Carro presente (1 = sim, 0 = não) |
| **T** | Tag lida com sucesso (1 = sim, 0 = não) |
| **P** | Pagamento autorizado (1 = sim, 0 = não) |
| **S** | Cancela abre (1 = sim, 0 = não) |

---

## 3. Tabela Verdade

| C (Carro) | T (Tag) | P (Pagamento) | S (Cancela abre) |
|:---------:|:-------:|:--------------:|:----------------:|
| 0 | 0 | 0 | 0 |
| 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 0 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 0 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 0 |
| 1 | 1 | 1 | 1 |

---

## 4. Expressão Canônica (Soma de Mintermos) e Expressão Simplificada

A saída **S** só é 1 quando **C = 1**, **T = 1** e **P = 1**:

`S = C · T · P`

---
## 5. Mapa de Karnaugh

<img width="816" height="550" alt="kmap_estilo_modelo" src="https://github.com/user-attachments/assets/30ce57c4-6661-46ea-80cb-9bfb3ee0a5ca" />

---

## 6. Circuito Lógico e Simulação

### Se uma ou mais entradas forem 0, então, S = 0
<img width="430" height="259" alt="image" src="https://github.com/user-attachments/assets/65676d2b-8508-454c-b17b-8fc0ac7a5528" />
<img width="430" height="233" alt="image" src="https://github.com/user-attachments/assets/1d98b049-ca7a-43cd-b0e8-77ba45c428e1" /> <br>

### Se todas as entradas forem 1, então, S = 1 <br>
<img width="463" height="277" alt="image" src="https://github.com/user-attachments/assets/f82f8e10-7f98-49f7-a90c-5500b6d917d9" />

---

## 7. Lógica do Circuito (Explicação)

A cancela **só será aberta** quando:
- Um carro estiver presente (**C = 1**)
- A tag for lida corretamente (**T = 1**)
- O pagamento for aprovado (**P = 1**)

---
