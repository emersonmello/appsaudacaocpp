cmake_minimum_required(VERSION 3.17)

project(
    appsaudacao
    VERSION 0.1.0
    DESCRIPTION "Aplicação exemplo para usar biblioteca de um outro repositório GitHub"
    LANGUAGES CXX)

add_executable(appsaudacao main.cpp)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  # provendo suporte a pasta pelas IDEs
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)

  include(CTest)
  enable_testing()
endif()

# Evitando o aviso DOWNLOAD_EXTRACT_TIMESTAMP do CMake >= 3.24
if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
  cmake_policy(SET CMP0135 NEW)
endif()

include(FetchContent)

# Obtendo biblioteca saudacao de um repositório GitHub
FetchContent_Declare(
    saudacao
    GIT_REPOSITORY https://github.com/emersonmello/libsaudacaocpp.git
    GIT_TAG 0.1.0

    # Se quiser obter a biblioteca de outro diretório local no seu computador 
    # e não do GitHub, então comente as 2 linhas acima iniciadas com GIT 
    # e descomente a linha abaixo.
    # No exemplo abaixo foi feito uso do caminho relativo, considerando que
    # a biblioteca necessária está no diretório acima chamado: 'libsaudacaocpp' 
    # URL file:///${CMAKE_CURRENT_SOURCE_DIR}/../libsaudacaocpp
)
FetchContent_MakeAvailable(saudacao)

target_link_libraries(appsaudacao PRIVATE saudacao)
