#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatColorMapEntry(py::object m)
{
    py::class_< FStatColorMapEntry >(m, "FStatColorMapEntry")
        .def_readwrite("In", &FStatColorMapEntry::In)
        .def_readwrite("Out", &FStatColorMapEntry::Out)
  ;
}