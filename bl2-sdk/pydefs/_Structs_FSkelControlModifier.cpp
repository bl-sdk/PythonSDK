#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelControlModifier(py::module &m)
{
    py::class_< FSkelControlModifier >(m, "FSkelControlModifier")
        .def_readwrite("SkelControlName", &FSkelControlModifier::SkelControlName)
        .def_readwrite("Modifiers", &FSkelControlModifier::Modifiers)
  ;
}