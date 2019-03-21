#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USwatTurnReachSpec()
{
    class_< USwatTurnReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("USwatTurnReachSpec", no_init)
        .def_readwrite("SpecDirection", &USwatTurnReachSpec::SpecDirection)
        .def("StaticClass", &USwatTurnReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}