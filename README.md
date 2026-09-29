# Stack Data Structure Implementation in C

A collection of menu-driven C programs implementing the **Stack (LIFO - Last In, First Out)** data structure using both static array and dynamic linked list representations.

## Programs Included

### 1. Dynamic Stack using Linked List (`STACKDYN.C` / `NONAME02.C`)
* Implements a stack with dynamic memory allocation using pointers (`malloc` and `free`)[cite: 18, 20].
* Dynamic allocation prevents static overflow conditions (except heap exhaustion)[cite: 20].
* **Operations:**
  * **Push:** Allocates a new node, sets its next pointer to top, and updates top[cite: 18, 20].
  * **Pop:** Deletes the node at top, updates top, and frees memory[cite: 18, 20].
  * **Display:** Traverses through stack nodes starting from top[cite: 20].

### 2. Static Stack using Array (`STACIK.C`)
* Implements a stack with fixed capacity using contiguous array allocation (`stack[10]`)[cite: 19].
* Uses an integer variable `top` (initialized to `-1`) to track the top element index[cite: 19].
* **Operations:** Handles overflow (`top == n - 1`), underflow (`top == -1`), Push, Pop, and Display sequentially[cite: 19].

---

## Technical Note
These source files use Turbo C / MS-DOS legacy functions (`<conio.h>`, `clrscr()`, `getch()`)[cite: 18, 19, 20]. If compiling with modern compilers like **GCC**:
* Replace `void main()` with `int main()`[cite: 18, 19, 20]
* Remove `clrscr()` and `getch()`[cite: 18, 19, 20]
