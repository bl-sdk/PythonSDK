#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RightUpperEyelidLook()
{
    class_< UWillowSkelControl_RightUpperEyelidLook, bases< UWillowSkelControl_UpperEyelidLook >  , boost::noncopyable>("UWillowSkelControl_RightUpperEyelidLook", no_init)
        .def("StaticClass", &UWillowSkelControl_RightUpperEyelidLook::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}