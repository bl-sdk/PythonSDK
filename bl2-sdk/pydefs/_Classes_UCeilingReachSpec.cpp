#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCeilingReachSpec()
{
    class_< UCeilingReachSpec, bases< UReachSpec >  , boost::noncopyable>("UCeilingReachSpec", no_init)
        .def("StaticClass", &UCeilingReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}