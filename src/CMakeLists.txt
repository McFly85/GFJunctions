option(CPP_STARTER_USE_QT "Enable compilation of QT sample" OFF)
option(CPP_STARTER_USE_FLTK "Enable compilation of FLTK sample" OFF)
option(CPP_STARTER_USE_GTKMM "Enable compilation of GTKMM sample" OFF)
option(CPP_STARTER_USE_IMGUI "Enable compilation of ImGui sample" OFF)
option(CPP_STARTER_USE_NANA "Enable compilation of Nana GUI sample" OFF)
option(CPP_STARTER_USE_SDL "Enable compilation of SDL sample" OFF)

# sdl
if (CPP_STARTER_USE_SDL)
    message("Using SDL2")
    add_subdirectory(sdl)
endif ()

# qt
if (CPP_STARTER_USE_QT)
    message("Using Qt")
    add_subdirectory(qt)
endif ()

# fltk test
if (CPP_STARTER_USE_FLTK)
    message("Using FLTK")
    add_subdirectory(fltk)
endif ()

# gtkmm test
if (CPP_STARTER_USE_GTKMM)
    message("Using gtkmm")
    add_subdirectory(gtkmm)
endif ()

# imgui example
if (CPP_STARTER_USE_IMGUI)
    message("Using Dear ImGui")
    add_subdirectory(imgui)
endif ()

# Nana
if (CPP_STARTER_USE_NANA)
    message("Using Nana")
    add_subdirectory(nana)
endif ()

# Generic test that uses conan libs
add_executable(gfjunction main.cpp)

add_library(data STATIC Data/Ability.cpp Data/Character.cpp Data/GuardianForce.cpp Data/Role.cpp Data/GameState.cpp Data/CharacterBase.cpp Data/JunctionSetup.cpp Data/Junction.cpp Service/GameStateManager.cpp Data/Requirement.cpp Data/Requirement.h ../catch2/catch.hpp)
add_library(persistence STATIC Service/PersistenceManager.cpp)

target_link_libraries(gfjunction data)