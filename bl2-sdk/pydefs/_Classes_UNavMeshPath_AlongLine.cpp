#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_AlongLine(py::object m)
{
    py::class_< UNavMeshPath_AlongLine,  UNavMeshPathConstraint   >(m, "UNavMeshPath_AlongLine")
        .def_readwrite("Direction", &UNavMeshPath_AlongLine::Direction)
        .def("StaticClass", &UNavMeshPath_AlongLine::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_AlongLine::Recycle)
        .def("AlongLine", &UNavMeshPath_AlongLine::AlongLine)
          ;
}