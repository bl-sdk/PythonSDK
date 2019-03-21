#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActionSequenceRandomData()
{
    class_< FActionSequenceRandomData >("FActionSequenceRandomData", no_init)
        .def_readwrite("ProbabilityData", &FActionSequenceRandomData::ProbabilityData)
        .def_readwrite("ActionToRunWhenTrue", &FActionSequenceRandomData::ActionToRunWhenTrue)
  ;
}