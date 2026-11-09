# Lab 9 · Call and return

**Week 09 · Functions**  
**Theme:** Name the process  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Explain what `average` returns and what `printSummary` does, then show a real run.

**Your demo:** https://drive.google.com/drive/folders/1W1cZ-YZIjT51fHjUlCajWEhoP60XR7Nv?usp=sharing


## What to build

The program from class. Four scores stay in `main`. `average` returns the number. `printSummary` only prints it. `main` keeps what comes back.

The homework repo adds a menu to this same program. Do not start a second program. Paste these two functions into the homework `main.cpp`, or keep going in this file and match that menu.

- Declare `const int N = 4` and `int scores[N] = {80, 90, 70, 100}`.
- Write `double average(const int a[], int n)`. The walk lives there. It returns a `double` and does not print. If `n == 0`, return `0`.
- Write `void printSummary(double avg)`. It only prints.
- In `main`: `double avg = average(scores, N);` then `printSummary(avg);`.
- A bare `average(scores, N);` drops 85. `printSummary` then prints 0.
- `main` does not walk the array.

`cout` prints `85` for the value `85.0`. That is the number from class.

```
Average: 85
```

## Starter

Use `main.cpp`. Put your name in the file-top comment.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Scope fence

No classes. No globals. No menu in this repo. The menu is the homework, on this same program.

## Definition of done

- Compiles with zero errors
- `average` returns a `double` and does not print
- `printSummary` only prints
- The return is stored before it is printed
- `main` does not walk the array
- Repo + short demo + Canvas

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |

## Help (`/ring`)

After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
