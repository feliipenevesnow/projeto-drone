
# ![download-removebg-preview (2) (2)](https://github.com/feliipenevesnow/projeto-drone/assets/65624371/5d6c2cb3-1db7-4787-96c0-ec210fc42944) Projeto de Análise de Impacto da SDN na Comunicação de Dispositivos IoT em Nuvem!



Este repositório contém o projeto desenvolvido como parte do curso de Ciência da Computação no Instituto Federal Campus Presidente Epitácio - SP. O projeto tem como foco analisar o impacto da tecnologia SDN (Software Defined Network) na comunicação entre dispositivos IoT (Internet of Things) em ambientes de nuvem.

## Resumo

A Internet das Coisas (IoT) está cada vez mais presente em nosso cotidiano, conectando dispositivos à internet. Este projeto visa investigar se uma rede SDN pode influenciar a comunicação com dispositivos IoT em nuvem, especialmente analisando o fluxo de pacotes entre uma aplicação na nuvem e um motor brushless conectado a um módulo ESP32. Utilizaremos uma infraestrutura local, com um computador desktop e o Open vSwitch como roteador sem fio, permitindo o controle do motor como um serviço na nuvem.

## Objetivos

- Realizar uma revisão bibliográfica das tecnologias envolvidas: SDN, IoT, motor brushless, Adafruit IO, controlador POX, Open vSwitch, métricas de redes de computadores, Wireshark e ESP32.
- Configurar a infraestrutura de rede local com o Open vSwitch para o funcionamento do ESP32 e do motor brushless como um nó na rede SDN, além de configurar o computador desktop como roteador wireless convencional para comparação.
- Desenvolver uma aplicação utilizando a plataforma Adafruit IO para controlar remotamente a aceleração do motor brushless via Internet.
- Coletar dados de fluxo para análise de jitter, atraso e taxa de transmissão com o Wireshark e Iperf, comparando as comunicações em redes convencionais e SDN.

## Estrutura do Repositório

- `/Documentacao`: Contém documentos relevantes do projeto, como revisões bibliográficas, anotações, e manuais.
- `/Codigos`: Códigos-fonte utilizados nos experimentos e na aplicação desenvolvida.
- `/Resultados`: Armazena os resultados obtidos dos testes, incluindo análises de métricas, gráficos e relatórios.

## Referências

- ...

Este projeto está em andamento e busca contribuir para o entendimento do impacto da SDN na comunicação de dispositivos IoT em ambientes de nuvem. Todas as contribuições e sugestões são bem-vindas!
