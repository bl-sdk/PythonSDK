#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicTriggerVolume(py::module &m)
{
    py::class_< ADynamicTriggerVolume,  ATriggerVolume   >(m, "ADynamicTriggerVolume")
        .def("eventPostBeginPlay", &ADynamicTriggerVolume::eventPostBeginPlay)
          ;
}