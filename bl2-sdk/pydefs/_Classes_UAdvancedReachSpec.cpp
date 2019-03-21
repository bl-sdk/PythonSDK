#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAdvancedReachSpec()
{
    class_< UAdvancedReachSpec, bases< UReachSpec >  , boost::noncopyable>("UAdvancedReachSpec", no_init)
        .def("StaticClass", &UAdvancedReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}