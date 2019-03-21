#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogEventData()
{
    py::class_< FDialogEventData >("FDialogEventData")
        .def_readwrite("Tag", &FDialogEventData::Tag)
        .def_readwrite("OutputAction", &FDialogEventData::OutputAction)
  ;
}