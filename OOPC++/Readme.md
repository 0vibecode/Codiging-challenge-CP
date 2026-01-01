Here’s a **clear, step-by-step guide to using Doxygen + Graphviz on Windows inside VS Code**. This is the **most common setup** and works well for C++ projects.

---

## 1. Install Required Tools (Windows)

### ✅ Step 1: Install Doxygen

1. Go to **doxygen.nl**
2. Download the **Windows installer**
3. Install it (default options are fine)

✔ This installs:

* `doxygen.exe`
* GUI tool (Doxywizard)

---

### ✅ Step 2: Install Graphviz

1. Go to **graphviz.org**
2. Download the **Windows installer**
3. During install:

   * ✅ Check **“Add Graphviz to PATH”**

📌 After install, verify:

```powershell
dot -V
```

You should see a version number.

---

## 2. Verify Installation in VS Code

Open **VS Code → Terminal** (PowerShell or CMD):

```powershell
doxygen -v
dot -V
```

If both commands work, you’re ready 👍

---

## 3. Set Up Doxygen in Your C++ Project

### ✅ Step 1: Open Project in VS Code

```
File → Open Folder → Your C++ project
```

---

### ✅ Step 2: Generate Doxyfile

In VS Code terminal:

```powershell
doxygen -g
```

This creates a file named **`Doxyfile`** in your project root.

---

## 4. Configure `Doxyfile` (Important Part)

Open `Doxyfile` in VS Code and update these **key settings**:

### 🔹 Basic Project Info

```text
PROJECT_NAME           = MyCppProject
OUTPUT_DIRECTORY       = docs
```

---

### 🔹 Input Source Files

```text
INPUT                  = src include
FILE_PATTERNS          = *.cpp *.h
RECURSIVE              = YES
```

---

### 🔹 Enable Graphviz Diagrams

```text
HAVE_DOT               = YES
DOT_PATH               =
CLASS_DIAGRAMS         = YES
CALL_GRAPH             = YES
CALLER_GRAPH           = YES
```

📌 Leave `DOT_PATH` empty if Graphviz is in PATH (recommended).

---

### 🔹 Improve Coverage

```text
EXTRACT_ALL            = YES
EXTRACT_PRIVATE        = YES
EXTRACT_STATIC         = YES
```

---

### 🔹 Reduce Noise (Optional but Recommended)

```text
EXCLUDE                = C:/Program Files
```

---

## 5. Generate Documentation

Run:

```powershell
doxygen Doxyfile
```

You’ll see:

```
docs/
 └── html/
     └── index.html
```

---

## 6. View Diagrams in VS Code / Browser

### Option A (Recommended)

Open:

```
docs/html/index.html
```

➡ Right-click → **Open with Live Server**
(or open directly in Chrome/Edge)

---

### Option B (VS Code Preview)

Install extension:

* **Live Server**
  or
* **HTML Preview**

---

## 7. What You’ll See

✔ Class inheritance diagrams
✔ Class collaboration diagrams
✔ Function call graphs
✔ Caller graphs

Click on:

* A **class** → see its diagram
* A **function** → see call/caller graph

---

## 8. Writing Doxygen Comments (Optional but Powerful)

### Example

```cpp
/**
 * @brief Engine class
 */
class Engine {
public:
    /**
     * @brief Start engine
     */
    void start();
};
```

📌 Diagrams work **even without comments**, but comments make docs readable.

---

## 9. Common Problems & Fixes (Windows)

### ❌ No diagrams showing

✔ Check:

```text
HAVE_DOT = YES
```

✔ Verify:

```powershell
dot -V
```

---

### ❌ Graphviz not found

Set manually in `Doxyfile`:

```text
DOT_PATH = "C:/Program Files/Graphviz/bin"
```

---

### ❌ Too many STL classes

Add:

```text
EXCLUDE = /usr/include
```

---

## 10. Recommended VS Code Extensions

(Optional but helpful)

* **C/C++ (Microsoft)**
* **Doxygen Documentation Generator**
* **Live Server**
* **clangd**

---

## 11. Best Workflow (Pro Tip)

1. Run Doxygen once
2. Explore **class diagrams**
3. Drill into **call graphs**
4. Refine `Doxyfile` to reduce clutter
5. Re-run Doxygen as needed

---

## When This Setup is Best

✔ Understanding legacy C++ code
✔ Onboarding new developers
✔ Architecture documentation
✔ Medium to large projects

---

If you want, I can:

* Share a **ready-to-use Doxyfile**
* Help tune diagrams for **very large projects**
* Show **example outputs**
* Explain **templates & virtual functions in diagrams**

Just tell me what you need next 👌
