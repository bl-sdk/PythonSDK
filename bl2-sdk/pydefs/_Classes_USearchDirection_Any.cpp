#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_Any()
{
    class_< USearchDirection_Any, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_Any", no_init)
        .def("StaticClass", &USearchDirection_Any::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}