Directions: write 3 functions
  
  is_balanced( some_string ) that accepts a string and checks to see if all of the ( [ { are balanced with closing ) ] }. if you use a stack, you can add an opening character 
    when it is found, when a closing character is found, it should match the opening character on the top of the stack, if not, it isn't balancedalso check for any remaining 
    opening characters once the string has been read to the end

  convert_to_binary( some_int ) - convert the integer to a binary string using a stack taking the integer % 2 will give you the value of the 2^0 bit, then if you divide the 
    string by 2 with integer division you can repeat the process until you reach 0, then take all the 0s and 1s from the stack and return it as a string

  write a function getTimeToStart that simulates how many seconds it takes to start moving forward at a red light.  Accept an argument for the number of cars in front of you
    at the light.  Add that number of cars to a queue, each with a random delay of 1-3 seconds as their reaction time. Then start removing 'cars' from the queue and totaling 
    their reaction delay to count how long it will take until you can start moving forward as the Xth car in line at the light.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Personal Notes:
  I included a helper function for time delay not requested in the direction, but makes code look cleaner for me.
