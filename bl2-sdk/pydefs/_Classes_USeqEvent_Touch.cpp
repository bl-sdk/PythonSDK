#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_Touch(py::module &m)
{
    py::class_< USeqEvent_Touch,  USequenceEvent   >(m, "USeqEvent_Touch")
        .def_readwrite("ClassProximityTypes", &USeqEvent_Touch::ClassProximityTypes)
        .def_readwrite("ArchetypeFilter", &USeqEvent_Touch::ArchetypeFilter)
        .def_readwrite("IgnoredClassProximityTypes", &USeqEvent_Touch::IgnoredClassProximityTypes)
        .def_readwrite("TouchedList", &USeqEvent_Touch::TouchedList)
        .def("StaticClass", &USeqEvent_Touch::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqEvent_Touch::eventGetObjClassVersion)
        .def("NotifyTouchingPawnDied", &USeqEvent_Touch::NotifyTouchingPawnDied)
        .def("eventToggled", &USeqEvent_Touch::eventToggled)
        .def("CheckUnTouchActivate", &USeqEvent_Touch::CheckUnTouchActivate)
        .def("CheckTouchActivate", &USeqEvent_Touch::CheckTouchActivate)
          ;
}