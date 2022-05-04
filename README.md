<div align="center">

# Vector Utilities (Vutil)
Vutil is a header-only library that makes it easier to interact and work with C++ Vectors. Currently work-in-progress — don't expect much.

</div>

# Features

* **Printing 2D & 1D Vectors in a human-readable format**

  * Usage:
  
```cpp
  /* A 2D int Vector */
  std::vector<std::vector<int>> vector2D = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

  /* Printing the 2D Vector using vutil */
  vutil::print_2d_vector<int>(vector2D);
``` 
  
  * Outputs:
    
```
  (0) |   1   2   3   4
  (1) |   5   6   7   8
  (2) |   9  10  11  12
```
  
* **Getting the size of a 2D Vector**

  * Usage:
    
```cpp
  /* A 2D int Vector */
  std::vector<std::vector<int>> vector2D = { {1, 2, 3, 4}, {5, 6}, {9, 10, 12} };

  /* Getting the size using vutil */
  int vector2D_size = vutil::calculate_2d_vector_size<int>(vector2D);

  /* Printing the size */
  std::cout << vector2D_size;
```
  
  * Outputs:
    
```
  9
```
  
# Installation
Since this is a header-only library, include the [`vutil.hpp`](./src/vutil.hpp) on your project.
