#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicSMActor_Spawnable()
{
    py::class_< ADynamicSMActor_Spawnable,  ADynamicSMActor   >("ADynamicSMActor_Spawnable")
        .def("StaticClass", &ADynamicSMActor_Spawnable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}