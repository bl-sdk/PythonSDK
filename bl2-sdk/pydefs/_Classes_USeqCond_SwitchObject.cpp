#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchObject()
{
    class_< USeqCond_SwitchObject, bases< USeqCond_SwitchBase >  , boost::noncopyable>("USeqCond_SwitchObject", no_init)
        .def_readwrite("SupportedValues", &USeqCond_SwitchObject::SupportedValues)
        .def("StaticClass", &USeqCond_SwitchObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRemoveValueEntry", &USeqCond_SwitchObject::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchObject::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchObject::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchObject::eventVerifyDefaultCaseValue)
        .staticmethod("StaticClass")
  ;
}