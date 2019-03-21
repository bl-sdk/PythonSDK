#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_TowardPoint()
{
    py::class_< UPath_TowardPoint,  UPathConstraint   >("UPath_TowardPoint")
        .def_readwrite("GoalPoint", &UPath_TowardPoint::GoalPoint)
        .def("StaticClass", &UPath_TowardPoint::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_TowardPoint::Recycle)
        .def("TowardPoint", &UPath_TowardPoint::TowardPoint)
        .staticmethod("StaticClass")
  ;
}