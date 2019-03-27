#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlagDefinition(py::module &m)
{
    py::class_< UFlagDefinition,  UGBXDefinition   >(m, "UFlagDefinition")
		.def_static("StaticClass", &UFlagDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EvaluationExpression", &UFlagDefinition::EvaluationExpression)
        .def_readwrite("ContextResolverChain", &UFlagDefinition::ContextResolverChain)
        .def_readwrite("ValueResolver", &UFlagDefinition::ValueResolver)
        .def("ApplyFlagInitializationData", &UFlagDefinition::ApplyFlagInitializationData)
        .def("ResolveContext", &UFlagDefinition::ResolveContext, py::return_value_policy::reference)
        .def("SetTrueTimed", &UFlagDefinition::SetTrueTimed)
        .def("SetValue", &UFlagDefinition::SetValue)
          ;
}