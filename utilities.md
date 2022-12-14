## Useful Icons

β>βοΈ πβοΈ ππ ππ± ππ’ββοΈ π‘π πβ‘οΈ πππ₯β‘οΈ βοΈπ
βοΈπβοΈβ»οΈ
πππ¨βοΈπ’πππππππβ­οΈππ’ππΎπππβ οΈππ π―βοΈβοΈ

:hammer:
:department_store:
:gear:

## Change image size
<img src="images/bug.png" width="32"/><img src="images/waiting.gif" width="32">
[](images/bug.png) [](images/waiting.gif)

## references
* [Color Picker](https://www.webfx.com/web-design/color-picker/)
* [favorite icon website](https://www.webfx.com/tools/emoji-cheat-sheet/)
* [YouTube Google Classroom](https://www.youtube.com/watch?v=5yoKprcfHR8&t=1509s)

## Notations
ππ‘ **Knowlodge Base**
ππ **Conclusion**
ππ **Source Code**
βπ’ **Mistake:**
ππ **Reasong:**
βοΈπ **Solution:**

## Fast way to learn something new:
  1. DIY (do it yourself);
  2. learn from mistake;
  3. repeat;
  4. take good note for future review;
  5. teach someone else.

## ζ±θ―­ζΌι³ι΅ζ―ε£°ε·
η¬¬δΈε£°οΌι΄εΉ³οΌζεΉ³θ°οΌΒ―οΌοΌ
Δ (ΙΜ) Δ Δ« Ε Ε« Η Δ Δ Δͺ Ε Εͺ Η
η¬¬δΊε£°οΌι³εΉ³οΌζεθ°οΌΛοΌοΌ
Γ‘ (ΙΜ) Γ© Γ­ Γ³ ΓΊ Η Γ Γ Γ Γ Γ Η
η¬¬δΈε£°οΌδΈε£°οΌζδΈι³οΌΛοΌοΌ
Η (ΙΜ) Δ Η Η Η Η Η Δ Η Η Η Η
η¬¬εε£°οΌε»ε£°οΌζε»ι³οΌΛοΌοΌ
Γ  (ΙΜ) Γ¨ Γ¬ Γ² ΓΉ Η Γ Γ Γ Γ Γ Η
θ½»ε£°οΌδΈζ η¬¦ε·οΌ
a (Ι) e i o u ΓΌ A E I O U Γ

## math symbols
|operator | LaTex Symbols |
|---------|---------------|
Γ | times
Γ· | div
Β± | pm
Β° | degree
β | infty
Ο | phi
Ξ¦ | Phi
Ξ | Theta
ΞΈ | theta
Ξ© | Om
Ξ± | alpha
Ξ² | beta
Ξ³ | gamma
Ξ΄ | delta
ΞΌ | mu
Ο | pi
Ξ» | lambda
Ο | omega
β | Rightarrow
βΉ| Longrightarrow
β | Downarrow


## Sample File Structure:

```output
<project root>
    βββ πdoc/
    |    βββ mistakes.md 
    |    βββ python.md 
    βββ π¨homeworks/
    |       βββ filenameXX.md
    βββ π₯src/
    |       βββ string.py
    βββ πReadMe.md
```

## Sample Mermaid Graph Diagram

πInclude frequently used mermaid diagram features belowπ

```mermaid
graph TB

START((start))
END[end]
B[code block]
C(["fa:fa-align-left Round box<br>function(arguments)"])
IF{condition<br> block}
DB[("fa:fa-hammer database")]

START-->IF
IF--True-->DB-->END
IF--False-->B-->END

classDef start fill:green,stroke:#DE9E1F,stroke-width:2px,color:white;
classDef process fill:#F46624,stroke:#F46624,stroke-width:4px,color:white;
classDef js fill:yellow,stroke:black,stroke-width:2px;
classDef if fill:#EBCD6F,stroke:black,stroke-width:2px;
classDef db fill:#BEBDB7,stroke:black,stroke-width:2px;
classDef end1 fill:red,stroke:#DE9E1F,stroke-width:2px,color:white;

class START start
class B,D,E js
class IF if
class DB db
class END end1
```

## Simple Mermaid Relational Diagram

```mermaid
 erDiagram
    PROJECT ||--o{ TASK : contains
    PROJECT {
        int id
        string name
        date begineDate
        date endDate
    }
    TASK {
        int id
        string name
        date beginDate
        date endDate
    }
```

## Simple Mermaid Class Diagram

```mermaid
classDiagram
direction RL

class Occupation{
  Occupation: +getOccupation() String
}
<<interface>> Occupation

class Person{
  #name: String
  #ssn: String
  #age: int
  #gender: String
}
<<abstract>> Person

Occupation <|-- Person
Person <|-- Teacher
Person <|-- Doctor
Person <|-- Developer
```