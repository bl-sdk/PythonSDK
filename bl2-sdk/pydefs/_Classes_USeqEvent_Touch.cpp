#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_Touch()
{
    class_< USeqEvent_Touch, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_Touch", no_init)
        .def_readwrite("ClassProximityTypes", &USeqEvent_Touch::ClassProximityTypes)
        .def_readwrite("ArchetypeFilter", &USeqEvent_Touch::ArchetypeFilter)
        .def_readwrite("IgnoredClassProximityTypes", &USeqEvent_Touch::IgnoredClassProximityTypes)
        .def_readwrite("TouchedList", &USeqEvent_Touch::TouchedList)
        .def("StaticClass", &USeqEvent_Touch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqEvent_Touch::eventGetObjClassVersion)
        .def("NotifyTouchingPawnDied", &USeqEvent_Touch::NotifyTouchingPawnDied)
        .def("eventToggled", &USeqEvent_Touch::eventToggled)
        .def("CheckUnTouchActivate", &USeqEvent_Touch::CheckUnTouchActivate)
        .def("CheckTouchActivate", &USeqEvent_Touch::CheckTouchActivate)
        .staticmethod("StaticClass")
  ;
}