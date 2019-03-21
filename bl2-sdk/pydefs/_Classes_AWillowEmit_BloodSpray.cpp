#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowEmit_BloodSpray()
{
    py::class_< AWillowEmit_BloodSpray,  AWillowEmit_HitEffect   >("AWillowEmit_BloodSpray")
        .def("StaticClass", &AWillowEmit_BloodSpray::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}