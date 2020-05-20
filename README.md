# Добро пожаловать в увлекательную игру Puzzle!
В этой игре Вам необходимо расставлять необходимые плитки на доску так, чтобы они подходили друг другу. Если на каком-либо шаге вы не можете поставить выданную плитку, вы проигрываете. Плитки 4 типов выдаются в рандомном порядке.
Удачи!
***
## Архитектура
<a href="url"><img src=Arch.jpg align="right" height="400"></a>
-
+ Разные типы Плит - наследники абстрактоного типа Плитка, формируются *фабричным методом*. 
+ Доска представляет из себя *singleton* и хранит информацию о проходящей игре. Проверку на то, можно ли на нее поставить следующую плитку осуществляет методом *CoR*. 
+ Game Interface - игровой *фасад*, через него осуществляется взаимодействие с пользователем. На каждом шаге вызывает функцию turn, конструирующую ход: она выдаёт плитку, которую нужно поставить, проверяет, можно ли поставить на указанное Вами место, выдает значение True, если ваш ход удался и False, если плитку поставить уже не возможно и выводит состояние доски перед каждым ходом.
+ Принтеры (Lost и Win) - *стратегия*: поздравляют пользователя с выигранной игрой или уведомляют о поражении.
***
#### Команды для тестирования:
    mkdir build
    cd build
    cmake ..
    make
    ./ForTest

#### Команды для запуска игры:
    mkdir build
    cd build
    cmake ..
    make
    ./Puzzle
***
## Паттерны:
+ Порождающие
    + Factory Method
    + Singleton
+ Структурные
    + Facade
+ Поведенческие
    + Chain of Responsibility
    + Strategy
