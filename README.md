# PWM-RP2040

### Controle de servomotor por PWM.
Com o emprego do módulo PWM (do inglês, Pulse Width Modulation),
presente no microcontrolador RP2040, foi criado um sistema com a
ferramenta Pico SDK para simular o controle do ângulo de um
servomotor. Esta simulação contemplará o motor micro servo
padrão, presente no simulador de eletrônica online Wokwi.

### Requisitos

1) Considerando a GPIO 22, defina a sua frequência de PWM para,
aproximadamente, 50Hz – período de 20ms.

2) Defina o ciclo ativo do módulo PWM para 2.400μs
(microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,12%. isto
ajustará a flange (braço) do servomotor para a posição de,
aproximadamente, 180 graus. Aguarde 05 segundos nesta
posição.

3) Defina o ciclo ativo do módulo PWM para 1.470μs
(microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,0735%.
Isto ajustará a flange do servomotor para a posição de,
aproximadamente, 90 graus. Aguarde 05 segundos nesta
posição.

4) Defina o ciclo ativo do módulo PWM para 500μs
(microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,025%.
Isto ajustará a flange do servomotor para a posição de,
aproximadamente, 0 graus. Aguarde 05 segundos nesta
posição.

5) Após a realização das proposições anteriores, crie uma rotina
para movimentação periódica do braço do servomotor entre os
ângulos de 0 e 180 graus. Obs.: a movimentação da flange deve
ser suave, recomenda-se o incremento de ciclo ativo de ±5μs,
com um atraso de ajuste de 10ms.

6) Com o emprego da Ferramenta Educacional BitDogLab, faça
um experimento com o código deste exercício utilizando o LED
RGB – GPIO 12.

[Demostração](https://drive.google.com/file/d/1iUn1vuMX_poKkQptvgAHTSsKn1VP0kHM/view?usp=drive_link)
