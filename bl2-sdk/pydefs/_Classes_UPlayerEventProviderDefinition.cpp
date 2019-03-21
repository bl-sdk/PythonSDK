#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerEventProviderDefinition()
{
    class_< UPlayerEventProviderDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPlayerEventProviderDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UPlayerEventProviderDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIConstructObject", &UPlayerEventProviderDefinition::VfTable_IIConstructObject)
        .def_readwrite("BehaviorProviderDefinition", &UPlayerEventProviderDefinition::BehaviorProviderDefinition)
        .def("StaticClass", &UPlayerEventProviderDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnPlayerEvent", &UPlayerEventProviderDefinition::OnPlayerEvent)
        .def("SetBehaviorProviderDefinition", &UPlayerEventProviderDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UPlayerEventProviderDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}