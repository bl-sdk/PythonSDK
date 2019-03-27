#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_SameCoverLink(py::module &m)
{
    py::class_< UNavMeshPath_SameCoverLink,  UNavMeshPathConstraint   >(m, "UNavMeshPath_SameCoverLink")
		.def_static("StaticClass", &UNavMeshPath_SameCoverLink::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TestLink", &UNavMeshPath_SameCoverLink::TestLink)
        .def("Recycle", &UNavMeshPath_SameCoverLink::Recycle)
        .def("SameCoverLink", &UNavMeshPath_SameCoverLink::SameCoverLink)
          ;
}