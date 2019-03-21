#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicTriggerVolume()
{
    py::class_< ADynamicTriggerVolume,  ATriggerVolume   >("ADynamicTriggerVolume")
        .def("StaticClass", &ADynamicTriggerVolume::StaticClass, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &ADynamicTriggerVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}