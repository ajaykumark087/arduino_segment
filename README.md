🔢 Arduino 7-Segment Display Counter
This project demonstrates how to display numbers from 0 to 9 on a common cathode 7-segment display using an Arduino. Each digit is displayed for 500 milliseconds in a continuous loop.

🔧 Features :

  Displays digits from 0 to 9 sequentially
  
  Uses simple digitalWrite() logic

  Beginner-friendly project for learning 7-segment displays

  Pin mapping for individual segments (A–G)

📌 Hardware Required :
   Arduino UNO (or compatible board)

   1x Common Cathode 7-Segment Display

   7x 220Ω Resistors (optional but recommended)

   Jumper wires

   Breadboard

🔌 Pin Configuration :
             Segment	Arduino Pin
                       A	D6
                       B	D5
                       C	D4
                       D	D3
                       E	D2
                       F	D1
                       G	D0

  Connect the common cathode pins (COM) of the display to GND.

🖥️ Code Overview : 
        The segment patterns for each digit are stored in arrays and accessed in sequence using a loop:

  cpp
  
  int num0[] = {1, 1, 1, 1, 1, 1, 0}; // pattern to display 0
  
  const int* DATA[] = { num0, num1, ..., num9 }; // lookup table
  
   Inside the loop(), each number is shown for 500 milliseconds using digitalWrite().

📷 Circuit Diagram :
     Upload an image like schematic.png or wiring_diagram.png in your GitHub repo and reference it here:

You can use tools like:

  Fritzing

  Tinkercad Circuits

  EasyEDA

  Proteus

▶️ How to Run : 

  Clone or download this repo

  Open the .ino file in Arduino IDE

  Connect your circuit as per the diagram

  Upload the code to your Arduino

  Watch digits 0–9 display on the 7-segment

📜 License :
          This project is released under the MIT License – feel free to use and modify it for learning or projects.

