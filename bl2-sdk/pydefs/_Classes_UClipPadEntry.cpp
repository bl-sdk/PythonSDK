#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClipPadEntry()
{
    py::class_< UClipPadEntry,  UObject   >("UClipPadEntry")
        .def_readwrite("Title", &UClipPadEntry::Title)
        .def_readwrite("Text", &UClipPadEntry::Text)
        .def("StaticClass", &UClipPadEntry::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}