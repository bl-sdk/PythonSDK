#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClipPadEntry(py::module &m)
{
    py::class_< UClipPadEntry,  UObject   >(m, "UClipPadEntry")
		.def_static("StaticClass", &UClipPadEntry::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Title", &UClipPadEntry::Title)
        .def_readwrite("Text", &UClipPadEntry::Text)
          ;
}