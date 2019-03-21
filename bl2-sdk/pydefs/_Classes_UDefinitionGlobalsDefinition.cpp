#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDefinitionGlobalsDefinition()
{
    class_< UDefinitionGlobalsDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDefinitionGlobalsDefinition", no_init)
        .def_readwrite("DefaultColor", &UDefinitionGlobalsDefinition::DefaultColor)
        .def_readwrite("DefaultIcon", &UDefinitionGlobalsDefinition::DefaultIcon)
        .def_readwrite("DefinitionIconData", &UDefinitionGlobalsDefinition::DefinitionIconData)
        .def("StaticClass", &UDefinitionGlobalsDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetIcon", &UDefinitionGlobalsDefinition::GetIcon, return_value_policy< reference_existing_object >())
        .def("GetColor", &UDefinitionGlobalsDefinition::GetColor)
        .staticmethod("StaticClass")
  ;
}