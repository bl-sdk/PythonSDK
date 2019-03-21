#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeInitializationDefinition()
{
    class_< UAttributeInitializationDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAttributeInitializationDefinition", no_init)
        .def_readwrite("BaseValueMode", &UAttributeInitializationDefinition::BaseValueMode)
        .def_readwrite("RoundingMode", &UAttributeInitializationDefinition::RoundingMode)
        .def_readwrite("ValueFormula", &UAttributeInitializationDefinition::ValueFormula)
        .def_readwrite("ConditionalInitialization", &UAttributeInitializationDefinition::ConditionalInitialization)
        .def_readwrite("RandomVariance", &UAttributeInitializationDefinition::RandomVariance)
        .def_readwrite("RangeRestriction", &UAttributeInitializationDefinition::RangeRestriction)
        .def("StaticClass", &UAttributeInitializationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBaseValue", &UAttributeInitializationDefinition::SetBaseValue)
        .def("EvaluateInitializationData", &UAttributeInitializationDefinition::EvaluateInitializationData)
        .staticmethod("StaticClass")
  ;
}