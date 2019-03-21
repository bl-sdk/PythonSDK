#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatColorMapEntry()
{
    py::class_< FStatColorMapEntry >("FStatColorMapEntry")
        .def_readwrite("In", &FStatColorMapEntry::In)
        .def_readwrite("Out", &FStatColorMapEntry::Out)
  ;
}