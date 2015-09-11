# Control de Rotor

## Resumen

Este repositorio contiene la adaptación de la electrónica de control empleada para el rotor de antena basado en el proyecto **[SatNOGS](https://satnogs.org/)**

## Autoría y Licencia

- Autor: **Dailos Rafael Díaz Lara** ( ddialar@gmail.com )
- Fecha: **11/09/2015**
- Versión: **1.0.0**
- Licencia: [![Creaive Commons 4.0 logo](img/cc40.png)](http://creativecommons.org/licenses/by-nc-sa/4.0/)

## Requisitos previos

- Tener instalado el entorno de desarrollo para Arduino.
- Tener instalado el software Eagle PCB 6.5.0+.

## Procedimiento

Este repositorio contiene la adaptación de la electrónica de control empleada para el rotor de antena basado en el proyecto **[SatNOGS](https://satnogs.org/)** ([Repositorio de origen](https://github.com/satnogs/satnogs-rotator-controller)).

Esta adaptación se ha realizado para utilizar una placa **Ardino Duemilanove** en lugar de la placa *Ardiono Pro Micro*
empleada originalmente.

Para poder llevar a cabo esta adaptación, además de reorganizar la electrónica en torno a los pines del Arduino a emplear,
ha sido necesario reconfigurar los pines dentro del código fuente que será cargado en el microcontrolador.

La organización de directorios de este repositorio es la siguiente:

### [arduino](arduino/)

Contiene el archivo de código fuente que debe cargarse en el microcontrolador.

Para que este script funcione, es necesario incorporar en nuestro entorno de desarrollo, una librería adicional
que no suele venir con la instalación estándar. Dicha librería es **AccelStepper.h** y puede ser localizada
en el siguiente [enlace](https://github.com/adafruit/AccelStepper).

Para concluir, hay que indicar que la única diferencia entre el script original y el empleado en este repositorio, reside en que se ha modificado la numeración de los pines empleados para el control de los motores paso a paso, así como para la detección de la posición HOME de los ejes de Elevación y Azimuth.

En el código fuente que contiene el directorio, se ha mantenido la definición original de pines (comentada para que no tenga efecto en el código), con el propósito que sirva de referencia en futuras investigaciones.

### [img](img/)

Contiene una imagen del conexionado de la placa PCB.

### [pcb](pcb/)

Contiene el proyecto de placa de circuito impreso, realizado con el software **Eagle 6.5.0**.

### [pdf](pdf/)

Contiene el esquema electrónico y el diagrama PCB listos para ser impresos.
