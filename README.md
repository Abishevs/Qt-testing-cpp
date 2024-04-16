# Testing Qt in C++ 

Nothing fancy, simply testing out how Native Qt code looks like as I had built
couple of PyQt6/Pyside6 projects and wanted to experiment.

## Prerequisits
Install qt and toolchain
```bash
sudo pacman -S qt5-base qt5-tools gcc cmake --needed
```

## Compile project
```bash
mkdir build && cd build && cmake .. && make 

```

## Run project
```bash
./ClickerT
```
