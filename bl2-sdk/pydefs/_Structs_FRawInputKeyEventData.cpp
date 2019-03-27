#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawInputKeyEventData(py::module &m)
{
    py::class_< FRawInputKeyEventData >(m, "FRawInputKeyEventData")
        .def_readwrite("InputKeyName", &FRawInputKeyEventData::InputKeyName)
        .def_readwrite("ModifierKeyFlags", &FRawInputKeyEventData::ModifierKeyFlags)
  ;
}