#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogueArgument()
{
    py::class_< FDialogueArgument >("FDialogueArgument")
        .def_readwrite("Source", &FDialogueArgument::Source)
  ;
}