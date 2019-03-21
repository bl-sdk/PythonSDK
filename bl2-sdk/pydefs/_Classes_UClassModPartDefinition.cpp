#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClassModPartDefinition()
{
    class_< UClassModPartDefinition, bases< UEquipableItemPartDefinition >  , boost::noncopyable>("UClassModPartDefinition", no_init)
        .def("StaticClass", &UClassModPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}