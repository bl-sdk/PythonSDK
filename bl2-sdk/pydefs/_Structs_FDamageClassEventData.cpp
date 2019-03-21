#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageClassEventData()
{
    class_< FDamageClassEventData >("FDamageClassEventData", no_init)
        .def_readwrite("DamageClassName", &FDamageClassEventData::DamageClassName)
  ;
}