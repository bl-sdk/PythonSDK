#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionItemPartDefinition()
{
    class_< UMissionItemPartDefinition, bases< UUsableItemPartDefinition >  , boost::noncopyable>("UMissionItemPartDefinition", no_init)
        .def("StaticClass", &UMissionItemPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}