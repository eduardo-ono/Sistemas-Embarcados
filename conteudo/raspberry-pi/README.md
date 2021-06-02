> #### Sistemas Embarcados > Conteúdo

# Raspberry Pi

Prof. Eduardo Ono

<br>

## Conceitos

> O __*Raspberry Pi*__ (RPi) é um SBC (_Single Board Computer_) desenvolvido no Reino Unido pela Fundação Raspberry Pi que se conecta a um monitor de computador ou TV e usa um teclado e um mouse padrão. Todo o hardware é integrado numa única placa.

![img](./img/raspberry-pi-4.webp)

<small>Fonte: https://www.raspberrypi.org/products/raspberry-pi-4-model-b/</small>

<br>

## Especificações Técnicas

* Ref.:

  * https://static.raspberrypi.org/files/product-briefs/Raspberry-Pi-4-Product-Brief.pdf

|||||
| --- | --- | --- | --- |
|               | Raspberry Pi 3 | [Raspberry Pi 3 B+](https://static.raspberrypi.org/files/product-briefs/200206+Raspberry+Pi+3+Model+B+plus+Product+Brief+PRINT&DIGITAL.pdf) | [Raspberry Pi 4](https://static.raspberrypi.org/files/product-briefs/Raspberry-Pi-4-Product-Brief.pdf) |
| SoC           | Broadcom BCM2837, Quad Core ARM Cortex-A53 (ARMv8) 64-bit @ 1.2GHz | Broadcom BCM2837B0, Cortex-A53 (ARMv8) 64-bit @ 1.4GHz | Broadcom BCM2711, Quad core Cortex-A72 (ARMv8) 64-bit @ 1.5GHz | 
| Mem. RAM      | 1GB LPDDR2 SDRAM | 1GB LPDDR2 SDRAM | 2GB, 4GB or 8GB LPDDR4-3200 SDRAM |
| Conectividade | BCM43438 wireless LAN <br>Bluetooth Low Energy (BLE) | 2.4GHz and 5GHz IEEE 802.11.b/g/n/ac wireless LAN, Bluetooth 4.2, BLE | 2.4 GHz and 5.0 GHz IEEE 802.11ac wireless, Bluetooth 5.0, BLE |
| Rede          | 100 Base Ethernet | Gigabit Ethernet over USB 2.0 (maximum throughput 300 Mbps) | Gigabit Ethernet
| USB           | 4x USB 2 ports | 4x USB 2.0 ports | 2x USB 3.0 ports; 2x USB 2.0 ports
| I/O           | 40-pin extended GPIO | Extended 40-pin GPIO header | Raspberry Pi standard 40 pin GPIO header (fully backwards compatible with previous boards) |
| Video out     | 1x Full size HDMI | 1x Full-size HDMI | 2x micro-HDMI ports (up to 4kp60 supported), 2-lane MIPI DSI display port
| Video in      | CSI camera port for connecting a Raspberry Pi camera <br> DSI display port for connecting a Raspberry Pi touchscreen display | CSI camera port for connecting a Raspberry Pi camera <br> DSI display port for connecting a Raspberry Pi touchscreen display | 2-lane MIPI CSI camera port
| Audio         | 4 Pole stereo output and composite video port | 4-pole stereo output and composite video port | 4-pole stereo audio and composite video port
| Multimedia    ||| H.265 (4kp60 decode), H.264 (1080p60 decode, 1080p30 encode), <br> OpenGL ES 3.1, Vulkan 1.0
| Armazenamento | Micro SD port (para S.O e dados) | Micro SD port (para S.O e dados)| Micro-SD card slot (para S.O. e dados)
| Alimentação   | 5V / 2.1A DC (micro USB) | 5V/2.5A DC (micro USB) | 5V / 3.0A DC via USB-C connector, 5V / 3.0A DC via GPIO header
| Temp. oper.   ||| 0 – 50 ºC ambiente
| Tensão lógica operação | 3,3 V |

<br>

## Sistemas Operacioanis Suportados

* Paspberry Pi OS (previamente denominado Raspbian), baseado em kernel Linux e na distribuição Debian. Utiliza o shell 

<br>
