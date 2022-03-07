# Test plan and output

 
| Test case number  |        Condition        |     Expected  Output       |    Actual Output         |       Status   |       
|-------------------|-------------------------|----------------------------|--------------------------|----------------|
|    1              |    Push button is off   |Niether LED nor  motors     |  Niether LED nor motors  |  Implemented   |  
|                   |                         |should turn ON              | should turn ON           |                |

|    2              | Push button is on       |   Niether LED nor  motors  |  Niether LED nor motors  | Implemented    |
|                   |     should turn ON      |    should turn ON          |   should turn ON         |                |      |                   |                         |                            |                          |                |
|    3              | Push button is off      | Niether LED nor  motors    |  Niether LED nor motors  |  Implemented   |
|                   | Potentiometers read     |should turn ON              |should turn ON            |                |
|                   |  less than 250          |                            |                          |                |
|    4              |     Push button is ON   |      LED and   1 motor     | LED and 1 motor          |  Implemented   |
|                   | Potentiometer reads     |  should turn ON            |                          |                | 
|                   |    more than 250 and    |                            |   should turn ON         |                |        |                   |   less    than  500     |                            |                          |                |
|                   | Push button is ON       |   LED and   2 motors       |  LED and 2 motors        |  Implemented   |
|    5              |   Potentiometer reads   |                            |   should turn ON         |                |
|                   |     more than 500 and   |    should turn ON          |                          |                |   |    
|                   |      less    than  750  |                            |                          |                |
|                   | Push button is ON        | LED and   3 motors        |  LED and 3 motors        |  Implemented   |
|    6              | Potentiometer reads      |                           |                          |                |
|                   | more than 750 and        |   should turn ON          |  should turn ON          |                |         |
|                   |  less    than  1000      |                           |                          |                |
 
