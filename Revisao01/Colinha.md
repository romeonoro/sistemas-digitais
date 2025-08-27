# Flip-Flops / Latches

## 1. Latch SR (NOR) – entradas ativas em 1

| S | R | Clock / Ativo | Q+ | Observação |
|---|---|---------------|----|------------|
| 0 | 0 | N/A           | Mantém | Estado anterior |
| 1 | 0 | N/A           | 1 (Set) | Seta Q |
| 0 | 1 | N/A           | 0 (Reset) | Zera Q |
| 1 | 1 | N/A           | Proibido | Q e Q̅ = 0 |

**Resumo:** Mantém = (0,0), Set = (1,0), Reset = (0,1), Proibido = (1,1)

---

## 2. Latch SR (NAND) – entradas ativas em 0

| S | R | Clock / Ativo | Q+ | Observação |
|---|---|---------------|----|------------|
| 1 | 1 | N/A           | Mantém | Estado anterior |
| 0 | 1 | N/A           | 1 (Set) | Seta Q |
| 1 | 0 | N/A           | 0 (Reset) | Zera Q |
| 0 | 0 | N/A           | Proibido | Q e Q̅ = 1 |

**Resumo:** Mantém = (1,1), Set = (0,1), Reset = (1,0), Proibido = (0,0)

---

## 3. JK – Flip-Flop sincronizado

| J | K | Clock: ↑ | Q+ | Observação |
|---|---|-----------|----|------------|
| 0 | 0 | ↑         | Mantém | Estado anterior |
| 1 | 0 | ↑         | 1 (Set) | Seta Q |
| 0 | 1 | ↑         | 0 (Reset) | Zera Q |
| 1 | 1 | ↑         | Toggle (inverte) | Q → Q̅ |

**Resumo:** Mantém = (0,0), Set = (1,0), Reset = (0,1), Toggle = (1,1), nunca proibido

---

## 4. D – Flip-Flop

| D | Clock: ↑ | Q+ | Observação |
|---|-----------|----|------------|
| 0 | ↑         | 0 | Copia D |
| 1 | ↑         | 1 | Copia D |

**Resumo:** Sempre segue D, nunca proibido, sem toggle

---

## 5. T – Flip-Flop

| T | Clock: ↑ | Q+ | Observação |
|---|-----------|----|------------|
| 0 | ↑         | Mantém | Estado anterior |
| 1 | ↑         | Toggle (inverte) | Q → Q̅ |

**Resumo:** Mantém = 0, Toggle = 1, nunca proibido

# 📌 Resumo 

## SR (Latch SR NOR)
- Mantém no **(S=0, R=0)**
- **Proibido** no **(S=1, R=1)**
- Não possui inversão (toggle)

## JK
- Mantém no **(J=0, K=0)**
- Inverte (**toggle**) no **(J=1, K=1)**
- Nunca proibido

## D
- Não tem “mantém”: sempre copia o valor de **D** para **Q**
- Não inverte diretamente, apenas segue **D**
- Nunca proibido

## T
- Mantém no **(T=0)**
- Inverte (**toggle**) no **(T=1)**
- Nunca proibido

# 🌐 Mapa de Karnaugh — Regras e Exemplos

No **mapa de Karnaugh**, os agrupamentos precisam sempre ter tamanhos em **potências de 2** (1, 2, 4, 8, ...).  
Isso acontece porque apenas assim conseguimos **eliminar variáveis** e simplificar a expressão booleana corretamente.  

Além disso, o mapa é **toroidal**, ou seja, funciona como se fosse dobrado:  
- A primeira linha está conectada à última.  
- A primeira coluna também está conectada à última.  

Essa característica permite que possamos formar agrupamentos **“atravessando as bordas”**, o que ajuda a criar blocos maiores e chegar a expressões ainda mais simples.

---

## 🔎 Exemplos de agrupamentos

- **1 célula (2⁰):**  
  Aqui não há simplificação, pois nenhuma variável é eliminada. O termo resultante carrega todas as variáveis.

- **2 células (2¹):**  
  Sempre formadas por posições vizinhas. Como o mapa usa a **codificação Gray**, apenas **uma variável** muda de valor entre essas duas células, e justamente ela é descartada na simplificação.

- **4 células (2²):**  
  Nesse caso, temos duas variáveis variando dentro do grupo. Isso faz com que ambas sejam eliminadas, restando só as que permanecem fixas.

- **8 células (2³):**  
  Em agrupamentos grandes como esse, três variáveis mudam de valor e desaparecem na simplificação, sobrando apenas uma variável no termo final.

---

✅ Dessa forma, quanto maior o agrupamento, mais variáveis conseguimos eliminar, e mais simples fica a expressão booleana.
