cmake_minimum_required (VERSION 2.6)
# Expressly say it's C so that tcc can build inside buildstream
project (bsdemo2 C)
add_executable(bsdemo2 bsdemo2.c)

# Setup include rules for buildstream.
include("GNUInstallDirs")
install(TARGETS bsdemo2 RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
