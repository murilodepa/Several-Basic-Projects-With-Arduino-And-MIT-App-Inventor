# Projeto com Arduino e MIT App Inventor

## Arduino e MIT App Inventor
* O projeto principal está localizado na pasta **"Projeto_de_Circuitos_El_tricos"**, projeto que engloba diversas funcionalidades, podendo estar **verificando a temperatura do ambiente, e acionando um buzzer (barulho)**, se passar de uma temperatura determinada, **ligando lâmpada conforme a taxa de claridade do ambiente, comportando igual aquelas luz presente no poste com um sensor**, podendo também, **acionar diversos Leds apertando determinado botão do controle remoto** e **tem uma tela no aplicativo com botões de 1 a 9 e de A a F, que conforme selecionado aparece a opção selecionada no display de 7 segmentos**. 
* Foram realizados outros diversos projetos com a finalidade de testar o funcionamento do código, de cada componente e como se comportaria e seria feito a comunicação por bluetooth com o MIT App Inventor separado, para só depois estar integrando todos eles em um só e criando um aplicativo único para todos eles e concluindo o projeto. Esse projeto abrangeu diversos componentes elétricos e foi possível estar familiarizando com o funcionamento desses componentes e a automatização em si, podendo aprimorando os meus conhecimentos, e também, fornecendo uma visão de como os processos industriais e sensores similares utilizados se comportam, como se estivesse realizando "protótipos" em alguns casos.

## Componentes Eletrônicos Utilizados
* Arduino Mega 2560 R3
* Módulo Bluetooth RS232 HC-05
* Sensor Foto resistor LDR de 5mm
* Sensor Temperatura LM35DZ
* Display de 7 segmentos com 1 digito (Catodo Comum)
* Buzzer Ativo 5v
* Leds Flash 5mm RGB Automático Difuso Efeito
* Lâmpada Led 7w Bulbo Bivolt E27
* Controle Remoto IR e Receptor Universal Infravermelho VS1838B 38Khz
* Módulo Relé 1 Canal 5v

## Descrição dos Projetos
* O primeiro, projeto do repositório é o "Configurar_Bluettoth", utilizado para realizar testes do funcionamento do módulo bluetooth e configuração de nome e senha alterar configurações padrão.
* O segundo, é o "LDR", para aprender como funciona e utilizar o LDR.
* O terceiro, é o "Programacao_LM35", aprendendo o funcionamento e utilização do componente LM35. 
* O quarto, é o "Projeto_Display/display", projeto realizado para aprender o funcionamento do display de 7 segmentos.
* O quinto, é o "Ligar_Leds_ControleIRem", realizado esse projeto para aprender utilizar o Controle Remoto IR e Receptor Universal Infravermelho VS1838B 38Khz, e realizar a ligação de cada Led Flash 5mm RGB Automático Difuso Efeito através de cada botão do controle escolhido para acionar determinada saída do Arduino.
* O sexto, é o "Projeto_LDR", projeto no qual foi realizado para aprender estar utilizando o LDR e realizando testes de comunicação de como poderia estar se comunicando com o aplicativo, através do bluetooth.
* O sétimo, é o "Projeto_Lamapada", utilizando o Módulo Relé 1 Canal 5v, foi possível estar ligando a lâmpada através da resistência que era fornecida da saída do LDR, os dados eram tratados no Arduino e encaminhando para o aplicativo no qual fazia verificações necessárias para o funcionamento.
* O oitavo, é "Projeto_Temperatura", após todos os testes foi finalizado o projeto sem nenhum erro e finalizado o aplicativo só para ler a temperatura e acionar o buzzer se necessário.
* O nono, é o "Projeto_de_Circuitos_El_tricos", projeto final com todas as funcionalidades e componentes integrados.
* O décimo, é "Projeto_display_IRRemote", após todos os testes foi finalizado o projeto sem nenhum erro e podendo observar o funcionamento dos leds, conforme pressionado algum botão do controle, sem ter a necessidade de um aplicativo e nem a comunicação bluettoth, como se fosse o controle remoto de um aparelho eletrônico.
* O décimo primeiro, é "arduino_temp", primeiro projeto que foi feito junto com o terceiro, sendo realizado testes de como capturar a temperatura através de um LM35 e como estar verificando na tela do celular, através da interface do MIT App Inventor, no qual foi construído um aplicativo pequeno só para isso e utilizando o Módulo Bluetooth para realiza mento da comunicação. E também foi preciso estar convertendo o valor de saída do sensor para a temperatura em Celsius.
* o décimo segundo, é o "projeto", realizando alguns testes antes e prevenindo possíveis erros.
* o décimo terceiro, é o "projeto_final", realizando uma simulação de um aplicativo e realizando alguns testes e vendo como iria ficar o projeto principal.
* E o décimo quarto, "projeto_lampada", após todos os testes foi finalizado o projeto sem nenhum erro e podendo observar o funcionamento da lâmpada conforme deixava o LDR num ambiente "claro" ou "escuro".
* E por fim, "Projeto_Final_Eletrica.aia", e a versão final do aplicativo realizado no MIT App Inventor, integrado com todas as funcionalidades. 

 ## Pré-requisitos 
 
### Sistema Operacional
* Foi utilizado o Windows 10, para realizar a programação do Arduino e confecção do aplicativo.
* Android.

### Software
* Foi utilizado o próprio software Arduino.
* <a> [Arduino: Necessário para desenvolvimento do projeto](https://www.arduino.cc/en/Main/Software)

   * **Observação:** Para desenvolver este projeto, precisa de conhecimentos básicos de Arduino, eletrônica básica, linguagem de programação C++.

## Guia de instalação e funcionamento
* Para executar o projeto, precisa primeiramente pesquisar sobre os componentes e realizar as suas devidas ligações, no código pode estar vendo comentando cada "saída" utilizada do Arduino para determinadas ligações, abaixo estará disponível alguns tutorias, cujo classifico importante para a realização do projeto.
* Para executar o aplicativo, necessita de um sistema operacional Android, e o aplicativo logo na tela inicial já precisa conectar com o módulo bluetooth, pois o aplicativo não funciona se não estiver comunicado com o módulo, podendo considerar totalmente dependente, não sendo possível ver as outras telas e nem estar manuseando se não tiver conectado, abaixo também estarei disponibilizando tutoriais que me ajudaram a realizar essa comunicação e confeccionar o aplicativo no MIT App inventor.

### Tutoriais básicos para ajudar na realização do projeto: 
* <a> [Como acender e apagar uma lâmpada no Arduino Uno](https://www.tecdicas.com/46/como-acender-e-apagar-uma-lampada-no-arduino-uno)
* <a> [Controle de luz com LDR e Arduino](https://www.arduinoecia.com.br/controle-de-luz-com-ldr-e-arduino/)
* <a> [Guia completo do Controle Remoto IR + Receptor IR para Arduino](https://blog.eletrogate.com/guia-completo-do-controle-remoto-ir-receptor-ir-para-arduino/)
* <a> [Display de 7 segmentos](http://projetosarduino321.blogspot.com/2015/02/display-de-7-segmentos.html)
* <a> [Como usar o Sensor de Temperatura LM35 com Arduino](https://www.arduinoecia.com.br/sensor-de-temperatura-lm35-com-arduino/)
* <a> [Vídeo aula - Integração de Arduino, Bluetooth, Android com AppInventor](https://www.youtube.com/watch?v=blvkJBAcGY0)

## Desenvolvimento
* Git clone https://github.com/murilodepa/Projeto-com-Arduino-e-MIT-App-Inventor
* Primeiramente é necessário realizar a montagem do circuito eletrônico com as específicas portas de saída do Arduino em cada determinado componente eletrônico utilizado, deixando o módulo bluetooth acionado para a comunicação.
* Após instalar o software Arduino, execute-o, selecione a opção arquivo, e depois abrir projeto.
* Compile e execute ele para a placa Arduino que estiver utilizando na montagem do projeto.
* Selecione o diretório que salvou o download, a pasta "Projeto_de_Circuitos_El_tricos", e por fim o arquivo com terminação *.ino*.
* No repositório é possível encontrar o arquivo .aia do MIT, instale em um dispositivo, e conecta com o módulo bluetooth, aparecendo a tela inicial do aplicativo e uma mensagem se tudo ocorrer como o esperado.
* E por fim, só utilizar o aplicativo e trocar de telas para verificar uma das 4 funcionalidades.

## Contribuições
* Contribuições e possíveis melhorias no meu ponto de vista são sempre bem-vindas.
