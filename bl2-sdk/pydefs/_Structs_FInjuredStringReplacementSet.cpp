#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInjuredStringReplacementSet(py::module &m)
{
    py::class_< FInjuredStringReplacementSet >(m, "FInjuredStringReplacementSet")
        .def_readwrite("Skills", &FInjuredStringReplacementSet::Skills)
        .def_readwrite("NewPlayerInjuredString", &FInjuredStringReplacementSet::NewPlayerInjuredString)
        .def_readwrite("NewInjuredTooltipString1", &FInjuredStringReplacementSet::NewInjuredTooltipString1)
        .def_readwrite("NewInjuredTooltipString2", &FInjuredStringReplacementSet::NewInjuredTooltipString2)
  ;
}