#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCoverSlipReachSpec()
{
    class_< UCoverSlipReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("UCoverSlipReachSpec", no_init)
        .def_readwrite("SpecDirection", &UCoverSlipReachSpec::SpecDirection)
        .def("StaticClass", &UCoverSlipReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}