#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageTypeSelectorData()
{
    class_< FDamageTypeSelectorData >("FDamageTypeSelectorData", no_init)
        .def_readwrite("AssociatedDamageTypeName", &FDamageTypeSelectorData::AssociatedDamageTypeName)
        .def_readwrite("ValueIfMatched", &FDamageTypeSelectorData::ValueIfMatched)
  ;
}