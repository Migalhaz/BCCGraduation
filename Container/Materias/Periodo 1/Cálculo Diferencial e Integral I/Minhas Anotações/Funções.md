---
Unidade: 1
---
# Funções
## O que são:
São relações ou regras que associam todos os elementos de um [[Teoria dos Conjuntos|conjunto]] a um único elemento de outro conjunto. Ou seja, todo elemento de um conjunto A deve estar associado a um único elemento de um conjunto B.

![[definicaodeumafuncao.webp]]

## Tipos de Funções
### Injetora (Injetiva)
Cada elemento de **B** é associado a **no máximo** um elemento de **A**.  
> [!NOTE] Exemplo:  
> $f: \mathbb{R} \to \mathbb{R} \ definida \ por \ f(x) = 2x$

### Sobrejetora (Sobrejetiva)
Todos os elementos de **B** são mapeados por **pelo menos** um elemento de **A**.  
> [!NOTE] Exemplo:  
> $f: \mathbb{R} \to \mathbb{R}^+ \ definida \ por \ f(x) = x^2$

### Bijetora (Bijetiva)
Função que é **injetora e sobrejetora** simultaneamente.  
> [!NOTE] Exemplo:  
> $f: \mathbb{Z} \to \mathbb{Z} \ \ definida \ por \ f(x) = x + 1$

---

## Funções Contínuas
### Definição
Uma função $f(x)$ é **contínua** em um ponto $( x = a )$ se:  
1. $f(a)$ está definido.  
2. $\lim_{x \to a} \ f(x)$ existe.  
3. $\lim_{x \to a} f(x) = f(a)$.  

Se a função é contínua em **todos os pontos** de seu domínio, diz-se que ela é contínua.

### Exemplos
- **Contínua:** $f(x) = x^2$ (não há "saltos" ou "buracos" no gráfico).  
- **Descontínua:** $f(x) = \frac{1}{x}$ em $x = 0$ (não está definida nesse ponto).  

> [!NOTE] Exemplo Gráfico:  
> ![[ExemploDeFuncaowebp.webp]]

### Propriedades
- **Soma/Produto:** Se $(f )$ e $(g)$ são contínuas, então $( f + g )$, $( f \times g )$ também são.  
- **Composição:** A composição de funções contínuas é contínua.  

> [!TIP] Aplicação:  
> Funções contínuas são essenciais em modelagem de fenômenos físicos, como movimento suave ou crescimento populacional.

---

## Notação e Representação
- **Forma geral:** $( f: A \to B)$ (função de $( A )$ em $( B )$).
- **Regra de saída:** $( f(x) = y)$, onde $( x \in A )$ e $( y \in B )$.

> [!TIP] Exemplo Prático: 
> Se $( A = \{1, 2, 3\})$ e $( B = \{a, b, c\}):  
> - Função válida: $( f(1) = a )$, $( f(2) = b )$,  $( f(3) = c )$.  
> - **Não é função:** $( f(1) = a )$ **e** $( f(1) = b )$ (dois valores para o mesmo elemento).