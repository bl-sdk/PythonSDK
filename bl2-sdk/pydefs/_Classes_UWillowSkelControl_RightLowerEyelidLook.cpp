#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RightLowerEyelidLook()
{
    class_< UWillowSkelControl_RightLowerEyelidLook, bases< UWillowSkelControl_LowerEyelidLook >  , boost::noncopyable>("UWillowSkelControl_RightLowerEyelidLook", no_init)
        .def("StaticClass", &UWillowSkelControl_RightLowerEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}