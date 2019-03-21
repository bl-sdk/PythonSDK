#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkState()
{
    py::class_< UAkState,  UAkObject   >("UAkState")
        .def_readwrite("StateGroup", &UAkState::StateGroup)
        .def("StaticClass", &UAkState::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}