#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterface_NavigationHandle()
{
    class_< UInterface_NavigationHandle, bases< UInterface >  , boost::noncopyable>("UInterface_NavigationHandle", no_init)
        .def("StaticClass", &UInterface_NavigationHandle::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventNotifyPathChanged", &UInterface_NavigationHandle::eventNotifyPathChanged)
        .staticmethod("StaticClass")
  ;
}