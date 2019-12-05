# Dev_Challenge_2.0


##Aim of the game
Ping marbles at the coloured cubes scattered around the world. 
Green = +1 point.
Blue = +5 points.
Red = -2 points.
You have 60 seconds to score as many points as you can.

##Controls
Left click on the marble to begin charging. 
Drag to increase power and aim.
Release to fire.
Angle can be adjusted (1-70 degrees) using the slider on the left.
The marble resets upon pressing the “Reset Marble” button or 5 seconds after being fired.

##UI Elements
###HUD
Top Right - Round timer: Counts down from 60.
Bottom Right - Power bar: Shows the power that will be applied to marble.
Bottom Left(Right) - Reset Marble Button: Resets the marble preemptively.
Bottom Left(Left) - Angle slider & text: Adjusts the angle (1-70 degrees)the marble is fired from the horizontal(higher number to go higher).
Top Left - Score text: Shows the current score.

###End Screen
Top - Final score text: shows the final score you achieved.
Bottom - Restart button: Restarts the level.

##Classes
###Marble
The main actor, handles collision of the ball and the marble's states to see if it can be be fired. 
Increases player score based on collided object via the RoundController.

###MarbleSpawnController
Handles spawning and destroying the marble (either on button press or after timer). 
Supplies the current marble with a reference to the RoundController so score can be updated.
Supplies ForceController with a reference to current marble so foce can be applied to it.

###MarbleForceController
Applies force to the marble based on distance and direction of mouse from marble position.

###RoundController
Stores player's score, as well as a timer for the current round.