---
Unidade: 1
---
# Logaritmos  

## Definição  
Operação inversa da [[Potenciação|potenciação]]. Responde à pergunta: *"A que expoente devo elevar a base \( b \) para obter \( x \)?"*  
$$\log_b x = y \quad \Leftrightarrow \quad b^y = x$$
> [!NOTE] Exemplo:  
> $$( \log_{10} 1000 = 3), \ pois \ ( 10^3 = 1000)$$  

---

## Bases Comuns  
- **Logaritmo natural $(\ln)$:** Base $(e) \ (e \approx 2,718)$  
- **Logaritmo decimal $(\log)$:** Base $\log_{10}$  

---

## Propriedades  
1. **Logaritmo do produto:**  
   $\log_b (a \times c) = \log_b a + \log_b c$  
   > [!EXAMPLE] Exemplo:  
   > $( \log_2 (8 \times 4) = \log_2 8 + \log_2 4 = 3 + 2 = 5 )$  

2. **Logaritmo da divisão:**  
   $\log_b \left(\frac{a}{c}\right) = \log_b a - \log_b c$  
   > [!EXAMPLE] Exemplo:  
   > $( \log_{10} \left(\frac{100}{10}\right) = \log_{10} 100 - \log_{10} 10 = 2 - 1 = 1 )$  

3. **Logaritmo da potência:**  
   $\log_b (a^n) = n \times \log_b a$  
   > [!EXAMPLE] Exemplo:  
   > $( \log_5 (25^3) = 3 \times \log_5 25 = 3 \times 2 = 6 )$  

4. **Mudança de base:**  
    $\log_b a = \frac{\log_k a}{\log_k b}$  
   > [!TIP] Aplicação:  
   > Calcular $( \log_2 7)$ com base 10: $( \frac{\log 7}{\log 2} \approx 2,8074 )$  

5. **Logaritmo de 1:**  
    $\log_b 1 = 0$  
   > [!NOTE] Exemplo:  
   > $( \ln 1 = 0)$  

---

## Relação com a [[Potenciação]] 
$b^{\log_b x} = x \quad \text{e} \quad \log_b (b^x) = x$  
> [!NOTE] Exemplo:  
> $( e^{\ln 5} = 5) \ e \ (\log_{10} (10^{-2}) = -2 )$  

---

## Aplicações  
- **Escala Richter:** Medição de terremotos (escala logarítmica).  
- **pH:** Medição da acidez $( \text{pH} = -\log[H^+] )$  
- **Decibéis:** Intensidade sonora.