#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_Fs_actorList()
{
    class_< Fs_actorList >("Fs_actorList", no_init)
        .def_readwrite("LevelName", &Fs_actorList::LevelName)
        .def_readwrite("Actor", &Fs_actorList::Actor)
  ;
}