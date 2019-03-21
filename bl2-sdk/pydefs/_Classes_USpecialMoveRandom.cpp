#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMoveRandom()
{
    py::class_< USpecialMoveRandom,  USpecialMoveDefinition   >("USpecialMoveRandom")
        .def_readwrite("RandomList", &USpecialMoveRandom::RandomList)
        .def("StaticClass", &USpecialMoveRandom::StaticClass, py::return_value_policy::reference)
        .def("Contains", &USpecialMoveRandom::Contains)
        .def("GetSMDToPlay", &USpecialMoveRandom::GetSMDToPlay, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}