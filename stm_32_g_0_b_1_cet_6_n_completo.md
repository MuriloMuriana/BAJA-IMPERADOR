# Resumo do Datasheet - STM32G0B1CET6N

## Geral
O **STM32G0B1CET6N** é um microcontrolador de 32 bits baseado no **Arm® Cortex®-M0+**, com foco em aplicações de baixa potência, periféricos de alto desempenho e conectividade robusta. Ideal para aplicações industriais, automotivas e IoT, combina **baixo consumo**, **grande capacidade de memória** e **suporte a vários protocolos de comunicação**.

**Principais Vantagens:**  
  Até 512 KB de Flash e 144 KB de SRAM.  
  Controlador USB-C Power Delivery integrado.  
  2 controladores CAN FD (FDCAN).

--- 

## Características Técnicas
### 1. Elétricas
- **Tensão de operação (VDD):** 1.7V a 3.6V  
- **Tensão dos I/Os (VDDIO):** 1.65V a 3.6V  
- **Tolerância a 5V:** Diversos pinos são 5V-tolerant
- **Consumo de corrente (típico):**
  - Run @ 64 MHz: ~8.7 mA
  - Stop: ~1.2 µA
  - Standby: ~0.7 µA
  - Shutdown: ~25 nA
- **Temperatura de operação:** -40 °C a +125 °C (ambiente)
- **Resistência ESD:** ±4 kV (HBM)
- **Proteções integradas:**
  - BOR, POR/PDR, PVD programável
  - Supervisão de tensão
  - VBAT para RTC e backup

### 2. Unidade Central e Memórias
- **Core:** Arm® Cortex®-M0+ (32 bits)
  - Frequência máxima: **64 MHz**
- **Flash:** Até **512 KB**, com suporte a:
  - Leitura enquanto escreve
  - Proteção contra leitura/gravação
  - Área segura (Securable area)
- **SRAM:** Até **144 KB**, sendo 128 KB com paridade
- **CRC:** Unidade dedicada para verificação de integridade
- **Boot:** Suporte a múltiplos modos de boot

### 3. Comunicação
- **USART:** 6 unidades, com suporte a:
  - SPI mestre/escravo
  - LIN, IrDA, ISO7816, Auto baud rate
- **SPI/I2S:**
  - 3 SPI dedicadas (até 32 Mbps)
  - 6 SPI adicionais via USARTs
  - 2 interfaces com suporte I2S
- **I2C:** 3 unidades, com:
  - SMBus, PMBus
  - Wakeup de modo Stop
  - Suporte Fast-mode Plus (1 Mbps)
- **USB:** USB 2.0 Full Speed (Device e Host)
  - Opera sem cristal externo
- **UCPD (USB Type-C™ PD):** até 2 portas
- **FDCAN:** 2 controladores CAN FD
- **CEC HDMI:** Interface para Consumer Electronics Control

### 4. Periféricos Analógicos
- **ADC:**
  - 12 bits, taxa de amostragem até **2.5 MSPS**
  - Até **19 canais** (16 externos + 3 internos)
  - Oversampling até 16 bits
  - Faixa de entrada: 0 a 3.6V
- **DAC:**
  - 2 canais de 12 bits com modo sample-and-hold
- **Comparadores:**
  - 3, com entrada/saída programáveis (rail-to-rail)
- **Referência de tensão:** VREFINT e VREFBUF (buffer interno)
- **Sensor de temperatura interno**

### 5. Temporizadores
- Total: **15 timers**, incluindo:
  - 1 PWM/Advanced Control Timer (16 bits, até 128 MHz)
  - 6 Timers Gerais (16 bits)
  - 1 Timer Geral (32 bits)
  - 2 Timers básicos (16 bits)
  - 2 Low-power timers (LPTIM)
  - 2 Watchdogs (IWDG e WWDG)
  - SysTick timer

### 6. Modos de Economia de Energia
- Modos suportados:
  - Sleep
  - Stop
  - Standby
  - Shutdown
- Recursos:
  - Wakeup por EXTI, RTC, UART, etc.
  - RTC com wake-up e alarme
  - Alimentação VBAT independente

### 7. GPIO e DMA
- **GPIOs:** até **94** I/Os
  - 5V-tolerant
  - Mapeáveis a interrupções externas (EXTI)
- **DMA:**
  - 12 canais
  - DMAMUX: mapeamento flexível de sinais

### 8. Outros Recursos
- **Debug:** SWD (Serial Wire Debug)
- **ID único:** 96 bits
- **RTC:** com suporte a calendario, tamper e backup
- **Watchdog independente e de janela**
- **Memória OTP e OPAMP (dependendo da variante)**

---

## Pinagem (STM32G0B1CET6N - LQFP48)
- **Encapsulamento:** LQFP48 (7x7 mm)
- **Pinos de função múltipla** com suporte a:
  - GPIO, ADC, DAC, TIM, I2C, USART, SPI, etc.
- **Pino VDDIO2** para tensão de I/O independente em algumas variantes

---

## Aplicações
- **Internet das Coisas (IoT)**
- **Automotivo:** gateways, sensores e controle
- **Industrial:** PLCs, controle de motores, inversores
- **Consumo:** eletroportáteis, wearables, automação
- **Embarcados:** com comunicação CAN, USB ou UART

---

## Observações e Limitações
- **HSE externo** não disponível em pacotes de 32 pinos
- **Frequência de CPU limitada a 64 MHz** (ideal para aplicações de baixo consumo)
- **Sem suporte a criptografia por hardware (AES, RNG)** nesta variante

