#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkelControlModifier()
{
    py::class_< FSkelControlModifier >("FSkelControlModifier")
        .def_readwrite("SkelControlName", &FSkelControlModifier::SkelControlName)
        .def_readwrite("Modifiers", &FSkelControlModifier::Modifiers)
  ;
}