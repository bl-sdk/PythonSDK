#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FImpactResponseData()
{
    class_< FImpactResponseData >("FImpactResponseData", no_init)
        .def_readwrite("ImpactType", &FImpactResponseData::ImpactType)
        .def_readwrite("ResponseEffect", &FImpactResponseData::ResponseEffect)
  ;
}