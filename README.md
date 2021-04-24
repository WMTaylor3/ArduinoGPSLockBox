# Arduino Timed GPS Lockbox

##### TODOs/Gripes
* Sort out "Backspace is read as an input character" issue when configuring via terminal window (Serial).

##### Validated and working
* Lock/Unlock values for the slider mechanisim.
* Lock() method.
* Override of lock via 10 digit code.
* Configuration of game based on single point via serial input.
* Delay time prior to game start.
* Obtaining GPS fix once game has started.
* Distance to location (still not totally accurate. +/- 15-20 meters).
* Delay between arrival at location and window opening.
* Promting for both keys to be inserted at unlock location.
* Window permitting unlock for a certain time.
* Unlocking at final destination.
* Unit locks after cycling key at end of setup routine.
* Calibration of RTC from GPS.

##### Still need to test
* Multi-point game.
* Adding time via extend time method while in intermediary window.
* Adding time via extend time method while in final unlock window.
* Adding time via extend time method before game start.
* Adding time via extend time method after window has expired (should bring you back into the window).
* Starting a game in a different week and month than currently in.
* Adding time to multi-point game and verifying that all times are boosted.

##### Noted as not functioning correctly
* Adding time via extend time method. Doesn't seem to extend window.


2020-06-06T00:35:00

-35.3880590

+174.3436400

2020-06-06T00:45:00
