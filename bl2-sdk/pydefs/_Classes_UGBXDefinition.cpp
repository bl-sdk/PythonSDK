#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXDefinition()
{
    class_< UGBXDefinition, bases< UObject >  , boost::noncopyable>("UGBXDefinition", no_init)
        .def("StaticClass", &UGBXDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitializeDefinitionActor", &UGBXDefinition::InitializeDefinitionActor)
        .def("GetDefinitionActorClass", &UGBXDefinition::GetDefinitionActorClass, return_value_policy< reference_existing_object >())
        .def("StaticGetFullNameForDefinition", &UGBXDefinition::StaticGetFullNameForDefinition)
        .def("GetFullDefinitionName", &UGBXDefinition::GetFullDefinitionName)
        .def("GetDefinition", &UGBXDefinition::GetDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}