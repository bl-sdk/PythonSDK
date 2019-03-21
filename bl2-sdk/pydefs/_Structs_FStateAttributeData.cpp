#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStateAttributeData(py::object m)
{
    py::class_< FStateAttributeData >(m, "FStateAttributeData")
        .def_readwrite("Key", &FStateAttributeData::Key)
        .def_readwrite("Attribute", &FStateAttributeData::Attribute)
  ;
}