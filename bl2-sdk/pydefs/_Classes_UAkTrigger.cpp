#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkTrigger(py::object m)
{
    py::class_< UAkTrigger,  UAkObject   >(m, "UAkTrigger")
        .def("StaticClass", &UAkTrigger::StaticClass, py::return_value_policy::reference)
          ;
}