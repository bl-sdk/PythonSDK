#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameClassShortName()
{
    py::class_< FGameClassShortName >("FGameClassShortName")
        .def_readwrite("ShortName", &FGameClassShortName::ShortName)
        .def_readwrite("GameClassName", &FGameClassShortName::GameClassName)
  ;
}