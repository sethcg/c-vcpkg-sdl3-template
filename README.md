# Visual Studio Code, Vcpkg, and SDL3 Template

### Description:

<dl>
<dd>
    Template for setting up a Visual Studio Code development environment with C/C++, Vcpkg, SDL3, and Google Test.
</dd>
</dl>

#### Features:

- [x] VSCODE
- [x] CMake
- [x] Vcpkg
- [x] SDL3
- [x] ImGui
- [x] Google Test

---

### Developer Notes:

```bash

# CLONE REPOSITORY WITH VCPKG SUBMODULE
git clone --recursive https://github.com/sethcg/c-vcpkg-sdl3-template.git

```

#### Build Commands:

<details closed>
<summary>Show</summary>

```bash

# CONFIGURE
cmake --preset default

# BUILD DEBUG (RUN TESTS)
cmake --build --preset debug
ctest --preset debug

# BUILD RELEASE
cmake --build --preset release

```

</details>

<br/>

> [!WARNING]
> This template does not cover many of the possible use-cases by default. And is not actively maintained.

</br>

---

> By wisdom a house is built, And by understanding it is established;
