# Sistema de Monitoramento de Luminosidade – Vinheria Agnello

## Descrição do Projeto

Este sistema foi desenvolvido para a **Vinheria Agnello** como parte da primeira etapa de um projeto de monitoramento ambiental.

O objetivo principal é capturar e monitorar os níveis de luminosidade no ambiente de armazenamento dos vinhos.

A luz é um fator crítico na conservação vinícola, pois a exposição excessiva pode causar reações químicas indesejadas que alteram o sabor, a cor e a qualidade da bebida.

Utilizando um **Arduino UNO** e um **sensor LDR**, o sistema garante que qualquer desvio nos níveis de luminosidade seja detectado imediatamente, permitindo ações rápidas para preservar a integridade dos vinhos.

---

## Funcionamento do Sistema

O sistema opera através da leitura analógica de um sensor de luz (**LDR**) e aciona diferentes estados de alerta conforme o nível de luminosidade detectado.

### 1. Leitura de Dados

O sensor **LDR (Light Dependent Resistor)** varia sua resistência de acordo com a intensidade da luz ambiente.

O Arduino converte essa variação em um valor digital que vai de **0 a 1023**, permitindo a análise do nível de luminosidade.

---

### 2. Classificação dos Níveis

#### 🟢 Ideal (Verde)

Luminosidade dentro dos parâmetros seguros para a conservação dos vinhos.

- LED verde aceso
- Nenhum alerta sonoro

---

#### 🟡 Alerta (Amarelo)

Nível de luz acima do ideal.

- LED amarelo aceso
- O buzzer soa por **3 segundos**
- Caso a luminosidade permaneça alta, o alarme se repete

---

#### 🔴 Crítico (Vermelho)

Nível de luminosidade perigoso para o armazenamento adequado dos vinhos.

- LED vermelho aceso
- Indicação de risco elevado à conservação

---

## Componentes do Projeto

| Componente | Quantidade | Função |
|---|---:|---|
| Arduino UNO | 1 | Cérebro do sistema e processamento |
| Sensor LDR | 1 | Medição da luz ambiente |
| Resistor 10kΩ | 1 | Utilizado no divisor de tensão do sensor |
| LED Verde | 1 | Indica luminosidade ideal |
| LED Amarelo | 1 | Indica estado de alerta |
| LED Vermelho | 1 | Indica estado crítico |
| Buzzer | 1 | Alarme sonoro para notificações |
| Resistores 220Ω | 3 | Proteção para evitar queimar os LEDs |
| Protoboard | 1 | Estrutura de montagem do circuito |
| Jumpers | Vários | Conexões entre os componentes |

---

## Objetivo do Projeto

Garantir o monitoramento contínuo da luminosidade no ambiente da vinheria, reduzindo riscos de degradação dos vinhos e contribuindo para a preservação da qualidade do produto armazenado.

---

## Integrantes

- Henrique da Silva — RM: 569137  
- Andrey Luigi — RM: 569575  
- Nicolas Moreira Silva — RM: 571510  
- Gabriel Juarez — RM: 563680  
- Lucas Trevisan — RM: 569731  

---
