#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FResultEntry()
{
    class_< FResultEntry >("FResultEntry", no_init)
        .def_readwrite("Game", &FResultEntry::Game)
        .def_readwrite("Name", &FResultEntry::Name)
        .def_readwrite("ExpLevel", &FResultEntry::ExpLevel)
        .def_readwrite("Mission", &FResultEntry::Mission)
        .def_readwrite("PlayThrough", &FResultEntry::PlayThrough)
        .def_readwrite("NumPlayers", &FResultEntry::NumPlayers)
        .def_readwrite("MaxPlayers", &FResultEntry::MaxPlayers)
        .def_readwrite("Ping", &FResultEntry::Ping)
  ;
}