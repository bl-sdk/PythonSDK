#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCompartmentRunList()
{
    class_< FCompartmentRunList >("FCompartmentRunList", no_init)
  ;
}