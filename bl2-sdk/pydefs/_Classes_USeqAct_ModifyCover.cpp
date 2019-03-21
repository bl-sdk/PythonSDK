#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyCover()
{
    class_< USeqAct_ModifyCover, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ModifyCover", no_init)
        .def_readwrite("Slots", &USeqAct_ModifyCover::Slots)
        .def_readwrite("ManualCoverType", &USeqAct_ModifyCover::ManualCoverType)
        .def("StaticClass", &USeqAct_ModifyCover::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}