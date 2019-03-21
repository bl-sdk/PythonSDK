#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotationRate()
{
    class_< UWillowSkelControl_RotationRate, bases< USkelControlSingleBone >  , boost::noncopyable>("UWillowSkelControl_RotationRate", no_init)
        .def_readwrite("RotationRate", &UWillowSkelControl_RotationRate::RotationRate)
        .def("StaticClass", &UWillowSkelControl_RotationRate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}