#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftUpperEyelidLook()
{
    class_< UWillowSkelControl_LeftUpperEyelidLook, bases< UWillowSkelControl_UpperEyelidLook >  , boost::noncopyable>("UWillowSkelControl_LeftUpperEyelidLook", no_init)
        .def("StaticClass", &UWillowSkelControl_LeftUpperEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}