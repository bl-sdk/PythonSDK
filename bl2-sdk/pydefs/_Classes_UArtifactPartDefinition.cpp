#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UArtifactPartDefinition()
{
    class_< UArtifactPartDefinition, bases< UEquipableItemPartDefinition >  , boost::noncopyable>("UArtifactPartDefinition", no_init)
        .def("StaticClass", &UArtifactPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}