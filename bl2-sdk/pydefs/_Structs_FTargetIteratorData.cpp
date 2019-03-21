#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTargetIteratorData()
{
    class_< FTargetIteratorData >("FTargetIteratorData", no_init)
        .def_readwrite("Iterator", &FTargetIteratorData::Iterator)
        .def_readwrite("Weight", &FTargetIteratorData::Weight)
  ;
}