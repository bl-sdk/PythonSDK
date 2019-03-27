#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributePriorityData(py::module &m)
{
    py::class_< FAttributePriorityData >(m, "FAttributePriorityData")
        .def_readwrite("Attribute", &FAttributePriorityData::Attribute)
        .def_readwrite("PriorityIncrease", &FAttributePriorityData::PriorityIncrease)
  ;
}