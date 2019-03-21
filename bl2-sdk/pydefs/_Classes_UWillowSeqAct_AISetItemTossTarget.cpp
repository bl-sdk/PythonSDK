#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AISetItemTossTarget()
{
    class_< UWillowSeqAct_AISetItemTossTarget, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AISetItemTossTarget", no_init)
        .def_readwrite("TossTargets", &UWillowSeqAct_AISetItemTossTarget::TossTargets)
        .def("StaticClass", &UWillowSeqAct_AISetItemTossTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}