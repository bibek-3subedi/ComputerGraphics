
# Computer Graphics 

This repository contains my implementations of various computer graphics algorithms, developed as part of the Computer Graphics course. These programs have been configured to run in **Visual Studio Code** using the **WinBGIm** library.

## Setup and Requirements

* **Environment:** Visual Studio Code (VS Code)
* **Compiler:** MinGW (GCC)
* **Graphics Library:** WinBGIm (`graphics.h`)
* **Operating System:** Windows

## Laboratory Experiments

### [lab01] Digital Differential Analyzer (DDA) Algorithm

The DDA algorithm is an incremental scan conversion method. It performs calculations at each step by using the results from the preceding step, taking unit steps along the coordinate of greatest change to plot a straight line between two points.

### [lab02] Bresenham's Line Drawing Algorithm

An efficient line-generating algorithm that uses only integer addition, subtraction, and multiplication. It avoids expensive floating-point calculations by using a decision parameter to determine the closest pixel to the actual line path.

### [lab03] Midpoint Circle Generation Algorithm

This algorithm utilizes the 8-way symmetry of a circle. By calculating the pixel positions for only one octant (from $0^\circ$ to $45^\circ$), the remaining points are automatically determined by symmetry, significantly reducing computation time.

### [lab04] Ellipse Generation Algorithm

Following a similar logic to the circle algorithm, this implementation uses 4-way symmetry. The curve is divided into two regions based on the slope, and midpoint decision parameters are used to select the best pixel coordinates for each region.

### [lab5] Two-Dimensional Transformations

A collection of programs to manipulate 2D objects through geometric transformations, including:

* **Translation:** Shifting an object to a new location.
* **Scaling:** Changing the size of an object.
* **Rotation:** Turning an object around a specific pivot point.
* **Reflection:** Creating a mirror image of an object.
* **Shearing:** Distorting the shape of an object along an axis.

### [lab6] Creating Two-Dimensional Objects

This lab focuses on the creative application of basic primitives. It involves using functions like `line()`, `rectangle()`, `circle()`, and `ellipse()` to construct complex 2D figures such as houses, vehicles, or characters.

## How to Run

1. Ensure **MinGW** is installed and added to your system environment variables.
2. Configure your VS Code `tasks.json` or `c_cpp_properties.json` to include the `graphics.h` and `winbgim.h` headers.
3. Link the necessary libraries during compilation:
```bash
-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

```

4. Run the code through the VS Code terminal or a configured task runner.

