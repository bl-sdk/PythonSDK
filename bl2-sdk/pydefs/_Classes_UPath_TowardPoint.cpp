#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_TowardPoint(py::module &m)
{
    py::class_< UPath_TowardPoint,  UPathConstraint   >(m, "UPath_TowardPoint")
        .def_readwrite("GoalPoint", &UPath_TowardPoint::GoalPoint)
        .def("Recycle", &UPath_TowardPoint::Recycle)
        .def("TowardPoint", &UPath_TowardPoint::TowardPoint)
          ;
}