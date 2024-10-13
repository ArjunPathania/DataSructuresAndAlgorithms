## Setting Up VS Code for DSA and CP

### Prerequisites:
* VS Code installed
* C/C++ extension installed

### Steps:

1. **Create a New Project Folder:**
   * Open VS Code.
   * Go to **File** > **Open Folder**.
   * Choose a location for your project folder.

2. **Create Necessary Files:**
   * Inside the project folder, create:
     - A `.cpp` file (e.g., `demo.cpp`) for your code.
     - An `input.txt` file for input data.
     - An `output.txt` file for output.

3. **Configure Task Runner:**
   * Open the **Terminal** in VS Code.
   * Type `code .` to open the current folder.
   * Go to **Terminal** > **Configure Task** > **Create Task**.
   * Choose **Others**.
   * Replace the existing configuration with the following:

   ```json
   {
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compile and run with timeout",
            "type": "shell",
            "command": "bash",
            "args": [
                "-c",
                "cp \"${file}\" \"${workspaceFolder}/jspwTest.cpp\" && g++ jspwTest.cpp -o jspwTest && timeout 10s ./jspwTest < input.txt > output.txt && rm jspwTest jspwTest.cpp"
            ],
            "presentation": {
                "reveal": "never"
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": {
                "owner": "cpp",
                "fileLocation": [
                    "relative",
                    "${workspaceRoot}"
                ],
                "pattern": {
                    "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning|error):\\s+(.*)$",
                    "file": 1,
                    "line": 2,
                    "column": 3,
                    "severity": 4,
                    "message": 5
                }
            }
        }
    ]
    }
   ```

   - Save the configuration.

4. **Run the Code:**
   * Press **Ctrl+Shift+B** to compile and run the code. The input will be read from `input.txt` and the output will be written to `output.txt`.

5. **Original Video:**
How to setup VS code for DSA and CP | Input / Output split format by take U forward: https://youtu.be/h3uDCJ5mvgw?si=R5r5zgR2cOgMDXke
Note: Replace the placeholder URL with the actual link to the YouTube video you mentioned.

### Notes:

* For Java, install the **Java Extension Pack** and replace the task configuration with the appropriate Java compiler and execution commands.
* Adjust the file names and input/output paths according to your specific setup.
* Refer to the VS Code documentation for more advanced configuration options and troubleshooting.
