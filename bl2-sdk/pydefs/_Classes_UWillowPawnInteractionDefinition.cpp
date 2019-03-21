#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPawnInteractionDefinition()
{
    class_< UWillowPawnInteractionDefinition, bases< UPawnInteractionDefinition >  , boost::noncopyable>("UWillowPawnInteractionDefinition", no_init)
        .def_readwrite("HUDIcon", &UWillowPawnInteractionDefinition::HUDIcon)
        .def_readwrite("HUDIconDef", &UWillowPawnInteractionDefinition::HUDIconDef)
        .def_readwrite("HUDIconDefSecondary", &UWillowPawnInteractionDefinition::HUDIconDefSecondary)
        .def("StaticClass", &UWillowPawnInteractionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}