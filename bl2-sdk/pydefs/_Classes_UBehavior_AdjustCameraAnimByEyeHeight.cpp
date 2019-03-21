#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AdjustCameraAnimByEyeHeight()
{
    class_< UBehavior_AdjustCameraAnimByEyeHeight, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AdjustCameraAnimByEyeHeight", no_init)
        .def_readwrite("BaseEyeHeight", &UBehavior_AdjustCameraAnimByEyeHeight::BaseEyeHeight)
        .def("StaticClass", &UBehavior_AdjustCameraAnimByEyeHeight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AdjustCameraAnimByEyeHeight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}