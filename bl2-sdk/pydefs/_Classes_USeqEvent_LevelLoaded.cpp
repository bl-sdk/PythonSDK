#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_LevelLoaded()
{
    py::class_< USeqEvent_LevelLoaded,  USequenceEvent   >("USeqEvent_LevelLoaded")
        .def("StaticClass", &USeqEvent_LevelLoaded::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqEvent_LevelLoaded::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}