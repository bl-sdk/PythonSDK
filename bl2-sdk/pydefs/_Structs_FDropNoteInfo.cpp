#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDropNoteInfo()
{
    py::class_< FDropNoteInfo >("FDropNoteInfo")
        .def_readwrite("Location", &FDropNoteInfo::Location)
        .def_readwrite("Rotation", &FDropNoteInfo::Rotation)
        .def_readwrite("Comment", &FDropNoteInfo::Comment)
  ;
}