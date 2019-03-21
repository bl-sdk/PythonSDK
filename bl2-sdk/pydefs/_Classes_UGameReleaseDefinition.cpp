#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameReleaseDefinition(py::object m)
{
    py::class_< UGameReleaseDefinition,  UGBXDefinition   >(m, "UGameReleaseDefinition")
        .def_readwrite("WorldDiscoveryStatID", &UGameReleaseDefinition::WorldDiscoveryStatID)
        .def_readwrite("NumWorldDiscoveryAreas", &UGameReleaseDefinition::NumWorldDiscoveryAreas)
        .def("StaticClass", &UGameReleaseDefinition::StaticClass, py::return_value_policy::reference)
          ;
}