#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceVariable(py::module &m)
{
    py::class_< USequenceVariable,  USequenceObject   >(m, "USequenceVariable")
		.def_static("StaticClass", &USequenceVariable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VarName", &USequenceVariable::VarName)
        .def_readwrite("OptionalAttributeDefinition", &USequenceVariable::OptionalAttributeDefinition)
          ;
}