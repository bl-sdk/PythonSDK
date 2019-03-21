#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingCustomization()
{
    class_< FPendingCustomization >("FPendingCustomization", no_init)
        .def_readwrite("Definition", &FPendingCustomization::Definition)
        .def_readwrite("Targets", &FPendingCustomization::Targets)
  ;
}