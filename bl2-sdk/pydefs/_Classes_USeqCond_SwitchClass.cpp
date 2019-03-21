#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqCond_SwitchClass()
{
    class_< USeqCond_SwitchClass, bases< USeqCond_SwitchBase >  , boost::noncopyable>("USeqCond_SwitchClass", no_init)
        .def_readwrite("ClassArray", &USeqCond_SwitchClass::ClassArray)
        .def("StaticClass", &USeqCond_SwitchClass::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRemoveValueEntry", &USeqCond_SwitchClass::eventRemoveValueEntry)
        .def("eventInsertValueEntry", &USeqCond_SwitchClass::eventInsertValueEntry)
        .def("eventIsFallThruEnabled", &USeqCond_SwitchClass::eventIsFallThruEnabled)
        .def("eventVerifyDefaultCaseValue", &USeqCond_SwitchClass::eventVerifyDefaultCaseValue)
        .staticmethod("StaticClass")
  ;
}