#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetingDefinition()
{
    class_< UTargetingDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UTargetingDefinition", no_init)
        .def_readwrite("Knowledge", &UTargetingDefinition::Knowledge)
        .def_readwrite("Prioritization", &UTargetingDefinition::Prioritization)
        .def_readwrite("CanTargetIf", &UTargetingDefinition::CanTargetIf)
        .def_readwrite("StopTargetingIf", &UTargetingDefinition::StopTargetingIf)
        .def_readwrite("CanTargetFriendliesIf", &UTargetingDefinition::CanTargetFriendliesIf)
        .def_readwrite("SearchRadius", &UTargetingDefinition::SearchRadius)
        .def("StaticClass", &UTargetingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}