#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReferencePointComparisonData()
{
    class_< FReferencePointComparisonData >("FReferencePointComparisonData", no_init)
        .def_readwrite("A", &FReferencePointComparisonData::A)
        .def_readwrite("B", &FReferencePointComparisonData::B)
  ;
}