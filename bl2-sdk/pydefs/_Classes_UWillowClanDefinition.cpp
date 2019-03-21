#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowClanDefinition()
{
    class_< UWillowClanDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowClanDefinition", no_init)
        .def_readwrite("MaterialMap", &UWillowClanDefinition::MaterialMap)
        .def_readwrite("SwitchData", &UWillowClanDefinition::SwitchData)
        .def("StaticClass", &UWillowClanDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ChangeObjectMaterials", &UWillowClanDefinition::ChangeObjectMaterials)
        .staticmethod("StaticClass")
  ;
}