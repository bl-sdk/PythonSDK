#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDialogEventInfo(py::module &m)
{
    py::class_< FDialogEventInfo >(m, "FDialogEventInfo")
        .def_readwrite("Event", &FDialogEventInfo::Event)
        .def_readwrite("NodeID", &FDialogEventInfo::NodeID)
  ;
}