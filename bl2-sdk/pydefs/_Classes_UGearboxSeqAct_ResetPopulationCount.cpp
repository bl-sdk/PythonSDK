#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ResetPopulationCount()
{
    class_< UGearboxSeqAct_ResetPopulationCount, bases< USequenceAction >  , boost::noncopyable>("UGearboxSeqAct_ResetPopulationCount", no_init)
        .def("StaticClass", &UGearboxSeqAct_ResetPopulationCount::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}