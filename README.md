# Eudyptula Challenge 

The Eudyptula Challenge was a series of programming exercises for the Linux kernel, that started from a very basic "Hello world" kernel module, moving on up in complexity to getting patches accepted into the main Linux kernel source tree. It's composed of 20 tasks. You can find the subject of the task in the corresponding directory's task.

## Installation

To compile Linux kernel module we need some tools.

Install dependencies

```sh
sudo apt-get install gcc emacs git build-essential valgrind
```

## Usage

```bash
cd eudyptula/
make re clean
./bin/task_nb_task
```
You need to modify task_nb_task in nb task you want to execute.

## License
[MIT](https://choosealicense.com/licenses/mit/)

## Resources used

I'll list here all resources/articles I used for solve this challenge.

## Credits
I'm not at the origin of this challenge. All deserved come back to [@agelastic](https://github.com/agelastic/)