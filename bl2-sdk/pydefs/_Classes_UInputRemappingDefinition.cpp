#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputRemappingDefinition()
{
    class_< UInputRemappingDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputRemappingDefinition", no_init)
        .def_readwrite("PresetTag", &UInputRemappingDefinition::PresetTag)
        .def_readwrite("PresetCaption", &UInputRemappingDefinition::PresetCaption)
        .def_readwrite("RemappedAxes", &UInputRemappingDefinition::RemappedAxes)
        .def_readwrite("RemappedButtons", &UInputRemappingDefinition::RemappedButtons)
        .def("StaticClass", &UInputRemappingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}