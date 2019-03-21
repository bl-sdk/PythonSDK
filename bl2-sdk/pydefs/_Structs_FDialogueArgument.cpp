#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogueArgument(py::object m)
{
    py::class_< FDialogueArgument >(m, "FDialogueArgument")
        .def_readwrite("Source", &FDialogueArgument::Source)
  ;
}