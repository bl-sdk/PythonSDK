#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavReference()
{
    class_< FNavReference >("FNavReference", no_init)
        .def_readwrite("Nav", &FNavReference::Nav)
        .def_readwrite("Guid", &FNavReference::Guid)
  ;
}