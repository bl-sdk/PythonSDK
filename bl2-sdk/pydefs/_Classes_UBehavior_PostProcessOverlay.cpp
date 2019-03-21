#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessOverlay()
{
    class_< UBehavior_PostProcessOverlay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_PostProcessOverlay", no_init)
        .def_readwrite("OverlayParameters", &UBehavior_PostProcessOverlay::OverlayParameters)
        .def("StaticClass", &UBehavior_PostProcessOverlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessOverlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}