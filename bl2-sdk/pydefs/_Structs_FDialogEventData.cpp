#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogEventData(py::object m)
{
    py::class_< FDialogEventData >(m, "FDialogEventData")
        .def_readwrite("Tag", &FDialogEventData::Tag)
        .def_readwrite("OutputAction", &FDialogEventData::OutputAction)
  ;
}