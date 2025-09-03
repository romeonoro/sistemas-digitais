## 🔹 VHDL
- **VHDL (VHSIC Hardware Description Language)** é uma **linguagem de descrição de hardware**.  
- Diferente de linguagens como C ou Java, que descrevem algoritmos para execução sequencial em um processador, o VHDL descreve **circuitos digitais** (portas lógicas, registradores, máquinas de estados, etc.).  
- Usado para projetar e simular hardware em nível de **comportamento, transferência de dados e lógica estrutural**.  
- Pode ser sintetizado em **FPGA** ou em **ASICs**.

---

## 🔹 FPGA (Field Programmable Gate Array)
- Um **chip reprogramável** que contém milhares/milhões de **blocos lógicos configuráveis** e interconexões programáveis.  
- Você usa VHDL ou Verilog para descrever o circuito → sintetiza → carrega no FPGA.  
- **Vantagens:**  
  - Flexibilidade (pode ser reprogramado várias vezes).  
  - Ótimo para prototipagem, sistemas de alto desempenho, aplicações paralelas.  
- **Desvantagens:**  
  - Mais caro e consome mais energia que um chip dedicado (ASIC).  

---

## 🔹 Diferença entre FPGA e Arduino

| Característica | FPGA | Arduino (microcontrolador) |
|----------------|------|-----------------------------|
| **Natureza** | Hardware reconfigurável (lógica paralela) | Processador que executa instruções (sequencial) |
| **Programação** | Linguagem de descrição de hardware (VHDL/Verilog) | C/C++ |
| **Flexibilidade** | Pode criar qualquer arquitetura digital | Limitado ao microcontrolador ATmega (ex: ATmega328p) |
| **Velocidade** | Pode operar em paralelo (muito rápido em tarefas específicas) | Execução instrução por instrução (mais lento) |
| **Aplicações** | Processamento de sinais, redes, criptografia, controle em tempo real | Automação, IoT, protótipos simples |

👉 Resumindo: **FPGA é hardware programável, Arduino é software rodando em hardware fixo.**

---

## 🔹 ASIC (Application Specific Integrated Circuit)
- Circuito integrado feito sob medida para uma aplicação específica.  
- Diferente do FPGA, **não é reprogramável** — o hardware é gravado na fabricação.  
- **Vantagens:**  
  - Mais rápido, menor consumo de energia, custo por unidade baixo (quando fabricado em massa).  
- **Desvantagens:**  
  - Custo de desenvolvimento altíssimo (máscaras de fabricação).  
  - Não pode ser alterado depois de fabricado.  

👉 Fluxo típico: **prototipar em FPGA → se aprovado → fabricar um ASIC.**

---

## 🔹 Vivado 2015.1 (software da Xilinx/AMD)
- Ferramenta de desenvolvimento para FPGAs da Xilinx (hoje AMD).  
- Permite:  
  - **Escrever** código em VHDL/Verilog.  
  - **Simular** o comportamento.  
  - **Sintetizar** o hardware (gerar o circuito).  
  - **Implementar** (mapear para os recursos físicos do FPGA).  
  - **Configurar** (gerar o arquivo bitstream e carregar no FPGA).  

👉 Vivado é para FPGA o que o **Arduino IDE** é para Arduino, mas muito mais poderoso (voltado para hardware).  

---

## 🔹 RTL (Register Transfer Level)
- RTL (Register Transfer Level) é um nível de abstração usado no projeto de circuitos digitais.
- Nesse nível, o sistema é descrito em termos de transferência de dados entre registradores e as operações lógicas realizadas sobre esses dados.
- É a forma como o VHDL (ou Verilog) normalmente é interpretado quando se projeta hardware.

- Características principais:
  - Foca em como os dados se movem entre registradores e quais operações (somadores, multiplexadores, comparadores, etc.) são realizadas.
  - É mais baixo que a descrição comportamental ("o que o sistema faz") e mais alto que a descrição estrutural em portas lógicas.
  - É a base para a síntese em FPGA ou ASIC: o compilador pega a descrição RTL e a converte em portas lógicas e conexões físicas.
