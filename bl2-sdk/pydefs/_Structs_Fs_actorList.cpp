#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Fs_actorList(py::module &m)
{
    py::class_< Fs_actorList >(m, "Fs_actorList")
        .def_readwrite("LevelName", &Fs_actorList::LevelName)
        .def_readwrite("Actor", &Fs_actorList::Actor)
  ;
}