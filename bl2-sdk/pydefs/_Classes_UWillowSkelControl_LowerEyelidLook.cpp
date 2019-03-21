#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LowerEyelidLook()
{
    class_< UWillowSkelControl_LowerEyelidLook, bases< UWillowSkelControl_EyelidLook >  , boost::noncopyable>("UWillowSkelControl_LowerEyelidLook", no_init)
        .def("StaticClass", &UWillowSkelControl_LowerEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}