Author Sailee Phal
<!DOCTYPE html>
<html>
    <body>
        <p>
        <center><h1><b>Game Shop Documentation</b></h1></center>
        </p>
        <p>
        <center><h2>Overview</h2></center>
        This code represents a simple console-based game shop management system written in C++. 
        It allows users to view available games, make purchases, and manage their account information.
        </p>
        <h3>Features</h3>
        <p>
            <ul>
                <li> View available games and their details.</li><br>
                <li>Make purchases by adding products to the cart.</li> <br>
                <li>Display the total value of selected products.</li><br>
                <li>Display all purchased products.</li><br>
                <li>Store and retrieve customer information.</li><br>
                <li>Display customer details and exit message.</li><br>
            </ul>
        </p>
        <h4>Classes</h4>
        <h7>'stock'</h7>
        <p>
            <ul>
                <li>Manages the stock quantity for each game.</li><br>
                <li>Decreases the stock when a product is purchased.</li><br>
                <li>Provides a display of available stock for a given product code.</li><br>
            </ul>
        </p>
        <h7>'product'</h7>
        <p>
            <ul>
                <li>Inherits from stock.</li><br>
                <li>Manages product information such as name, code, and price.</li> <br>
                <li>Allows users to add products, display the total value, and display all products.</li><br>
            </ul>
        </p>
        <h7>'purchase'</h7>
        <p>
            <ul>
                <li>Inherits from stock and product.</li><br>
                <li>Displays available games for purchase.</li><br>
            </ul>
        </p>
        <h7>'customer'</h7>
        <p>
            <ul>
                <li>Manages customer information, including name, ID, phone number, and rating.</li><br>
                <li>Displays customer details and a farewell message.</li><br>
            </ul>
         </p>
         <h4>File Operations</h4>
         <p>
            <ul>
                <li> Utilizes file operations to display additional information about each game.</li><br>
                <li>Files are named after each game (e.g., "Snakes and Ladders.txt").</li><br>
                <li>Information includes the year created, target age group, and a brief description.</li><br>
            </ul>
         </p>
         <h3>Main Functionality</h3>
         <p>
            <ul>
                <li>View Games and Make Purchase</li><br>
                <li> Display available games.</li><br>
                <li>Allow the user to choose whether to make a purchase, view more details, or exit.</li><br>
                <li>Purchase Flow</li><br>
                <li>Allow the user to add products to the cart.</li><br>
                <li>Display total value and all purchased products.</li><br>
                <li>Repeat until the user chooses to exit.</li><br>
                <li>Customer Information</li><br>
                <li>Prompt the user to enter their name, ID, phone number, and satisfaction rating.</li><br>
                <li>Display customer information and a thank you message.</li><br>
            </ul>
         </p>
         <h3>How to Use</h3>
         <p>
            <ul>
                <li>Compile and run the program.</li><br>
                <li> Follow the on-screen instructions to view available games and make purchases.</li><br>
                <li>Enter customer information when prompted.</li><br>
                <li>Review customer details and exit the program.</li><br>
            </ul>
         </p>
         <h3>Additional Information</h3>
         <p>
            <ul>
                <li> Ensure that the necessary libraries are available for your C++ compiler (e.g., fstream, iostream, conio.h, iomanip, string).</li><br>
                <li> Review the code comments for additional details on each class and function.</li><br>
                <li>Feel free to extend or modify the code to meet specific requirements.</li><br>
            </ul>
         </p>
         <p><b>Note:</b> This documentation provides a high-level overview. For more detailed explanations, refer to the code comments and the logic implemented in each function.
        </p>
    </body>

</html>
