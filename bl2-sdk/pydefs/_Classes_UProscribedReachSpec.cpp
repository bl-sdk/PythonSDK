#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProscribedReachSpec()
{
    class_< UProscribedReachSpec, bases< UReachSpec >  , boost::noncopyable>("UProscribedReachSpec", no_init)
        .def("StaticClass", &UProscribedReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}