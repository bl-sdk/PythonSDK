#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventData(py::object m)
{
    py::class_< FEventData >(m, "FEventData")
        .def_readwrite("Type", &FEventData::Type)
        .def_readwrite("Data", &FEventData::Data)
        .def_readwrite("mouseIndex", &FEventData::mouseIndex)
        .def_readwrite("Button", &FEventData::Button)
        .def_readwrite("Index", &FEventData::Index)
        .def_readwrite("lastIndex", &FEventData::lastIndex)
        .def_readwrite("controllerIdx", &FEventData::controllerIdx)
  ;
}