#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameReleaseDefinition()
{
    py::class_< UGameReleaseDefinition,  UGBXDefinition   >("UGameReleaseDefinition")
        .def_readwrite("WorldDiscoveryStatID", &UGameReleaseDefinition::WorldDiscoveryStatID)
        .def_readwrite("NumWorldDiscoveryAreas", &UGameReleaseDefinition::NumWorldDiscoveryAreas)
        .def("StaticClass", &UGameReleaseDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}