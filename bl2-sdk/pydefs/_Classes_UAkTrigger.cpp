#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkTrigger()
{
    py::class_< UAkTrigger,  UAkObject   >("UAkTrigger")
        .def("StaticClass", &UAkTrigger::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}