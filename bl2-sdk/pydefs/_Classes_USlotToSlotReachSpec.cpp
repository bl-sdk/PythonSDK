#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USlotToSlotReachSpec()
{
    class_< USlotToSlotReachSpec, bases< UForcedReachSpec >  , boost::noncopyable>("USlotToSlotReachSpec", no_init)
        .def_readwrite("SpecDirection", &USlotToSlotReachSpec::SpecDirection)
        .def("StaticClass", &USlotToSlotReachSpec::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}