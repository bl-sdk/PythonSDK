#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxGlobalsDefinition()
{
    class_< UGearboxGlobalsDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxGlobalsDefinition", no_init)
        .def_readwrite("RespawnDelayInSeconds", &UGearboxGlobalsDefinition::RespawnDelayInSeconds)
        .def_readwrite("Dialog", &UGearboxGlobalsDefinition::Dialog)
        .def("StaticClass", &UGearboxGlobalsDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}