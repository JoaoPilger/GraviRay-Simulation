cmake_minimum_required(VERSION 3.10)
project(GraviRayCpp)

# Define o padrão C++17 (importante para performance e organização)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Procura a SFML no sistema (pacotes libsfml-dev)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# 2. Procura a GLM (pacote libglm-dev)
find_package(glm CONFIG REQUIRED)

# Define o seu arquivo principal
add_executable(Simulator main.cpp
    models/Astro.h)

# 3. Faz a ligação (link) final
target_link_libraries(Simulator PRIVATE sfml-graphics sfml-window sfml-system glm::glm)
