#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_AlongLine(py::module &m)
{
    py::class_< UPath_AlongLine,  UPathConstraint   >(m, "UPath_AlongLine")
        .def_readwrite("Direction", &UPath_AlongLine::Direction)
        .def("Recycle", &UPath_AlongLine::Recycle)
        .def("AlongLine", &UPath_AlongLine::AlongLine)
          ;
}