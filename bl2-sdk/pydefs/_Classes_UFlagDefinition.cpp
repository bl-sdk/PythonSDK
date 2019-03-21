#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFlagDefinition()
{
    class_< UFlagDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFlagDefinition", no_init)
        .def_readwrite("EvaluationExpression", &UFlagDefinition::EvaluationExpression)
        .def_readwrite("ContextResolverChain", &UFlagDefinition::ContextResolverChain)
        .def_readwrite("ValueResolver", &UFlagDefinition::ValueResolver)
        .def("StaticClass", &UFlagDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyFlagInitializationData", &UFlagDefinition::ApplyFlagInitializationData)
        .def("ResolveContext", &UFlagDefinition::ResolveContext, return_value_policy< reference_existing_object >())
        .def("SetTrueTimed", &UFlagDefinition::SetTrueTimed)
        .def("SetValue", &UFlagDefinition::SetValue)
        .staticmethod("StaticClass")
  ;
}