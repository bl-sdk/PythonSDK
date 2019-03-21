#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USprintDefinition()
{
    class_< USprintDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USprintDefinition", no_init)
        .def_readwrite("FOVModifier", &USprintDefinition::FOVModifier)
        .def_readwrite("EyeHeightModifier", &USprintDefinition::EyeHeightModifier)
        .def_readwrite("BobScalar", &USprintDefinition::BobScalar)
        .def_readwrite("AttributeEffects", &USprintDefinition::AttributeEffects)
        .def("StaticClass", &USprintDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}