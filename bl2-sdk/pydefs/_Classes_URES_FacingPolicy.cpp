#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URES_FacingPolicy()
{
    class_< URES_FacingPolicy, bases< UObject >  , boost::noncopyable>("URES_FacingPolicy", no_init)
        .def("StaticClass", &URES_FacingPolicy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}