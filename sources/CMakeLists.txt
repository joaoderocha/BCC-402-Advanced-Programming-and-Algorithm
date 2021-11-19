add_library(metaheuristic
        menus/Menus.cpp
        menus/Menus.h
        utils/Utils.cpp
        utils/Utils.h
        sa/Sa.cpp
        sa/Sa.h
        ms/Ms.cpp
        ms/Ms.h
        lahc/Lahc.cpp
        lahc/Lahc.h
        ils/Ils.cpp
        ils/Ils.h
        grasp/Grasp.cpp
        grasp/Grasp.h
        descida/Metodos-descida.cpp
        descida/Metodos-descida.h
        construcao/Metodos-construtivos.cpp
        construcao/Metodos-construtivos.h
        busca-tabu/Bt.cpp busca-tabu/Bt.h
        arquivo/Arquivo.cpp
        arquivo/Arquivo.h)
target_include_directories(metaheuristic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
