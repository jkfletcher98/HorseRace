# HorseRace
Create a procedural horse race. There are 5 horses racing on a 15 space track. Each round they will each 'flip a coin' to see whether they advance one space. First horse to the end wins.

constant totalhorses gets 5
constant tracklength gets 15

## main
```
keepGoing is true
while keepGoing
  for horse in totalhorses
    advance
    print lane
    if horse isWinner
      keepGoing is false
      game ends
ask user for input to start each round
```

## advance
```
parameters(horse position, horse number)
generate random number(either 0 or 1)
add number to horse position
```
## printLane
```
parameters(horse position, horse number)
for each space in track
  if horse position is equal to index
    print horse number
  else
    print .
```
## isWinner
```
parameters(horse position, horse number)
result is false
if horse position is 15
  that horse wins
  result is true
```
