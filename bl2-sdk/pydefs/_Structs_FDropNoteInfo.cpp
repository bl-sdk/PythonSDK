#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDropNoteInfo(py::object m)
{
    py::class_< FDropNoteInfo >(m, "FDropNoteInfo")
        .def_readwrite("Location", &FDropNoteInfo::Location)
        .def_readwrite("Rotation", &FDropNoteInfo::Rotation)
        .def_readwrite("Comment", &FDropNoteInfo::Comment)
  ;
}