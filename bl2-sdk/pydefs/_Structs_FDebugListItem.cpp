#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugListItem(py::module &m)
{
    py::class_< FDebugListItem >(m, "FDebugListItem")
        .def_readwrite("DisplayType", &FDebugListItem::DisplayType)
        .def_readwrite("Location", &FDebugListItem::Location)
        .def_readwrite("Location2", &FDebugListItem::Location2)
        .def_readwrite("Location3", &FDebugListItem::Location3)
        .def_readwrite("Texture", &FDebugListItem::Texture)
        .def_readwrite("U", &FDebugListItem::U)
        .def_readwrite("V", &FDebugListItem::V)
        .def_readwrite("UL", &FDebugListItem::UL)
        .def_readwrite("VL", &FDebugListItem::VL)
        .def_readwrite("Scale", &FDebugListItem::Scale)
        .def_readwrite("TextString", &FDebugListItem::TextString)
        .def_readwrite("TextColor", &FDebugListItem::TextColor)
        .def_readwrite("Alignment", &FDebugListItem::Alignment)
  ;
}