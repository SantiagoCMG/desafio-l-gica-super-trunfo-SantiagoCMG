# Comparador de Países — Super Trunfo (C)

Este projeto é um programa em **linguagem C** que compara dois países
(Brasil e Portugal) em diferentes atributos, inspirado no jogo **Super Trunfo**.

O usuário pode escolher qual atributo deseja comparar e o programa
mostra os valores de cada país e indica o vencedor.

---

## 📌 Funcionalidades

- Comparar dois países:
  - População (em milhões)
  - Área territorial (mil km²)
  - PIB (trilhões de USD)
  - Pontos turísticos (estimativa)
- Menu interativo
- Possibilidade de repetir comparações
- Opção para sair do programa

---

## 🧱 Estrutura dos Dados

Os países são representados por uma `struct` chamada `Pais`, contendo:

- Nome do país
- Código
- População
- Área
- PIB
- Pontos turísticos

---

## ▶️ Como executar o programa

### 🔹 Opção 1 — Executar pelo CLion (recomendado)

1. Abra o projeto no **CLion**
2. Aguarde o carregamento do **CMake**
3. Clique no botão **Run (▶)**
4. O CLion irá compilar e executar automaticamente

> ⚠️ No CLion **não é necessário usar gcc manualmente**

---

### 🔹 Opção 2 — Compilar pelo CMD (Windows)

#### Requisitos
- Ter o **GCC (MinGW)** instalado e configurado no PATH

Verifique com:
```cmd
gcc --version
