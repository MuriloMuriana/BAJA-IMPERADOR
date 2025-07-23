# Resumo - Desafio Técnico Baja SAE BRASIL Sul 2024

## Introdução
Desenvolvimento de um datalogger para ensaios Coast Down, coletando dados de velocidade para análise das forças resistivas do veículo, conforme norma NBR 10312:2019 e diretrizes SAE Brasil.

## Fundamentação Teórica
**Road Load** (Resistência total ao movimento):
- `Qr = f · G` (Resistência ao rolamento)
- `Qa = 1/2 · ρ · Af · Cd · v²` (Arrasto aerodinâmico)

**Equação principal**:
`RL(v) = A · v² + C`  
Onde:
- `A = 1/2 · ρ · Af · Cd`
- `C = f · G`

## Especificações Técnicas
| Parâmetro | Valor |
|-----------|-------|
| Frequência | 230 Hz |
| Resolução | < 0,2 km/h |
| Exatidão | < 0,4 km/h |
| Alimentação | 12V |
| Custo | R$150 (max) |
| Peso | < 300g |

## Hardware
**Componentes principais**:
- ESP32-WROOM-32 (MCU)
- CP2102 (USB)
- Buck 12V→3,3V
- Optoacoplador
- Cartão SD (SPI)
- Sensor roda fônica

## Firmware
**Características**:
- Arduino IDE (C++)
- POO + FreeRTOS
- Módulos:
  - Manager (controle)
  - CartaoSD (dados)
  - EspNow/WiFiCom
  - Filtro média móvel

## Resultados
- Resolução: 0,007 km/h
- Tempo amostragem @40km/h: ~4359µs
- Erro evitado: ≤7km/h

## Case
- Material: PLA
- Dimensões: 100×51×80mm
- Peso: 90g
- IP67 + O'rings

## Software
- Web: Node.js + Express
- DB: MongoDB
- Com: MQTT + ESP-NOW
- Visualização: Gráficos tempo real
- Export: PDF + dados

## Conclusão
- Requisitos atendidos  
- Custo: R$87,81  
- Próximo passo: Validação em pista
