#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxBuddyPlane()
{
    class_< UWillowGFxBuddyPlane, bases< UWillowGFxMovie >  , boost::noncopyable>("UWillowGFxBuddyPlane", no_init)
        .def("StaticClass", &UWillowGFxBuddyPlane::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}