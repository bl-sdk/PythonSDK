#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection()
{
    class_< USearchDirection, bases< UObject >  , boost::noncopyable>("USearchDirection", no_init)
        .def("StaticClass", &USearchDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}