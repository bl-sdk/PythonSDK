#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDScalingAnchorDefinition()
{
    class_< UHUDScalingAnchorDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UHUDScalingAnchorDefinition", no_init)
        .def_readwrite("AnchorPosition", &UHUDScalingAnchorDefinition::AnchorPosition)
        .def("StaticClass", &UHUDScalingAnchorDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}