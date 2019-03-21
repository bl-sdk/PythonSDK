#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULadderReachSpec()
{
    class_< ULadderReachSpec, bases< UReachSpec >  , boost::noncopyable>("ULadderReachSpec", no_init)
        .def("StaticClass", &ULadderReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}