# 📌 Resumo em Palavras

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
