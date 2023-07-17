Certainly! Here's the revised response with Markdown formatting:

# Toggle Button Behavior in Arduino Uno

When working with the Arduino Uno board, you may encounter an issue while using a toggle button to implement a simple car indicator or a switch in a flight simulator.

## Issue
By default, when the toggle button is pressed in any direction, it remains in the pressed state and continues to signal a high value. However, this behavior is not desired. The desired behavior is that when the button is toggled, it should send a high signal once and then stop sending high signals until the button is toggled back to the neutral position. Only when the button is toggled back to neutral should it send another high signal.

## Example Scenario
Let's consider a scenario where you have a Single-Pole Double-Throw (SPDT) switch. You want to use this switch to implement an indicator in your simulator. For instance, pressing the 'k' key turns on the left indicator, and pressing it again turns it off. Similarly, pressing the 'L' key turns on the right indicator, and pressing it again turns it off.

Unfortunately, directly implementing this functionality using UnoJoy and a toggle switch is not possible because once you toggle the switch in one direction, the indicator will turn on and remain on even after toggling it back to the neutral position.

## Solution
Use the custom function above to handle the state for whichever button you would like to simulate the behavior for.
