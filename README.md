# Divide and Conquer Algorithms 🚀
Description:Divide and Conquer Algorithms is a C++ console application developed with Qt Creator to demonstrate efficient problem-solving using the divide-and-conquer paradigm. This project includes implementations of Fast Exponentiation and Peak Element Finding algorithms, showcasing their logarithmic time complexity. Users can input values to compute large exponents quickly and find peak elements in an array, with clear output and time complexity analysis using the Master Theorem. 🧠
Features:  

Fast Exponentiation ⚡: Computes base^exponent efficiently using recursive divide-and-conquer (O(log n)).  
Peak Element Finding 📈: Identifies a peak element in an array (an element not smaller than its neighbors) in O(log n) time.  
User Input ⌨️: Accepts base/exponent for exponentiation and array elements for peak finding.  
Time Complexity Analysis 📊: Includes Master Theorem analysis in code comments for both algorithms (Case 2: O(log n)).

Technologies Used:  

C++ 💻: Core language for implementing algorithms and handling I/O.  
Qt Creator 🛠️: Used as the IDE for developing and testing the application.  
Standard Libraries: Utilizes <iostream> for I/O and <vector> for dynamic arrays.

How It Works:  

Fast Exponentiation: Recursively divides the exponent by 2, reducing the problem size (e.g., base^n = (base^(n/2))^2 for even n).  
Peak Element Finding: Uses binary search to find a peak by comparing middle elements with neighbors, recursively narrowing to the half with a potential peak.  
Both algorithms achieve O(log n) time complexity, as analyzed via the Master Theorem (T(n) = T(n/2) + O(1), Case 2).  
The program prompts users for input and displays results in the console.

Usage:  

Run the program and enter a base and exponent for fast exponentiation.  
Input the size and elements of an array for peak element finding.  
View the results: exponentiation output and the peak element with its index.

Dependencies:  

C++11 or later 📦  
Standard C++ libraries (<iostream>, <vector>)

File Structure:  

main.cpp: Contains implementations of fast exponentiation and peak element finding, along with the main function for user interaction.

Future Improvements:  

Add more divide-and-conquer algorithms (e.g., merge sort, closest pair) 🔢  
Include a graphical interface using Qt for interactive input/output 🎨  
Support file-based input for large arrays 📝  
Visualize algorithm steps for educational purposes 📉

License:MIT License  
Contributing:Contributions are welcome! 🙌 Please submit a pull request or open an issue to discuss improvements or bugs.
