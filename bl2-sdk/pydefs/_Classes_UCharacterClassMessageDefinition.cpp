#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterClassMessageDefinition()
{
    class_< UCharacterClassMessageDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UCharacterClassMessageDefinition", no_init)
        .def_readwrite("BehaviorTriggers", &UCharacterClassMessageDefinition::BehaviorTriggers)
        .def("StaticClass", &UCharacterClassMessageDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}