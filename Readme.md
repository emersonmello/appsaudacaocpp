# Exemplo de aplicação C++ que faz uso do CMake para baixar dependências

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![Ubuntu](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/linux.yml/badge.svg)](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/linux.yml)
[![Windows](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/windows.yml/badge.svg)](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/windows.yml)
[![macOS](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/macos.yml/badge.svg)](https://github.com/emersonmello/appsaudacaocpp/actions/workflows/macos.yml)

Neste repositório tem-se um pequeno exemplo sobre como organizar o projeto de uma aplicativo C++ usando o CMake e para baixar dependência de bibliotecas que estejam em outro repositório GitHub ou em um outro diretório no sistema de arquivos.

## Ferramentas necessárias para compilação

- [Git](https://git-scm.com/downloads)
- [CMake](https://cmake.org) 3.14 ou superior
- Compilador C++11 (i.e. g++)


## Como gerar o sistema de construção (i.e. *Makefile*)

Baixe o código presente neste repositório:
```bash
git clone https://github.com/emersonmello/appsaudacaocpp.git
cd appsaudacaocpp

cmake -S . -B build
``` 

## Como compilar a biblioteca e a aplicação exemplo

Para construir o projeto:
```bash
cmake --build build
```

O binário resultante `appsaudacao` ficará disponível dentro do diretório `build`. Para executar:

```bash
./build/appsaudacao
```