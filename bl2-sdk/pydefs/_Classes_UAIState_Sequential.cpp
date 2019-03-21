#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState_Sequential()
{
    py::class_< UAIState_Sequential,  UAIStateBase   >("UAIState_Sequential")
        .def("StaticClass", &UAIState_Sequential::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}