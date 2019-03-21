#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TargetPriority()
{
    class_< UGearboxSeqAct_TargetPriority, bases< USequenceAction >  , boost::noncopyable>("UGearboxSeqAct_TargetPriority", no_init)
        .def_readwrite("AITargets", &UGearboxSeqAct_TargetPriority::AITargets)
        .def_readwrite("PriorityModifier", &UGearboxSeqAct_TargetPriority::PriorityModifier)
        .def("StaticClass", &UGearboxSeqAct_TargetPriority::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}