#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorProviderDefinition()
{
    class_< UBehaviorProviderDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBehaviorProviderDefinition", no_init)
        .def_readwrite("CurrentVersion", &UBehaviorProviderDefinition::CurrentVersion)
        .def_readwrite("BehaviorSequences", &UBehaviorProviderDefinition::BehaviorSequences)
        .def("StaticClass", &UBehaviorProviderDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetObjectBehaviorVariable", &UBehaviorProviderDefinition::SetObjectBehaviorVariable)
        .def("SetVectorBehaviorVariable", &UBehaviorProviderDefinition::SetVectorBehaviorVariable)
        .def("SetFloatBehaviorVariable", &UBehaviorProviderDefinition::SetFloatBehaviorVariable)
        .def("SetIntBehaviorVariable", &UBehaviorProviderDefinition::SetIntBehaviorVariable)
        .def("SetBoolBehaviorVariable", &UBehaviorProviderDefinition::SetBoolBehaviorVariable)
        .staticmethod("StaticClass")
  ;
}