#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceVariable()
{
    py::class_< USequenceVariable,  USequenceObject   >("USequenceVariable")
        .def_readwrite("VarName", &USequenceVariable::VarName)
        .def_readwrite("OptionalAttributeDefinition", &USequenceVariable::OptionalAttributeDefinition)
        .def("StaticClass", &USequenceVariable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}