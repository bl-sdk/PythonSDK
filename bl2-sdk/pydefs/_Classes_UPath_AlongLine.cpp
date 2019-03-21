#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_AlongLine()
{
    py::class_< UPath_AlongLine,  UPathConstraint   >("UPath_AlongLine")
        .def_readwrite("Direction", &UPath_AlongLine::Direction)
        .def("StaticClass", &UPath_AlongLine::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_AlongLine::Recycle)
        .def("AlongLine", &UPath_AlongLine::AlongLine)
        .staticmethod("StaticClass")
  ;
}