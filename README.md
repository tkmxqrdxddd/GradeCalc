# Grade Calculator Application

This project is a simple Qt-based application designed to calculate the final grade based on user inputted grades and weights. The application provides a graphical user interface (GUI) for users to input their grades and corresponding weights, and it calculates the weighted average to display the final grade.

## Features

- **User Interface**: The application uses Qt's `QMainWindow` to provide a clean and intuitive interface.
- **Grade Calculation**: Users can input multiple grades and their respective weights. The application ensures that the total weight equals 100% before calculating the final grade.
- **Error Handling**: The application checks for input errors, such as mismatched numbers of grades and weights or incorrect total weight, and provides feedback through message boxes.

## Files

- **main.cpp**: Contains the `main` function, which initializes the `QApplication` and displays the `MainWindow`.
- **mainwindow.h**: Declares the `MainWindow` class, including its constructor, destructor, and private slots.
- **mainwindow.cpp**: Implements the `MainWindow` class, including the `calculateGrade` function that performs the grade calculation.

## Usage

1. **Build the Project**: Use Qt Creator or a compatible build system to compile the project.
2. **Run the Application**: Launch the application to open the main window.
3. **Input Grades and Weights**: Enter grades and weights in the provided input fields. Ensure that the number of grades matches the number of weights.
4. **Calculate Final Grade**: Click the "Calculate" button to compute the final grade. The result will be displayed in the result label.

## Dependencies

- **Qt Framework**: Ensure that the Qt framework is installed on your system. This project uses `QApplication`, `QMainWindow`, `QPushButton`, `QLineEdit`, and `QMessageBox` from the Qt library.

## Error Handling

- **Mismatched Input**: If the number of grades does not match the number of weights, a warning message will be displayed.
- **Incorrect Total Weight**: If the total weight does not equal 100%, a warning message will be displayed.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.

## Contact

For any questions or feedback, please contact the project maintainer at [tkmxqrd@gmail.com].