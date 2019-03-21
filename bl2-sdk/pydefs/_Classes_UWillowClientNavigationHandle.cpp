#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowClientNavigationHandle()
{
    class_< UWillowClientNavigationHandle, bases< UWillowNavigationHandle >  , boost::noncopyable>("UWillowClientNavigationHandle", no_init)
        .def("StaticClass", &UWillowClientNavigationHandle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}