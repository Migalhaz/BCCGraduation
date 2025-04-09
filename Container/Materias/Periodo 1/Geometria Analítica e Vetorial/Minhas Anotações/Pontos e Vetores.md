---
Unidade: 1
---
### Definições
- **Ponto:** Representa uma posição no espaço (2D ou 3D). Notação: $$P(x, y) \ ou \ P(x, y, z)$$  
- **Vetor:** Grandeza com **módulo**, **direção** e **sentido**. Representado por $$\vec{v} = (v_x, v_y) \ ou \ \vec{v} = (v_x, v_y, v_z)$$
  > [!NOTE] Exemplo:  
  > Vetor de $$A(1, 2) \ a \ B(4, 6): \vec{AB} = (4-1, \ 6-2) = (3, 4)$$  

---

## Módulo (Norma) de um Vetor  
Comprimento do vetor, calculado pela fórmula:  
$$
\|\vec{v}\| = \sqrt{v_x^2 + v_y^2} \quad \text{(2D)} \quad \text{ou} \quad \|\vec{v}\| = \sqrt{v_x^2 + v_y^2 + v_z^2} \quad \text{(3D)}
$$
> [!EXAMPLE] Exemplo:  
> $\vec{v} = (3, 4) \implies \|\vec{v}\| = \sqrt{3^2 + 4^2} = 5$.  

---

## Operações Básicas com Vetores  
### Soma e Subtração  
- **Soma:**  $\vec{u} + \vec{v} = (u_x + v_x, u_y + v_y)$  
- **Subtração:** $\vec{u} - \vec{v} = (u_x - v_x, u_y - v_y)$ 

  > [!NOTE] Exemplo:  
  > $\vec{u} = (2, 1), \ \vec{v} = (3, 4) \implies \vec{u} + \vec{v} = (5, 5)$  

### Multiplicação por Escalar  
$k \cdot \vec{v} = (k \cdot v_x, k \cdot v_y)$  

> [!EXAMPLE] Exemplo:  
> $2 \cdot (1, -3) = (2, -6)$  

---

## Produto Escalar  
### Definição  
Dados  $\vec{u} = (u_x, u_y) \ e \ \vec{v} = (v_x, v_y)$:  

$$\vec{u} \cdot \vec{v} = u_x \cdot v_x + u_y \cdot v_y$$

**Interpretação Geométrica:**  
$\vec{u} \cdot \vec{v} = \|\vec{u}\| \cdot \|\vec{v}\| \cdot \cos \theta$  
onde ($\theta$) é o ângulo entre os vetores.  

> [!NOTE] Exemplo:  
> $\vec{u} = (1, 2), \ \vec{v} = (3, 4) \implies \vec{u} \cdot \vec{v} = 1 \cdot 3 + 2 \cdot 4 = 11$  

### Aplicações  
- **Ângulo entre vetores:**  
  $\cos \theta = \frac{\vec{u} \cdot \vec{v}}{\|\vec{u}\| \cdot \|\vec{v}\|}$  
- **Verificar ortogonalidade:**  $\vec{u} \cdot \vec{v} = 0 \implies \theta = 90^\circ$  

---

## Propriedades dos Vetores  
1. **Comutatividade:** $\vec{u} + \vec{v} = \vec{v} + \vec{u}$  
2. **Associatividade:** $(\vec{u} + \vec{v}) + \vec{w} = \vec{u} + (\vec{v} + \vec{w})$  
3. **Distributividade:** $( k \cdot (\vec{u} + \vec{v}) = k \cdot \vec{u} + k \cdot \vec{v}$  
4. **Produto Escalar:** $\vec{u} \cdot \vec{v} = \vec{v} \cdot \vec{u}$  

---

## Trigonometria e Vetores  
### Projeção de Vetores  
A projeção de $\vec{u}$ sobre $\vec{v}$ é:  
$$
\text{proj}_{\vec{v}} \vec{u} = \left( \frac{\vec{u} \cdot \vec{v}}{\|\vec{v}\|^2} \right) \vec{v}
$$
> [!TIP] Aplicação:  
> Componente de uma força na direção de um plano inclinado.  

### Ângulo entre Vetores  
Usando o produto escalar:  

$$\theta = \arccos \left( \frac{\vec{u} \cdot \vec{v}}{\|\vec{u}\| \cdot \|\vec{v}\|} \right)$$  
> [!EXAMPLE] Exemplo:  
> $$\vec{u} = (1, 0) \ , \vec{v} = (0, 1) \implies \theta = 90^\circ$$  

---

## Aplicações  
- **Física:** Forças, velocidade, aceleração.  
- **Computação Gráfica:** Movimento de objetos 3D.  
- **Engenharia:** Cálculo de estruturas.  

![[vetores-no-plano.webp]] 

*(Representação gráfica de vetores)*  