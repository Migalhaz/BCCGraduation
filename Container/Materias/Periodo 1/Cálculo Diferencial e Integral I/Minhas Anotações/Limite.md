---
Unidade: 1
---
# Limites  

## Conceito Intuitivo  
O limite de uma função descreve o comportamento dela quando a variável se aproxima de um valor específico, **sem necessariamente atingi-lo**.  

> [!NOTE] Exemplo:  
> Para $f(x) = \frac{x^2 - 1}{x - 1}$, quando $( x \to 1 )$, o limite é **2**, mesmo que $f(1)$ seja indefinido.  

---

## Definição Formal $(ε-δ)$  
Dizemos que $( \lim_{x \to a} f(x) = L )$ se:  
$$\forall \varepsilon > 0, \quad \exists \delta > 0 \quad \text{ tal que } \quad 0 < |x - a| < \delta \implies |f(x) - L| < \varepsilon$$ 
**Tradução:** Para qualquer margem de erro $(\varepsilon)$, existe um intervalo $( \delta )$ em torno de $(a)$ onde $f(x)$ está a uma distância $(\varepsilon) \ de \ (L)$  

---

## Propriedades dos Limites  
1. **Soma/Subtração:**  
$$\lim_{x \to a} [f(x) \pm g(x)] = \lim_{x \to a} f(x) \pm \lim_{x \to a} g(x)$$  

2. **Produto:**  
$$\lim_{x \to a} [f(x) \times g(x)] = \lim_{x \to a} f(x) \times \lim_{x \to a} g(x)$$  

3. **Quociente:**  
$$\lim_{x \to a} \frac{f(x)}{g(x)} = \frac{\lim_{x \to a} f(x)}{\lim_{x \to a} g(x)} \quad (\text{se } \lim g(x) \neq 0)$$  

4. **Potência:**  
$$\lim_{x \to a} [f(x)]^n = \left[ \lim_{x \to a} f(x) \right]^n$$  
> [!tip] Exemplo Prático:  
> Calcule  $$\lim_{x \to 2} (3x + 1)  
> = 3 \times \lim_{x \to 2} x + \lim_{x \to 2} 1 = 3 \times 2 + 1 = 7$$  

---

## Limites Laterais  
- **Limite à direita $( x \to a^+ )$:** Aproximação por valores **maiores** que $(a)$.  
- **Limite à esquerda $( x \to a^- )$:** Aproximação por valores **menores** que $(a)$.  

> [!NOTE] Exemplo:  
> Para $$f(x) = \begin{cases} x + 1 & \text{se } x < 0 \\ x^2 & \text{se } x \geq 0 \end{cases}$$  
> - $( \lim_{x \to 0^-} f(x) = 1)$  
> - $( \lim_{x \to 0^+} f(x) = 0)$  
> **Conclusão:** O limite não existe em $( x = 0 )$  

---

## Limites no Infinito  
Descrevem o comportamento de $f(x)$ quando $( x \to \infty )$ ou $( x \to -\infty )$.  

> [!NOTE] Exemplo:  
> $$( \lim_{x \to \infty} \frac{1}{x} = 0)$$  

---

## Indeterminações  
Formas que exigem manipulação algébrica ou regras especiais:  
- $(\frac{0}{0})$, $( \frac{\infty}{\infty} )$, $( 0 \times \infty)$, $(\infty - \infty)$, etc.  

### Estratégias para Resolver:  
1. **Fatoração:**  
   $\lim_{x \to 1} \frac{x^2 - 1}{x - 1} = \lim_{x \to 1} (x + 1) = 2$

2. **Multiplicação pelo conjugado:**  
   $\lim_{x \to 0} \frac{\sqrt{x + 1} - 1}{x} = \lim_{x \to 0} \frac{1}{\sqrt{x + 1} + 1} = \frac{1}{2}$  

3. **Regra de L’Hospital:**  
   Para $( \frac{0}{0})$ ou $( \frac{\infty}{\infty})$, derive numerador e denominador:  
   $\lim_{x \to 0} \frac{\sin x}{x} = \lim_{x \to 0} \frac{\cos x}{1} = 1$  

---
## Pontos Importantes  
- **Continuidade:** Se $\lim_{x \to a} f(x) = f(a)$, a função é contínua em $(a)$.  
- **Assíntotas:**  
  - **Vertical:** $(x=a)$ se $(\lim_{x \to a} f(x) = \pm \infty)$.  
  - **Horizontal:** $( y = L )$ se $( \lim_{x \to \pm \infty} f(x) = L)$.  

---
## Aplicações  
- **Cálculo de derivadas:** $f'(a) = \lim_{h \to 0} \frac{f(a + h) - f(a)}{h}$.  
- **Análise de gráficos:** Comportamento assintótico e descontinuidades.