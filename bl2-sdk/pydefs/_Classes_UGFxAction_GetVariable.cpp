#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxAction_GetVariable(py::module &m)
{
    py::class_< UGFxAction_GetVariable,  USequenceAction   >(m, "UGFxAction_GetVariable")
		.def_static("StaticClass", &UGFxAction_GetVariable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Movie", &UGFxAction_GetVariable::Movie)
        .def_readwrite("Variable", &UGFxAction_GetVariable::Variable)
        .def("eventIsValidLevelSequenceObject", &UGFxAction_GetVariable::eventIsValidLevelSequenceObject)
          ;
}