#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchBase()
{
    class_< USeqCond_SwitchBase, bases< USequenceCondition >  , boost::noncopyable>("USeqCond_SwitchBase", no_init)
        .def("StaticClass", &USeqCond_SwitchBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRemoveValueEntry", &USeqCond_SwitchBase::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchBase::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchBase::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchBase::eventVerifyDefaultCaseValue)
        .staticmethod("StaticClass")
  ;
}