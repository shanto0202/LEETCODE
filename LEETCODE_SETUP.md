# LeetCode VS Code setup checkpoint

This repository is configured so that the VS Code LeetCode extension:

- saves problems inside `EASY`, `MEDIUM`, or `HARD` according to difficulty;
- keeps LeetCode's `class Solution` submission format;
- provides C++ IntelliSense without adding headers to every solution file;
- shows the extension's `Test` and `Submit` CodeLens actions.

## Restore on a new PC

1. Clone this repository and open its root folder in VS Code.
2. Install the workspace-recommended extensions when VS Code prompts:
   - LeetCode (`leetcode.vscode-leetcode`)
   - C/C++ (`ms-vscode.cpptools`)
3. Install a C++ compiler such as MinGW GCC if the PC does not already have one.
   Then update `C_Cpp.default.compilerPath` in `.vscode/settings.json` if the
   compiler is installed at a different path. The current PC uses
   `D:/APPLICATIONS/MinGW/bin/g++.exe`.
4. Sign in from the LeetCode extension.
5. Open VS Code **User Settings (JSON)** and merge these settings:

```json
"leetcode.workspaceFolder": "FULL_PATH_TO_THIS_REPOSITORY",
"leetcode.filePath": {
    "default": {
        "folder": "${difficulty}",
        "filename": "${id}.${kebab-case-name}.${ext}"
    }
},
"leetcode.editor.shortcuts": [
    "submit",
    "test"
]
```

For example, the current PC uses:

```json
"leetcode.workspaceFolder": "D:\\LETS TRY\\LEETCODE"
```

6. Run **Developer: Reload Window** from the Command Palette.
7. Open a problem with **LeetCode: Show Problem**. Its file should appear in the matching difficulty folder. Complete the code between `@lc code=start` and `@lc code=end`, then use **Test** or **Submit** below the code.

## Files that must remain in the repository

- `.vscode/settings.json` — workspace-only C++ IntelliSense settings; update its
  compiler path when moving to a PC where MinGW is installed elsewhere
- `.vscode/leetcode.hpp` — headers/types supplied locally to IntelliSense
- `.vscode/extensions.json` — recommended VS Code extensions
- `EASY/.gitkeep`, `MEDIUM/.gitkeep`, and `HARD/.gitkeep` — keep empty difficulty folders in Git

These files should be committed and pushed to GitHub. The `leetcode.workspaceFolder` setting is global to VS Code and contains a PC-specific absolute path, so step 5 must be repeated after moving to another PC or folder.

## Prompt to give an AI assistant

If this setup is ever lost, send the following prompt from the repository root:

> Set up this VS Code LeetCode repository using `LEETCODE_SETUP.md`. Restore difficulty-based file placement, portable C++ IntelliSense for LeetCode `class Solution` files, and direct Test/Submit support. Preserve all existing solutions and verify the configuration without submitting any solution.
