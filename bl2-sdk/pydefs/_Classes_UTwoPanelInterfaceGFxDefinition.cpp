#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTwoPanelInterfaceGFxDefinition()
{
    class_< UTwoPanelInterfaceGFxDefinition, bases< UWillowInventoryGFxDefinition >  , boost::noncopyable>("UTwoPanelInterfaceGFxDefinition", no_init)
        .def_readwrite("PathToBackgroundArtClip", &UTwoPanelInterfaceGFxDefinition::PathToBackgroundArtClip)
        .def("StaticClass", &UTwoPanelInterfaceGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}