#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_AlongLine(py::module &m)
{
    py::class_< UNavMeshPath_AlongLine,  UNavMeshPathConstraint   >(m, "UNavMeshPath_AlongLine")
		.def_static("StaticClass", &UNavMeshPath_AlongLine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Direction", &UNavMeshPath_AlongLine::Direction)
        .def("Recycle", &UNavMeshPath_AlongLine::Recycle)
        .def("AlongLine", &UNavMeshPath_AlongLine::AlongLine)
          ;
}