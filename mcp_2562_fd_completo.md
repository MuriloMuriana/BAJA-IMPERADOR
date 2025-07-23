# Resumo do Datasheet - MCP2562FD

## Geral
O **MCP2562FD** é um **transceptor CAN FD (Flexible Data Rate)** da **Microchip**, ideal para comunicação robusta em ambientes **automotivos**, **industriais** e **embarcados**. Opera com o **protocolo CAN FD** conforme ISO 11898-2:2016 e é compatível com o **CAN clássico**.

**Principais Vantagens:**  
  Suporte a taxas CAN FD de até 8 Mbps  
  Baixo consumo em standby (5 µA)  
  Proteção ESD até ±8 kV  
  Interface de tensão I/O flexível (1.8V a 5.5V)

---

## Características Técnicas
### 1. Elétricas
- **Tensão de alimentação (VDD):** 4.5V a 5.5V
- **Tensão de I/O (VIO):** 1.8V a 5.5V
- **Corrente de operação:**
  - Dominante (ativo): 45 mA
  - Recessivo (passivo): 5 mA
- **Corrente em standby:** 5 µA 
- **Resistência ESD:** ±8 kV (IEC 61000-4-2)
- **Impedância de entrada do barramento:** 45 kΩ (típico)

### 2. Comunicação CAN FD
- **Compatibilidade:** ISO 11898-2:2016 (CAN FD) e CAN clássico
- **Taxas de dados:**
  - Arbitration Phase: até 1 Mbps
  - Data Phase: até 8 Mbps
- **Modo de escuta (Listen-only):** Suportado
- **Atraso de propagação:** 120 ns (máximo)
- **Transceiver Loop Delay:** ~210 ns
- **Tempo de ativamento após power-on:** ~5 μs
- **Tempo de desligamento (fall time):** ~40 ns

### 3. Proteções e Recursos de Segurança
- **Proteção contra curto-circuito entre CANH/CANL**
- **Detecção de dominância prolongada:** >1.25 ms
- **Desconexão automática do barramento se VDD ausente**
- **Proteção térmica:** Shutdown interno acima de 165 °C
- **Imunidade a EMC**: Alta robustez para ambientes ruidosos

---

## Pinagem (8 pinos - DFN, SOIC, PDIP)

- **TXD:** Entrada de dados do microcontrolador         
- **VSS:** Terra (GND)                                  
- **VDD:** Alimentação principal (5V)                   
- **RXD:** Saída de dados para o microcontrolador       
- **VIO:** Alimentação da interface digital (1.8V-5.5V) 
- **CANL:** Linha CAN (Low)                              
- **CANH:** Linha CAN (High)                             
- **STBY:** Controle de modo (LOW: Normal, HIGH: Standby)

---

## Modos de Operação

### Normal Mode
- `STBY = LOW`
- Transceptor ativo: TXD e RXD operacionais

### Standby Mode
- `STBY = HIGH`
- Consumo ultrabaixo (~5 µA)

---

## Aplicações
- **Automotivo:** ECUs, freios, motor, airbag, Diagnóstico veicular
- **Industrial:** Controle de motores, sensores distribuídos
- **Embarcados:** Gateways CAN, microcontroladores STM32, PIC, etc.

---

## Observações e Limitações
- **Temperatura de operação:** -40 °C a +150 °C
- **Proteção ESD inferior a outros modelos (ex: MCP2561FD)**
- **Sem suporte a Wake-up por atividade de rede (WUP)**

