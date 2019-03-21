#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftLowerEyelidLook()
{
    class_< UWillowSkelControl_LeftLowerEyelidLook, bases< UWillowSkelControl_LowerEyelidLook >  , boost::noncopyable>("UWillowSkelControl_LeftLowerEyelidLook", no_init)
        .def("StaticClass", &UWillowSkelControl_LeftLowerEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}