#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicTriggerVolume(py::module &m)
{
    py::class_< ADynamicTriggerVolume,  ATriggerVolume   >(m, "ADynamicTriggerVolume")
		.def_static("StaticClass", &ADynamicTriggerVolume::StaticClass, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &ADynamicTriggerVolume::eventPostBeginPlay)
          ;
}