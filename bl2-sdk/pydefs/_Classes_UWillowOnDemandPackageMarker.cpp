#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnDemandPackageMarker()
{
    class_< UWillowOnDemandPackageMarker, bases< UObject >  , boost::noncopyable>("UWillowOnDemandPackageMarker", no_init)
        .def("StaticClass", &UWillowOnDemandPackageMarker::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}