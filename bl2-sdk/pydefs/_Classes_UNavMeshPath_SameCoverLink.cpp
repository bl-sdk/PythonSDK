#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_SameCoverLink()
{
    py::class_< UNavMeshPath_SameCoverLink,  UNavMeshPathConstraint   >("UNavMeshPath_SameCoverLink")
        .def_readwrite("TestLink", &UNavMeshPath_SameCoverLink::TestLink)
        .def("StaticClass", &UNavMeshPath_SameCoverLink::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_SameCoverLink::Recycle)
        .def("SameCoverLink", &UNavMeshPath_SameCoverLink::SameCoverLink)
        .staticmethod("StaticClass")
  ;
}