#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UArtifactDefinition()
{
    class_< UArtifactDefinition, bases< UEquipableItemDefinition >  , boost::noncopyable>("UArtifactDefinition", no_init)
        .def("StaticClass", &UArtifactDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetEquipmentLocation", &UArtifactDefinition::GetEquipmentLocation)
        .staticmethod("StaticClass")
  ;
}